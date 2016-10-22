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
 * MessageOut.h
 *
 * Message received by a WebSocket.
 */

#ifndef _MessageOut_H_
#define _MessageOut_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Message received by a WebSocket.
 *
 */

class MessageOut : public Object {
public:
	/*! \brief Constructor.
	 */
	MessageOut();
	MessageOut(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~MessageOut();

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
	/*! \brief Get User ID.
	 */
	std::string getUid();

	/*! \brief Set User ID.
	 */
	void setUid(std::string  uid);
	/*! \brief Get Source Device Type ID.
	 */
	std::string getSdtid();

	/*! \brief Set Source Device Type ID.
	 */
	void setSdtid(std::string  sdtid);
	/*! \brief Get Created Timestamp (past, present or future). Defaults to current time if not provided.
	 */
	long long getCts();

	/*! \brief Set Created Timestamp (past, present or future). Defaults to current time if not provided.
	 */
	void setCts(long long  cts);
	/*! \brief Get Manifest Version.
	 */
	int getMv();

	/*! \brief Set Manifest Version.
	 */
	void setMv(int  mv);

private:
	std::string mid;
	std::string uid;
	std::string sdtid;
	long long cts;
	int mv;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _MessageOut_H_ */
