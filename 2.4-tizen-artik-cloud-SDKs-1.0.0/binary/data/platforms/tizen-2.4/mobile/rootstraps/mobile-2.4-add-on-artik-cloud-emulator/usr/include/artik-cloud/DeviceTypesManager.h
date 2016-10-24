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

#ifndef _DeviceTypesManager_H_
#define _DeviceTypesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ManifestVersionsEnvelope.h"
#include "DeviceTypeEnvelope.h"
#include "DeviceTypesEnvelope.h"
#include "ManifestPropertiesEnvelope.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class DeviceTypesManager {
public:
	DeviceTypesManager();
	virtual ~DeviceTypesManager();

/*! \brief Get Available Manifest Versions. *Synchronous*
 *
 * Get a Device Type's available manifest versions
 * \param deviceTypeId deviceTypeId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAvailableManifestVersionsSync(char * accessToken,
	std::string deviceTypeId, 
	void(* handler)(ManifestVersionsEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Available Manifest Versions. *Asynchronous*
 *
 * Get a Device Type's available manifest versions
 * \param deviceTypeId deviceTypeId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAvailableManifestVersionsAsync(char * accessToken,
	std::string deviceTypeId, 
	void(* handler)(ManifestVersionsEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Device Type. *Synchronous*
 *
 * Retrieves a Device Type
 * \param deviceTypeId deviceTypeId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTypeSync(char * accessToken,
	std::string deviceTypeId, 
	void(* handler)(DeviceTypeEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Device Type. *Asynchronous*
 *
 * Retrieves a Device Type
 * \param deviceTypeId deviceTypeId *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTypeAsync(char * accessToken,
	std::string deviceTypeId, 
	void(* handler)(DeviceTypeEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Device Types. *Synchronous*
 *
 * Retrieves Device Types
 * \param name Device Type name *Required*
 * \param offset Offset for pagination.
 * \param count Desired count of items in the result set
 * \param tags Elements tagged with the list of tags. (comma separated)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTypesSync(char * accessToken,
	std::string name, int offset, int count, std::string tags, 
	void(* handler)(DeviceTypesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Device Types. *Asynchronous*
 *
 * Retrieves Device Types
 * \param name Device Type name *Required*
 * \param offset Offset for pagination.
 * \param count Desired count of items in the result set
 * \param tags Elements tagged with the list of tags. (comma separated)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTypesAsync(char * accessToken,
	std::string name, int offset, int count, std::string tags, 
	void(* handler)(DeviceTypesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Latest Manifest Properties. *Synchronous*
 *
 * Get a Device Type's manifest properties for the latest version.
 * \param deviceTypeId Device Type ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLatestManifestPropertiesSync(char * accessToken,
	std::string deviceTypeId, 
	void(* handler)(ManifestPropertiesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Latest Manifest Properties. *Asynchronous*
 *
 * Get a Device Type's manifest properties for the latest version.
 * \param deviceTypeId Device Type ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLatestManifestPropertiesAsync(char * accessToken,
	std::string deviceTypeId, 
	void(* handler)(ManifestPropertiesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get manifest properties. *Synchronous*
 *
 * Get a Device Type's manifest properties for a specific version.
 * \param deviceTypeId Device Type ID. *Required*
 * \param version Manifest Version. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getManifestPropertiesSync(char * accessToken,
	std::string deviceTypeId, std::string version, 
	void(* handler)(ManifestPropertiesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get manifest properties. *Asynchronous*
 *
 * Get a Device Type's manifest properties for a specific version.
 * \param deviceTypeId Device Type ID. *Required*
 * \param version Manifest Version. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getManifestPropertiesAsync(char * accessToken,
	std::string deviceTypeId, std::string version, 
	void(* handler)(ManifestPropertiesEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* DeviceTypesManager_H_ */
