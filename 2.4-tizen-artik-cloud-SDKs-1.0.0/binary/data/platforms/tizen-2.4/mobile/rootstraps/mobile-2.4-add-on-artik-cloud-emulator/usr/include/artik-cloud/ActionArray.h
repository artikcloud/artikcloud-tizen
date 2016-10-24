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
 * ActionArray.h
 *
 * Holds an array of Actions
 */

#ifndef _ActionArray_H_
#define _ActionArray_H_


#include <string>
#include "Action.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Holds an array of Actions
 *
 */

class ActionArray : public Object {
public:
	/*! \brief Constructor.
	 */
	ActionArray();
	ActionArray(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ActionArray();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<Action> getActions();

	/*! \brief Set 
	 */
	void setActions(std::list <Action> actions);

private:
	std::list <Action>actions;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ActionArray_H_ */
