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

#ifndef _ExportManager_H_
#define _ExportManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ExportRequestInfo.h"
#include "ExportRequestResponse.h"
#include "ExportHistoryResponse.h"
#include "ExportStatusResponse.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class ExportManager {
public:
	ExportManager();
	virtual ~ExportManager();

/*! \brief Create Export Request. *Synchronous*
 *
 * Export normalized messages. The following input combinations are supported:<br/><table><tr><th>Combination</th><th>Parameters</th><th>Description</th></tr><tr><td>Get by users</td><td>uids</td><td>Search by a list of User IDs. For each user in the list, the current authenticated user must have read access over the specified user.</td></tr><tr><td>Get by devices</td><td>sdids</td><td>Search by Source Device IDs.</td></tr><tr><td>Get by device types</td><td>uids,sdtids</td><td>Search by list of Source Device Type IDs for the given list of users.</td></tr><tr><td>Get by trial</td><td>trialId</td><td>Search by Trial ID.</td></tr><tr><td>Get by combination of parameters</td><td>uids,sdids,sdtids</td><td>Search by list of Source Device IDs. Each Device ID must belong to a Source Device Type ID and a User ID.</td></tr><tr><td>Common</td><td>startDate,endDate,order,format,url,csvHeaders</td><td>Parameters that can be used with the above combinations.</td></tr></table>
 * \param exportRequestInfo ExportRequest object that is passed in the body *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool exportRequestSync(char * accessToken,
	ExportRequestInfo exportRequestInfo, 
	void(* handler)(ExportRequestResponse, Error, void* )
	, void* userData);

/*! \brief Create Export Request. *Asynchronous*
 *
 * Export normalized messages. The following input combinations are supported:<br/><table><tr><th>Combination</th><th>Parameters</th><th>Description</th></tr><tr><td>Get by users</td><td>uids</td><td>Search by a list of User IDs. For each user in the list, the current authenticated user must have read access over the specified user.</td></tr><tr><td>Get by devices</td><td>sdids</td><td>Search by Source Device IDs.</td></tr><tr><td>Get by device types</td><td>uids,sdtids</td><td>Search by list of Source Device Type IDs for the given list of users.</td></tr><tr><td>Get by trial</td><td>trialId</td><td>Search by Trial ID.</td></tr><tr><td>Get by combination of parameters</td><td>uids,sdids,sdtids</td><td>Search by list of Source Device IDs. Each Device ID must belong to a Source Device Type ID and a User ID.</td></tr><tr><td>Common</td><td>startDate,endDate,order,format,url,csvHeaders</td><td>Parameters that can be used with the above combinations.</td></tr></table>
 * \param exportRequestInfo ExportRequest object that is passed in the body *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool exportRequestAsync(char * accessToken,
	ExportRequestInfo exportRequestInfo, 
	void(* handler)(ExportRequestResponse, Error, void* )
	, void* userData);
/*! \brief Get Export History. *Synchronous*
 *
 * Get the history of export requests.
 * \param trialId Filter by trialId.
 * \param count Pagination count.
 * \param offset Pagination offset.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExportHistorySync(char * accessToken,
	std::string trialId, int count, int offset, 
	void(* handler)(ExportHistoryResponse, Error, void* )
	, void* userData);

/*! \brief Get Export History. *Asynchronous*
 *
 * Get the history of export requests.
 * \param trialId Filter by trialId.
 * \param count Pagination count.
 * \param offset Pagination offset.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExportHistoryAsync(char * accessToken,
	std::string trialId, int count, int offset, 
	void(* handler)(ExportHistoryResponse, Error, void* )
	, void* userData);
/*! \brief Get Export Result. *Synchronous*
 *
 * Retrieve result of the export query in tgz format. The tar file may contain one or more files with the results.
 * \param exportId Export ID of the export query. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExportResultSync(char * accessToken,
	std::string exportId, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get Export Result. *Asynchronous*
 *
 * Retrieve result of the export query in tgz format. The tar file may contain one or more files with the results.
 * \param exportId Export ID of the export query. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExportResultAsync(char * accessToken,
	std::string exportId, 
	void(* handler)(std::string, Error, void* )
	, void* userData);
/*! \brief Check Export Status. *Synchronous*
 *
 * Check status of the export query.
 * \param exportId Export ID of the export query. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExportStatusSync(char * accessToken,
	std::string exportId, 
	void(* handler)(ExportStatusResponse, Error, void* )
	, void* userData);

/*! \brief Check Export Status. *Asynchronous*
 *
 * Check status of the export query.
 * \param exportId Export ID of the export query. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getExportStatusAsync(char * accessToken,
	std::string exportId, 
	void(* handler)(ExportStatusResponse, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* ExportManager_H_ */
