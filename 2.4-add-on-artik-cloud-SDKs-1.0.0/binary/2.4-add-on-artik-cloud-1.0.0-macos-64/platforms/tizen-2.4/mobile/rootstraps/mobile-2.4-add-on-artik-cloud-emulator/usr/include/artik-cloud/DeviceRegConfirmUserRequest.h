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
 * DeviceRegConfirmUserRequest.h
 *
 * 
 */

#ifndef _DeviceRegConfirmUserRequest_H_
#define _DeviceRegConfirmUserRequest_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class DeviceRegConfirmUserRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceRegConfirmUserRequest();
	DeviceRegConfirmUserRequest(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DeviceRegConfirmUserRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Device ID. Optional if deviceName is present
	 */
	std::string getDeviceId();

	/*! \brief Set Device ID. Optional if deviceName is present
	 */
	void setDeviceId(std::string  deviceId);
	/*! \brief Get Device Name. Optional if deviceId is present
	 */
	std::string getDeviceName();

	/*! \brief Set Device Name. Optional if deviceId is present
	 */
	void setDeviceName(std::string  deviceName);
	/*! \brief Get Pin obtained in the registrations call.
	 */
	std::string getPin();

	/*! \brief Set Pin obtained in the registrations call.
	 */
	void setPin(std::string  pin);

private:
	std::string deviceId;
	std::string deviceName;
	std::string pin;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DeviceRegConfirmUserRequest_H_ */
