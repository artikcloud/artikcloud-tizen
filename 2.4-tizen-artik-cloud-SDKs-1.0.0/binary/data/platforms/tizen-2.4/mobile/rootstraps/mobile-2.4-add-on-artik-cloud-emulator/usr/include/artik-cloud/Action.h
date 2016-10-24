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
 * Action.h
 *
 * Action Information.
 */

#ifndef _Action_H_
#define _Action_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Action Information.
 *
 */

class Action : public Object {
public:
	/*! \brief Constructor.
	 */
	Action();
	Action(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~Action();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Action name.
	 */
	std::string getName();

	/*! \brief Set Action name.
	 */
	void setName(std::string  name);
	/*! \brief Get Parameters information
	 */
	std::map<std::string, std::string> getParameters();

	/*! \brief Set Parameters information
	 */
	void setParameters(std::map <std::string, std::string> parameters);

private:
	std::string name;
	std::map <std::string, std::string>parameters;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _Action_H_ */
