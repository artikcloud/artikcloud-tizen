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
 * DeviceTypesEnvelope.h
 *
 * DeviceTypes Envelope
 */

#ifndef _DeviceTypesEnvelope_H_
#define _DeviceTypesEnvelope_H_


#include <string>
#include "DeviceTypeArray.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief DeviceTypes Envelope
 *
 */

class DeviceTypesEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceTypesEnvelope();
	DeviceTypesEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DeviceTypesEnvelope();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getTotal();

	/*! \brief Set 
	 */
	void setTotal(int  total);
	/*! \brief Get 
	 */
	int getCount();

	/*! \brief Set 
	 */
	void setCount(int  count);
	/*! \brief Get 
	 */
	int getOffset();

	/*! \brief Set 
	 */
	void setOffset(int  offset);
	/*! \brief Get 
	 */
	DeviceTypeArray getData();

	/*! \brief Set 
	 */
	void setData(DeviceTypeArray  data);

private:
	int total;
	int count;
	int offset;
	DeviceTypeArray data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DeviceTypesEnvelope_H_ */
