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

#ifndef _DevicesManager_H_
#define _DevicesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Device.h"
#include "DeviceEnvelope.h"
#include "DeviceTokenEnvelope.h"
#include "PresenceEnvelope.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class DevicesManager {
public:
	DevicesManager();
	virtual ~DevicesManager();

/*! \brief Add Device. *Synchronous*
 *
 * Create a device
 * \param device Device to be added to the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDeviceSync(char * accessToken,
	Device device, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);

/*! \brief Add Device. *Asynchronous*
 *
 * Create a device
 * \param device Device to be added to the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDeviceAsync(char * accessToken,
	Device device, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);
/*! \brief Delete Device. *Synchronous*
 *
 * Deletes a device
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);

/*! \brief Delete Device. *Asynchronous*
 *
 * Deletes a device
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);
/*! \brief Delete Device Token. *Synchronous*
 *
 * Deletes a device's token
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceTokenSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceTokenEnvelope, Error, void* )
	, void* userData);

/*! \brief Delete Device Token. *Asynchronous*
 *
 * Deletes a device's token
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceTokenAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceTokenEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Device. *Synchronous*
 *
 * Retrieves a device
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Device. *Asynchronous*
 *
 * Retrieves a device
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);
/*! \brief Get device presence information. *Synchronous*
 *
 * Return the presence status of the given device along with the time it was last seen
 * \param deviceId Device ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDevicePresenceSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(PresenceEnvelope, Error, void* )
	, void* userData);

/*! \brief Get device presence information. *Asynchronous*
 *
 * Return the presence status of the given device along with the time it was last seen
 * \param deviceId Device ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDevicePresenceAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(PresenceEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Device Token. *Synchronous*
 *
 * Retrieves a device's token
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTokenSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceTokenEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Device Token. *Asynchronous*
 *
 * Retrieves a device's token
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTokenAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceTokenEnvelope, Error, void* )
	, void* userData);
/*! \brief Update Device. *Synchronous*
 *
 * Updates a device
 * \param deviceId deviceId *Required*
 * \param device Device to be updated *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceSync(char * accessToken,
	std::string deviceId, Device device, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);

/*! \brief Update Device. *Asynchronous*
 *
 * Updates a device
 * \param deviceId deviceId *Required*
 * \param device Device to be updated *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceAsync(char * accessToken,
	std::string deviceId, Device device, 
	void(* handler)(DeviceEnvelope, Error, void* )
	, void* userData);
/*! \brief Update Device Token. *Synchronous*
 *
 * Updates a device's token
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceTokenSync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceTokenEnvelope, Error, void* )
	, void* userData);

/*! \brief Update Device Token. *Asynchronous*
 *
 * Updates a device's token
 * \param deviceId deviceId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceTokenAsync(char * accessToken,
	std::string deviceId, 
	void(* handler)(DeviceTokenEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* DevicesManager_H_ */
