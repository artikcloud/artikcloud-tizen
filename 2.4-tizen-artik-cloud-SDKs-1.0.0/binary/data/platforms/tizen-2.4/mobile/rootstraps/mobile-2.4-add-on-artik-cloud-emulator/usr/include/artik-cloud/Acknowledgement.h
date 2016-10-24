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
 * Acknowledgement.h
 *
 * Acknowledgement received by a WebSocket in response to a RegisterMessage, MessageIn or ActionIn.
 */

#ifndef _Acknowledgement_H_
#define _Acknowledgement_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Acknowledgement received by a WebSocket in response to a RegisterMessage, MessageIn or ActionIn.
 *
 */

class Acknowledgement : public Object {
public:
	/*! \brief Constructor.
	 */
	Acknowledgement();
	Acknowledgement(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~Acknowledgement();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Message ID.
	 */
	std::string getMid();

	/*! \brief Set Message ID.
	 */
	void setMid(std::string  mid);
	/*! \brief Get Confirmation ID.
	 */
	std::string getCid();

	/*! \brief Set Confirmation ID.
	 */
	void setCid(std::string  cid);
	/*! \brief Get Message.
	 */
	std::string getMessage();

	/*! \brief Set Message.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Code
	 */
	std::string getCode();

	/*! \brief Set Code
	 */
	void setCode(std::string  code);

private:
	std::string mid;
	std::string cid;
	std::string message;
	std::string code;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _Acknowledgement_H_ */
