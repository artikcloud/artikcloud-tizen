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
 * DeviceRegStatusResponse.h
 *
 * 
 */

#ifndef _DeviceRegStatusResponse_H_
#define _DeviceRegStatusResponse_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class DeviceRegStatusResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceRegStatusResponse();
	DeviceRegStatusResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DeviceRegStatusResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The created or existing device id.
	 */
	std::string getDid();

	/*! \brief Set The created or existing device id.
	 */
	void setDid(std::string  did);
	/*! \brief Get Status of the ongoing device registration request.
	 */
	std::string getStatus();

	/*! \brief Set Status of the ongoing device registration request.
	 */
	void setStatus(std::string  status);

private:
	std::string did;
	std::string status;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DeviceRegStatusResponse_H_ */
