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
 * PresenceModel.h
 *
 * 
 */

#ifndef _PresenceModel_H_
#define _PresenceModel_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class PresenceModel : public Object {
public:
	/*! \brief Constructor.
	 */
	PresenceModel();
	PresenceModel(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~PresenceModel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getConnected();

	/*! \brief Set 
	 */
	void setConnected(bool  connected);
	/*! \brief Get 
	 */
	long long getLastSeenOn();

	/*! \brief Set 
	 */
	void setLastSeenOn(long long  lastSeenOn);

private:
	bool connected;
	long long lastSeenOn;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _PresenceModel_H_ */
