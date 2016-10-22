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
 * EventFeedData.h
 *
 * WebSocket Event Feed
 */

#ifndef _EventFeedData_H_
#define _EventFeedData_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief WebSocket Event Feed
 *
 */

class EventFeedData : public Object {
public:
	/*! \brief Constructor.
	 */
	EventFeedData();
	EventFeedData(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~EventFeedData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Event
	 */
	std::string getEvent();

	/*! \brief Set Event
	 */
	void setEvent(std::string  event);
	/*! \brief Get Timestamp
	 */
	long long getTs();

	/*! \brief Set Timestamp
	 */
	void setTs(long long  ts);
	/*! \brief Get Message Payload
	 */
	std::map<std::string, std::string> getData();

	/*! \brief Set Message Payload
	 */
	void setData(std::map <std::string, std::string> data);

private:
	std::string event;
	long long ts;
	std::map <std::string, std::string>data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _EventFeedData_H_ */
