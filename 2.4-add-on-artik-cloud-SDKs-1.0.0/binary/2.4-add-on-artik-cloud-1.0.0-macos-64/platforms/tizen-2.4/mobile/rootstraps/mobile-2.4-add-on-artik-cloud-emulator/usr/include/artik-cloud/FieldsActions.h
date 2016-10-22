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
 * FieldsActions.h
 *
 * Fields and Actions
 */

#ifndef _FieldsActions_H_
#define _FieldsActions_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Fields and Actions
 *
 */

class FieldsActions : public Object {
public:
	/*! \brief Constructor.
	 */
	FieldsActions();
	FieldsActions(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~FieldsActions();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Message Fields
	 */
	std::map<std::string, std::string> getFields();

	/*! \brief Set Message Fields
	 */
	void setFields(std::map <std::string, std::string> fields);
	/*! \brief Get Actions
	 */
	std::map<std::string, std::string> getActions();

	/*! \brief Set Actions
	 */
	void setActions(std::map <std::string, std::string> actions);

private:
	std::map <std::string, std::string>fields;
	std::map <std::string, std::string>actions;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _FieldsActions_H_ */
