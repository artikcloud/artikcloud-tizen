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
 * User.h
 *
 * User Information
 */

#ifndef _User_H_
#define _User_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief User Information
 *
 */

class User : public Object {
public:
	/*! \brief Constructor.
	 */
	User();
	User(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~User();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	std::string getFullName();

	/*! \brief Set 
	 */
	void setFullName(std::string  fullName);
	/*! \brief Get 
	 */
	std::string getSaIdentity();

	/*! \brief Set 
	 */
	void setSaIdentity(std::string  saIdentity);
	/*! \brief Get 
	 */
	long long getCreatedOn();

	/*! \brief Set 
	 */
	void setCreatedOn(long long  createdOn);
	/*! \brief Get 
	 */
	long long getModifiedOn();

	/*! \brief Set 
	 */
	void setModifiedOn(long long  modifiedOn);

private:
	std::string id;
	std::string name;
	std::string email;
	std::string fullName;
	std::string saIdentity;
	long long createdOn;
	long long modifiedOn;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _User_H_ */
