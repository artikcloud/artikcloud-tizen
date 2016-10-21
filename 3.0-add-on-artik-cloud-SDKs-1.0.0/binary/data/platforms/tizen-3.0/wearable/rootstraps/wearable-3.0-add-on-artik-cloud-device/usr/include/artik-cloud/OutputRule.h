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
 * OutputRule.h
 *
 * Rule information.
 */

#ifndef _OutputRule_H_
#define _OutputRule_H_


#include <string>
#include "RuleError.h"
#include "RuleWarningOutput.h"
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Rule information.
 *
 */

class OutputRule : public Object {
public:
	/*! \brief Constructor.
	 */
	OutputRule();
	OutputRule(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~OutputRule();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAid();

	/*! \brief Set 
	 */
	void setAid(std::string  aid);
	/*! \brief Get 
	 */
	long long getCreatedOn();

	/*! \brief Set 
	 */
	void setCreatedOn(long long  createdOn);
	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get 
	 */
	bool getEnabled();

	/*! \brief Set 
	 */
	void setEnabled(bool  enabled);
	/*! \brief Get 
	 */
	RuleError getError();

	/*! \brief Set 
	 */
	void setError(RuleError  error);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	int getIndex();

	/*! \brief Set 
	 */
	void setIndex(int  index);
	/*! \brief Get 
	 */
	long long getInvalidatedOn();

	/*! \brief Set 
	 */
	void setInvalidatedOn(long long  invalidatedOn);
	/*! \brief Get 
	 */
	int getLanguageVersion();

	/*! \brief Set 
	 */
	void setLanguageVersion(int  languageVersion);
	/*! \brief Get 
	 */
	long long getModifiedOn();

	/*! \brief Set 
	 */
	void setModifiedOn(long long  modifiedOn);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getRule();

	/*! \brief Set 
	 */
	void setRule(std::map <std::string, std::string> rule);
	/*! \brief Get 
	 */
	std::string getUid();

	/*! \brief Set 
	 */
	void setUid(std::string  uid);
	/*! \brief Get 
	 */
	RuleWarningOutput getWarning();

	/*! \brief Set 
	 */
	void setWarning(RuleWarningOutput  warning);

private:
	std::string aid;
	long long createdOn;
	std::string description;
	bool enabled;
	RuleError error;
	std::string id;
	int index;
	long long invalidatedOn;
	int languageVersion;
	long long modifiedOn;
	std::string name;
	std::map <std::string, std::string>rule;
	std::string uid;
	RuleWarningOutput warning;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _OutputRule_H_ */
