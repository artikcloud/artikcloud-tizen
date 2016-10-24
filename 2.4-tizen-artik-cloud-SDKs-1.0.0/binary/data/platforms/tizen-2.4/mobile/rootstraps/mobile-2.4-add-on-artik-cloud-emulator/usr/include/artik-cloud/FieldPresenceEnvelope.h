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
 * FieldPresenceEnvelope.h
 *
 * Field Presence Envelope
 */

#ifndef _FieldPresenceEnvelope_H_
#define _FieldPresenceEnvelope_H_


#include <string>
#include "FieldPresence.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Field Presence Envelope
 *
 */

class FieldPresenceEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	FieldPresenceEnvelope();
	FieldPresenceEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~FieldPresenceEnvelope();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);
	/*! \brief Get 
	 */
	std::string getFieldPresence();

	/*! \brief Set 
	 */
	void setFieldPresence(std::string  fieldPresence);
	/*! \brief Get 
	 */
	long long getStartDate();

	/*! \brief Set 
	 */
	void setStartDate(long long  startDate);
	/*! \brief Get 
	 */
	long long getEndDate();

	/*! \brief Set 
	 */
	void setEndDate(long long  endDate);
	/*! \brief Get 
	 */
	std::string getInterval();

	/*! \brief Set 
	 */
	void setInterval(std::string  interval);
	/*! \brief Get 
	 */
	long long getSize();

	/*! \brief Set 
	 */
	void setSize(long long  size);
	/*! \brief Get 
	 */
	std::list<FieldPresence> getData();

	/*! \brief Set 
	 */
	void setData(std::list <FieldPresence> data);

private:
	std::string sdid;
	std::string fieldPresence;
	long long startDate;
	long long endDate;
	std::string interval;
	long long size;
	std::list <FieldPresence>data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _FieldPresenceEnvelope_H_ */
