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
 * RulesEnvelope.h
 *
 * Rules Envelope.
 */

#ifndef _RulesEnvelope_H_
#define _RulesEnvelope_H_


#include <string>
#include "OutputRule.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Rules Envelope.
 *
 */

class RulesEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	RulesEnvelope();
	RulesEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~RulesEnvelope();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getCount();

	/*! \brief Set 
	 */
	void setCount(int  count);
	/*! \brief Get 
	 */
	std::list<OutputRule> getData();

	/*! \brief Set 
	 */
	void setData(std::list <OutputRule> data);
	/*! \brief Get 
	 */
	int getOffset();

	/*! \brief Set 
	 */
	void setOffset(int  offset);
	/*! \brief Get 
	 */
	int getTotal();

	/*! \brief Set 
	 */
	void setTotal(int  total);

private:
	int count;
	std::list <OutputRule>data;
	int offset;
	int total;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _RulesEnvelope_H_ */
