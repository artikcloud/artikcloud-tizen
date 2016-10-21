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
 * ActionDetails.h
 *
 * Action details.
 */

#ifndef _ActionDetails_H_
#define _ActionDetails_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Action details.
 *
 */

class ActionDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	ActionDetails();
	ActionDetails(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ActionDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Parameters.
	 */
	std::map<std::string, std::string> getParameters();

	/*! \brief Set Parameters.
	 */
	void setParameters(std::map <std::string, std::string> parameters);
	/*! \brief Get Name.
	 */
	std::string getName();

	/*! \brief Set Name.
	 */
	void setName(std::string  name);

private:
	std::map <std::string, std::string>parameters;
	std::string name;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ActionDetails_H_ */
