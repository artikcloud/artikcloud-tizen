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
 * AppProperties.h
 *
 * User Application Properties
 */

#ifndef _AppProperties_H_
#define _AppProperties_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief User Application Properties
 *
 */

class AppProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	AppProperties();
	AppProperties(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~AppProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getUid();

	/*! \brief Set 
	 */
	void setUid(std::string  uid);
	/*! \brief Get 
	 */
	std::string getAid();

	/*! \brief Set 
	 */
	void setAid(std::string  aid);
	/*! \brief Get 
	 */
	std::string getProperties();

	/*! \brief Set 
	 */
	void setProperties(std::string  properties);

private:
	std::string uid;
	std::string aid;
	std::string properties;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _AppProperties_H_ */
