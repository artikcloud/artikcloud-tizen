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
 * RuleUpdateInfo.h
 *
 * Class to update an existing Rule.
 */

#ifndef _RuleUpdateInfo_H_
#define _RuleUpdateInfo_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Class to update an existing Rule.
 *
 */

class RuleUpdateInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	RuleUpdateInfo();
	RuleUpdateInfo(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~RuleUpdateInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Description
	 */
	std::string getDescription();

	/*! \brief Set Description
	 */
	void setDescription(std::string  description);
	/*! \brief Get Is Enabled
	 */
	bool getEnabled();

	/*! \brief Set Is Enabled
	 */
	void setEnabled(bool  enabled);
	/*! \brief Get Name
	 */
	std::string getName();

	/*! \brief Set Name
	 */
	void setName(std::string  name);
	/*! \brief Get Rule
	 */
	std::map<std::string, std::string> getRule();

	/*! \brief Set Rule
	 */
	void setRule(std::map <std::string, std::string> rule);

private:
	std::string description;
	bool enabled;
	std::string name;
	std::map <std::string, std::string>rule;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _RuleUpdateInfo_H_ */
