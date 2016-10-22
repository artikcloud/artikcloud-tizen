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

#ifndef _RegistrationsManager_H_
#define _RegistrationsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "DeviceRegConfirmUserRequest.h"
#include "DeviceRegConfirmUserResponseEnvelope.h"
#include "DeviceRegStatusResponseEnvelope.h"
#include "UnregisterDeviceResponseEnvelope.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class RegistrationsManager {
public:
	RegistrationsManager();
	virtual ~RegistrationsManager();

/*! \brief Confirm User. *Synchronous*
 *
 * This call updates the registration request issued earlier by associating it with an authenticated user and captures all additional information required to add a new device.
 * \param registrationInfo Device Registration information. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool confirmUserSync(char * accessToken,
	DeviceRegConfirmUserRequest registrationInfo, 
	void(* handler)(DeviceRegConfirmUserResponseEnvelope, Error, void* )
	, void* userData);

/*! \brief Confirm User. *Asynchronous*
 *
 * This call updates the registration request issued earlier by associating it with an authenticated user and captures all additional information required to add a new device.
 * \param registrationInfo Device Registration information. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool confirmUserAsync(char * accessToken,
	DeviceRegConfirmUserRequest registrationInfo, 
	void(* handler)(DeviceRegConfirmUserResponseEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Request Status For User. *Synchronous*
 *
 * This call checks the status of the request so users can poll and know when registration is complete.
 * \param requestId Request ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRequestStatusForUserSync(char * accessToken,
	std::string requestId, 
	void(* handler)(DeviceRegStatusResponseEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Request Status For User. *Asynchronous*
 *
 * This call checks the status of the request so users can poll and know when registration is complete.
 * \param requestId Request ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRequestStatusForUserAsync(char * accessToken,
	std::string requestId, 
	void(* handler)(DeviceRegStatusResponseEnvelope, Error, void* )
	, void* userData);
/*! \brief Unregister Device. *Synchronous*
 *
 * This call clears any associations from the secure device registration.
 * \param deviceId Device ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool unregisterDeviceSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(UnregisterDeviceResponseEnvelope, Error, void* )
	, void* userData);

/*! \brief Unregister Device. *Asynchronous*
 *
 * This call clears any associations from the secure device registration.
 * \param deviceId Device ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool unregisterDeviceAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(UnregisterDeviceResponseEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* RegistrationsManager_H_ */
