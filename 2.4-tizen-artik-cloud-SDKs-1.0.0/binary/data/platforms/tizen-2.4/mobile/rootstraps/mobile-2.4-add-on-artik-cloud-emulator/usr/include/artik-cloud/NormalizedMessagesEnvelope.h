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
 * NormalizedMessagesEnvelope.h
 *
 * Normalized Messages Envelope
 */

#ifndef _NormalizedMessagesEnvelope_H_
#define _NormalizedMessagesEnvelope_H_


#include <string>
#include "NormalizedMessage.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Normalized Messages Envelope
 *
 */

class NormalizedMessagesEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	NormalizedMessagesEnvelope();
	NormalizedMessagesEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~NormalizedMessagesEnvelope();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getSdids();

	/*! \brief Set 
	 */
	void setSdids(std::string  sdids);
	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);
	/*! \brief Get 
	 */
	std::string getUid();

	/*! \brief Set 
	 */
	void setUid(std::string  uid);
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
	std::string getOrder();

	/*! \brief Set 
	 */
	void setOrder(std::string  order);
	/*! \brief Get 
	 */
	std::string getNext();

	/*! \brief Set 
	 */
	void setNext(std::string  next);
	/*! \brief Get 
	 */
	long long getCount();

	/*! \brief Set 
	 */
	void setCount(long long  count);
	/*! \brief Get 
	 */
	long long getSize();

	/*! \brief Set 
	 */
	void setSize(long long  size);
	/*! \brief Get 
	 */
	std::list<NormalizedMessage> getData();

	/*! \brief Set 
	 */
	void setData(std::list <NormalizedMessage> data);

private:
	std::string sdids;
	std::string sdid;
	std::string uid;
	long long startDate;
	long long endDate;
	std::string order;
	std::string next;
	long long count;
	long long size;
	std::list <NormalizedMessage>data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _NormalizedMessagesEnvelope_H_ */
