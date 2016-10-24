/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * AggregatesHistogramData.h
 *
 * Aggregates Histogram Data
 */

#ifndef _AggregatesHistogramData_H_
#define _AggregatesHistogramData_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Aggregates Histogram Data
 *
 */

class AggregatesHistogramData : public Object {
public:
	/*! \brief Constructor.
	 */
	AggregatesHistogramData();
	AggregatesHistogramData(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~AggregatesHistogramData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCount();

	/*! \brief Set 
	 */
	void setCount(long long  count);
	/*! \brief Get 
	 */
	float getMax();

	/*! \brief Set 
	 */
	void setMax(float  max);
	/*! \brief Get 
	 */
	float getMean();

	/*! \brief Set 
	 */
	void setMean(float  mean);
	/*! \brief Get 
	 */
	float getMin();

	/*! \brief Set 
	 */
	void setMin(float  min);
	/*! \brief Get 
	 */
	float getSum();

	/*! \brief Set 
	 */
	void setSum(float  sum);
	/*! \brief Get 
	 */
	long long getTs();

	/*! \brief Set 
	 */
	void setTs(long long  ts);
	/*! \brief Get 
	 */
	float getVariance();

	/*! \brief Set 
	 */
	void setVariance(float  variance);

private:
	long long count;
	float max;
	float mean;
	float min;
	float sum;
	long long ts;
	float variance;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _AggregatesHistogramData_H_ */
