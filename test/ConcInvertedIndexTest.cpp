/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to you under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "../include/ConcInvertedIndex.h"

int testInvertedIndex(int debugMode)
	{
		inv_index<3,0> *index1;
		int att_values[3];
		int return_value;
		int numberOfTestsPassed;
		int numberOfTestsFailed;

		numberOfTestsPassed = 0;
		numberOfTestsFailed = 0;
		return_value = 0;
		index1 = new inv_index<3,0>;
		att_values[0] = 3;
		att_values[1] = 4;
		att_values[2] = 5;

		insert_val(att_values, index1);

		return_value = search_val(&(att_values[0]), index1);

		if (return_value == 1)
		{
		  if (debugMode)
		    cout<<"values found"<<" "<<return_value<<endl;

		  ++numberOfTestsPassed;
		}
		else
		{
		  if (debugMode)
		    cout<<"values not found"<<" "<<return_value<<endl;

		  ++numberOfTestsFailed;

		}

		return numberOfTestsFailed;

	}
