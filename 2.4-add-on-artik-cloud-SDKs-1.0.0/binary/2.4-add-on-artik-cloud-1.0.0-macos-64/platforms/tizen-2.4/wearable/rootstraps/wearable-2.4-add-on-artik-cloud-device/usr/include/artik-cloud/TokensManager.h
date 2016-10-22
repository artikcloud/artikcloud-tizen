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

#ifndef _TokensManager_H_
#define _TokensManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "TokenRequest.h"
#include "CheckTokenResponse.h"
#include "RefreshTokenResponse.h"
#include "TokenInfoSuccessResponse.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class TokensManager {
public:
	TokensManager();
	virtual ~TokensManager();

/*! \brief Check Token. *Synchronous*
 *
 * (Deprecated) Check Token. See tokenInfo
 * \param tokenInfo Token object to be checked *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool checkTokenSync(char * accessToken,
	TokenRequest tokenInfo, 
	void(* handler)(CheckTokenResponse, Error, void* )
	, void* userData);

/*! \brief Check Token. *Asynchronous*
 *
 * (Deprecated) Check Token. See tokenInfo
 * \param tokenInfo Token object to be checked *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool checkTokenAsync(char * accessToken,
	TokenRequest tokenInfo, 
	void(* handler)(CheckTokenResponse, Error, void* )
	, void* userData);
/*! \brief Refresh Token. *Synchronous*
 *
 * Refresh Token
 * \param grantType Grant Type. *Required*
 * \param refreshToken Refresh Token. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool refreshTokenSync(char * accessToken,
	std::string grantType, std::string refreshToken, 
	void(* handler)(RefreshTokenResponse, Error, void* )
	, void* userData);

/*! \brief Refresh Token. *Asynchronous*
 *
 * Refresh Token
 * \param grantType Grant Type. *Required*
 * \param refreshToken Refresh Token. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool refreshTokenAsync(char * accessToken,
	std::string grantType, std::string refreshToken, 
	void(* handler)(RefreshTokenResponse, Error, void* )
	, void* userData);
/*! \brief Token Info. *Synchronous*
 *
 * Returns the Token Information
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool tokenInfoSync(char * accessToken,
	
	void(* handler)(TokenInfoSuccessResponse, Error, void* )
	, void* userData);

/*! \brief Token Info. *Asynchronous*
 *
 * Returns the Token Information
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool tokenInfoAsync(char * accessToken,
	
	void(* handler)(TokenInfoSuccessResponse, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* TokensManager_H_ */
