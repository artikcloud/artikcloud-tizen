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
 * SnapshotResponses.h
 *
 * 
 */

#ifndef _SnapshotResponses_H_
#define _SnapshotResponses_H_


#include <string>
#include "SnapshotResponse.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class SnapshotResponses : public Object {
public:
	/*! \brief Constructor.
	 */
	SnapshotResponses();
	SnapshotResponses(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~SnapshotResponses();

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
	int getSize();

	/*! \brief Set 
	 */
	void setSize(int  size);
	/*! \brief Get 
	 */
	std::list<SnapshotResponse> getData();

	/*! \brief Set 
	 */
	void setData(std::list <SnapshotResponse> data);

private:
	std::string sdids;
	int size;
	std::list <SnapshotResponse>data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _SnapshotResponses_H_ */