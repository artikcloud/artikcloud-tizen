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
 * RefreshTokenResponse.h
 *
 * 
 */

#ifndef _RefreshTokenResponse_H_
#define _RefreshTokenResponse_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class RefreshTokenResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	RefreshTokenResponse();
	RefreshTokenResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~RefreshTokenResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAccessToken();

	/*! \brief Set 
	 */
	void setAccessToken(std::string  access_token);
	/*! \brief Get 
	 */
	long long getExpiresIn();

	/*! \brief Set 
	 */
	void setExpiresIn(long long  expires_in);
	/*! \brief Get 
	 */
	std::string getRefreshToken();

	/*! \brief Set 
	 */
	void setRefreshToken(std::string  refresh_token);
	/*! \brief Get 
	 */
	std::string getTokenType();

	/*! \brief Set 
	 */
	void setTokenType(std::string  token_type);

private:
	std::string access_token;
	long long expires_in;
	std::string refresh_token;
	std::string token_type;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _RefreshTokenResponse_H_ */
