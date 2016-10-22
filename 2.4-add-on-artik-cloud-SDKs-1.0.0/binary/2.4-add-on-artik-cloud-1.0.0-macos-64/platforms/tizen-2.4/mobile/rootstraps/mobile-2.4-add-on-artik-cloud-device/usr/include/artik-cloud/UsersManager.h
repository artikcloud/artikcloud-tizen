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

#ifndef _UsersManager_H_
#define _UsersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PropertiesEnvelope.h"
#include "AppProperties.h"
#include "UserEnvelope.h"
#include "DeviceTypesEnvelope.h"
#include "DevicesEnvelope.h"
#include "RulesEnvelope.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class UsersManager {
public:
	UsersManager();
	virtual ~UsersManager();

/*! \brief Create User Application Properties. *Synchronous*
 *
 * Create application properties for a user
 * \param userId User Id *Required*
 * \param properties Properties to be updated *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createUserPropertiesSync(char * accessToken,
	std::string userId, AppProperties properties, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);

/*! \brief Create User Application Properties. *Asynchronous*
 *
 * Create application properties for a user
 * \param userId User Id *Required*
 * \param properties Properties to be updated *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createUserPropertiesAsync(char * accessToken,
	std::string userId, AppProperties properties, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);
/*! \brief Delete User Application Properties. *Synchronous*
 *
 * Deletes a user's application properties
 * \param userId User Id *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteUserPropertiesSync(char * accessToken,
	std::string userId, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);

/*! \brief Delete User Application Properties. *Asynchronous*
 *
 * Deletes a user's application properties
 * \param userId User Id *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteUserPropertiesAsync(char * accessToken,
	std::string userId, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Current User Profile. *Synchronous*
 *
 * Get's the current user's profile
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSelfSync(char * accessToken,
	
	void(* handler)(UserEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Current User Profile. *Asynchronous*
 *
 * Get's the current user's profile
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSelfAsync(char * accessToken,
	
	void(* handler)(UserEnvelope, Error, void* )
	, void* userData);
/*! \brief Get User Device Types. *Synchronous*
 *
 * Retrieve User's Device Types
 * \param userId User ID. *Required*
 * \param offset Offset for pagination.
 * \param count Desired count of items in the result set
 * \param includeShared Optional. Boolean (true/false) - If false, only return the user's device types. If true, also return device types shared by other users.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserDeviceTypesSync(char * accessToken,
	std::string userId, int offset, int count, bool includeShared, 
	void(* handler)(DeviceTypesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get User Device Types. *Asynchronous*
 *
 * Retrieve User's Device Types
 * \param userId User ID. *Required*
 * \param offset Offset for pagination.
 * \param count Desired count of items in the result set
 * \param includeShared Optional. Boolean (true/false) - If false, only return the user's device types. If true, also return device types shared by other users.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserDeviceTypesAsync(char * accessToken,
	std::string userId, int offset, int count, bool includeShared, 
	void(* handler)(DeviceTypesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get User Devices. *Synchronous*
 *
 * Retrieve User's Devices
 * \param userId User ID *Required*
 * \param offset Offset for pagination.
 * \param count Desired count of items in the result set
 * \param includeProperties Optional. Boolean (true/false) - If false, only return the user's device types. If true, also return device types shared by other users.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserDevicesSync(char * accessToken,
	std::string userId, int offset, int count, bool includeProperties, 
	void(* handler)(DevicesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get User Devices. *Asynchronous*
 *
 * Retrieve User's Devices
 * \param userId User ID *Required*
 * \param offset Offset for pagination.
 * \param count Desired count of items in the result set
 * \param includeProperties Optional. Boolean (true/false) - If false, only return the user's device types. If true, also return device types shared by other users.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserDevicesAsync(char * accessToken,
	std::string userId, int offset, int count, bool includeProperties, 
	void(* handler)(DevicesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get User application properties. *Synchronous*
 *
 * Get application properties of a user
 * \param userId User Id *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserPropertiesSync(char * accessToken,
	std::string userId, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get User application properties. *Asynchronous*
 *
 * Get application properties of a user
 * \param userId User Id *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserPropertiesAsync(char * accessToken,
	std::string userId, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get User Rules. *Synchronous*
 *
 * Retrieve User's Rules
 * \param userId User ID. *Required*
 * \param excludeDisabled Exclude disabled rules in the result.
 * \param count Desired count of items in the result set.
 * \param offset Offset for pagination.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRulesSync(char * accessToken,
	std::string userId, bool excludeDisabled, int count, int offset, 
	void(* handler)(RulesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get User Rules. *Asynchronous*
 *
 * Retrieve User's Rules
 * \param userId User ID. *Required*
 * \param excludeDisabled Exclude disabled rules in the result.
 * \param count Desired count of items in the result set.
 * \param offset Offset for pagination.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRulesAsync(char * accessToken,
	std::string userId, bool excludeDisabled, int count, int offset, 
	void(* handler)(RulesEnvelope, Error, void* )
	, void* userData);
/*! \brief Update User Application Properties. *Synchronous*
 *
 * Updates application properties of a user
 * \param userId User Id *Required*
 * \param properties Properties to be updated *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserPropertiesSync(char * accessToken,
	std::string userId, AppProperties properties, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);

/*! \brief Update User Application Properties. *Asynchronous*
 *
 * Updates application properties of a user
 * \param userId User Id *Required*
 * \param properties Properties to be updated *Required*
 * \param aid Application ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserPropertiesAsync(char * accessToken,
	std::string userId, AppProperties properties, std::string aid, 
	void(* handler)(PropertiesEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* UsersManager_H_ */
