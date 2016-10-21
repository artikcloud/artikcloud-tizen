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
 * DeviceTokenEnvelope.h
 *
 * Device Token Envelope
 */

#ifndef _DeviceTokenEnvelope_H_
#define _DeviceTokenEnvelope_H_


#include <string>
#include "DeviceToken.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Device Token Envelope
 *
 */

class DeviceTokenEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceTokenEnvelope();
	DeviceTokenEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DeviceTokenEnvelope();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	DeviceToken getData();

	/*! \brief Set 
	 */
	void setData(DeviceToken  data);

private:
	DeviceToken data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DeviceTokenEnvelope_H_ */
