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
 * DevicesEnvelope.h
 *
 * Devices Envelope
 */

#ifndef _DevicesEnvelope_H_
#define _DevicesEnvelope_H_


#include <string>
#include "DeviceArray.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Devices Envelope
 *
 */

class DevicesEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	DevicesEnvelope();
	DevicesEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DevicesEnvelope();

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
	DeviceArray getData();

	/*! \brief Set 
	 */
	void setData(DeviceArray  data);

private:
	int total;
	int count;
	int offset;
	DeviceArray data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DevicesEnvelope_H_ */
