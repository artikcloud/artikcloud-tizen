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
 * SnapshotsResponseEnvelope.h
 *
 * 
 */

#ifndef _SnapshotsResponseEnvelope_H_
#define _SnapshotsResponseEnvelope_H_


#include <string>
#include "SnapshotResponses.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class SnapshotsResponseEnvelope : public Object {
public:
	/*! \brief Constructor.
	 */
	SnapshotsResponseEnvelope();
	SnapshotsResponseEnvelope(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~SnapshotsResponseEnvelope();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	SnapshotResponses getData();

	/*! \brief Set 
	 */
	void setData(SnapshotResponses  data);
	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);

private:
	SnapshotResponses data;
	std::string sdid;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _SnapshotsResponseEnvelope_H_ */
