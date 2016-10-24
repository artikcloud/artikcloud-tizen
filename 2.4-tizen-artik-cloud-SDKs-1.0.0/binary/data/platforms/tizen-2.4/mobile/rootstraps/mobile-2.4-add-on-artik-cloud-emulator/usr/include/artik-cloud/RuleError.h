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
 * RuleError.h
 *
 * Rule Error.
 */

#ifndef _RuleError_H_
#define _RuleError_H_


#include <string>
#include "FieldPath.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Rule Error.
 *
 */

class RuleError : public Object {
public:
	/*! \brief Constructor.
	 */
	RuleError();
	RuleError(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~RuleError();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getErrorCode();

	/*! \brief Set 
	 */
	void setErrorCode(int  errorCode);
	/*! \brief Get 
	 */
	FieldPath getFieldPath();

	/*! \brief Set 
	 */
	void setFieldPath(FieldPath  fieldPath);
	/*! \brief Get 
	 */
	std::list<std::string> getMessageArgs();

	/*! \brief Set 
	 */
	void setMessageArgs(std::list <std::string> messageArgs);
	/*! \brief Get 
	 */
	std::string getMessageKey();

	/*! \brief Set 
	 */
	void setMessageKey(std::string  messageKey);

private:
	int errorCode;
	FieldPath fieldPath;
	std::list <std::string>messageArgs;
	std::string messageKey;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _RuleError_H_ */
