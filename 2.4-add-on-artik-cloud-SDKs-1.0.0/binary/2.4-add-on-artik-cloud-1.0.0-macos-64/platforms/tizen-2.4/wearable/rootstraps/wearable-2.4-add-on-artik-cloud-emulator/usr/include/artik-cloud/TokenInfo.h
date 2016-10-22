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
 * TokenInfo.h
 *
 * 
 */

#ifndef _TokenInfo_H_
#define _TokenInfo_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class TokenInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	TokenInfo();
	TokenInfo(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~TokenInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClientId();

	/*! \brief Set 
	 */
	void setClientId(std::string  client_id);
	/*! \brief Get 
	 */
	std::string getDeviceId();

	/*! \brief Set 
	 */
	void setDeviceId(std::string  device_id);
	/*! \brief Get 
	 */
	int getExpiresIn();

	/*! \brief Set 
	 */
	void setExpiresIn(int  expires_in);
	/*! \brief Get 
	 */
	std::string getUserId();

	/*! \brief Set 
	 */
	void setUserId(std::string  user_id);

private:
	std::string client_id;
	std::string device_id;
	int expires_in;
	std::string user_id;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _TokenInfo_H_ */
