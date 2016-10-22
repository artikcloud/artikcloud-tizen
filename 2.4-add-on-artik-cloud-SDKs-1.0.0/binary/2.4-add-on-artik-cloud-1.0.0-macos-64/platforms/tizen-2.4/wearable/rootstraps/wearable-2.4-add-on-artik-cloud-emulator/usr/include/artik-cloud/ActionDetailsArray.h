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
 * ActionDetailsArray.h
 *
 * Contains the array of Action Details
 */

#ifndef _ActionDetailsArray_H_
#define _ActionDetailsArray_H_


#include <string>
#include "ActionDetails.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Contains the array of Action Details
 *
 */

class ActionDetailsArray : public Object {
public:
	/*! \brief Constructor.
	 */
	ActionDetailsArray();
	ActionDetailsArray(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ActionDetailsArray();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<ActionDetails> getActions();

	/*! \brief Set 
	 */
	void setActions(std::list <ActionDetails> actions);

private:
	std::list <ActionDetails>actions;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ActionDetailsArray_H_ */
