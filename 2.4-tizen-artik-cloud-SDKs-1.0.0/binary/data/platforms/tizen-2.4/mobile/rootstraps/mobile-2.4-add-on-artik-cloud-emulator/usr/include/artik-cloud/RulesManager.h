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

#ifndef _RulesManager_H_
#define _RulesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "RuleEnvelope.h"
#include "RuleCreationInfo.h"
#include "RuleUpdateInfo.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class RulesManager {
public:
	RulesManager();
	virtual ~RulesManager();

/*! \brief Create Rule. *Synchronous*
 *
 * Create a new Rule
 * \param ruleInfo Rule object that needs to be added *Required*
 * \param userId User ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRuleSync(char * accessToken,
	RuleCreationInfo ruleInfo, std::string userId, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);

/*! \brief Create Rule. *Asynchronous*
 *
 * Create a new Rule
 * \param ruleInfo Rule object that needs to be added *Required*
 * \param userId User ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRuleAsync(char * accessToken,
	RuleCreationInfo ruleInfo, std::string userId, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);
/*! \brief Delete Rule. *Synchronous*
 *
 * Delete a Rule
 * \param ruleId Rule ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRuleSync(char * accessToken,
	std::string ruleId, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);

/*! \brief Delete Rule. *Asynchronous*
 *
 * Delete a Rule
 * \param ruleId Rule ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRuleAsync(char * accessToken,
	std::string ruleId, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Rule. *Synchronous*
 *
 * Get a rule using the Rule ID
 * \param ruleId Rule ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRuleSync(char * accessToken,
	std::string ruleId, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Rule. *Asynchronous*
 *
 * Get a rule using the Rule ID
 * \param ruleId Rule ID. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRuleAsync(char * accessToken,
	std::string ruleId, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);
/*! \brief Update Rule. *Synchronous*
 *
 * Update an existing Rule
 * \param ruleId Rule ID. *Required*
 * \param ruleInfo Rule object that needs to be updated *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateRuleSync(char * accessToken,
	std::string ruleId, RuleUpdateInfo ruleInfo, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);

/*! \brief Update Rule. *Asynchronous*
 *
 * Update an existing Rule
 * \param ruleId Rule ID. *Required*
 * \param ruleInfo Rule object that needs to be updated *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateRuleAsync(char * accessToken,
	std::string ruleId, RuleUpdateInfo ruleInfo, 
	void(* handler)(RuleEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* RulesManager_H_ */
