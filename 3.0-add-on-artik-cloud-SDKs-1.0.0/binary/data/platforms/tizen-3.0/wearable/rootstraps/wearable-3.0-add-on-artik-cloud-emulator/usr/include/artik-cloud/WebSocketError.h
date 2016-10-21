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
 * WebSocketError.h
 *
 * WebSocket Error Information
 */

#ifndef _WebSocketError_H_
#define _WebSocketError_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief WebSocket Error Information
 *
 */

class WebSocketError : public Object {
public:
	/*! \brief Constructor.
	 */
	WebSocketError();
	WebSocketError(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~WebSocketError();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Message.
	 */
	std::string getMessage();

	/*! \brief Set Message.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Code
	 */
	int getCode();

	/*! \brief Set Code
	 */
	void setCode(int  code);
	/*! \brief Get Confirmation ID
	 */
	std::string getCid();

	/*! \brief Set Confirmation ID
	 */
	void setCid(std::string  cid);

private:
	std::string message;
	int code;
	std::string cid;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _WebSocketError_H_ */
