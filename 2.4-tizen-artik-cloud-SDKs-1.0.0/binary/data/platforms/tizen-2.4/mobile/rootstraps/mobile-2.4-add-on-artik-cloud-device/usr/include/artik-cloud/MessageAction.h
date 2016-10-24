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
 * MessageAction.h
 *
 * Message or Action Information.
 */

#ifndef _MessageAction_H_
#define _MessageAction_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Message or Action Information.
 *
 */

class MessageAction : public Object {
public:
	/*! \brief Constructor.
	 */
	MessageAction();
	MessageAction(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~MessageAction();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::map<std::string, std::string> getData();

	/*! \brief Set 
	 */
	void setData(std::map <std::string, std::string> data);
	/*! \brief Get Destination Device ID.
	 */
	std::string getDdid();

	/*! \brief Set Destination Device ID.
	 */
	void setDdid(std::string  ddid);
	/*! \brief Get Source Device ID.
	 */
	std::string getSdid();

	/*! \brief Set Source Device ID.
	 */
	void setSdid(std::string  sdid);
	/*! \brief Get Timestamp (past, present or future). Defaults to current time if not provided.
	 */
	long long getTs();

	/*! \brief Set Timestamp (past, present or future). Defaults to current time if not provided.
	 */
	void setTs(long long  ts);
	/*! \brief Get Type.
	 */
	std::string getType();

	/*! \brief Set Type.
	 */
	void setType(std::string  type);

private:
	std::map <std::string, std::string>data;
	std::string ddid;
	std::string sdid;
	long long ts;
	std::string type;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _MessageAction_H_ */
