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

#ifndef _MessagesManager_H_
#define _MessagesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "AggregatesHistogramResponse.h"
#include "FieldPresenceEnvelope.h"
#include "NormalizedMessagesEnvelope.h"
#include "AggregatesResponse.h"
#include "SnapshotResponses.h"
#include "NormalizedActionsEnvelope.h"
#include "Actions.h"
#include "MessageIDEnvelope.h"
#include "Message.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class MessagesManager {
public:
	MessagesManager();
	virtual ~MessagesManager();

/*! \brief Get Normalized Message Histogram. *Synchronous*
 *
 * Get Histogram on normalized messages.
 * \param startDate Timestamp of earliest message (in milliseconds since epoch). *Required*
 * \param endDate Timestamp of latest message (in milliseconds since epoch). *Required*
 * \param sdid Source device ID of the messages being searched.
 * \param field Message field being queried for building histogram.
 * \param interval Interval of time for building histogram blocks. (Valid values: minute, hour, day, month, year)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAggregatesHistogramSync(char * accessToken,
	long long startDate, long long endDate, std::string sdid, std::string field, std::string interval, 
	void(* handler)(AggregatesHistogramResponse, Error, void* )
	, void* userData);

/*! \brief Get Normalized Message Histogram. *Asynchronous*
 *
 * Get Histogram on normalized messages.
 * \param startDate Timestamp of earliest message (in milliseconds since epoch). *Required*
 * \param endDate Timestamp of latest message (in milliseconds since epoch). *Required*
 * \param sdid Source device ID of the messages being searched.
 * \param field Message field being queried for building histogram.
 * \param interval Interval of time for building histogram blocks. (Valid values: minute, hour, day, month, year)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAggregatesHistogramAsync(char * accessToken,
	long long startDate, long long endDate, std::string sdid, std::string field, std::string interval, 
	void(* handler)(AggregatesHistogramResponse, Error, void* )
	, void* userData);
/*! \brief Get normalized message presence. *Synchronous*
 *
 * Get normalized message presence.
 * \param startDate startDate *Required*
 * \param endDate endDate *Required*
 * \param interval String representing grouping interval. One of: 'minute' (1 hour limit), 'hour' (1 day limit), 'day' (31 days limit), 'month' (1 year limit), or 'year' (10 years limit). *Required*
 * \param sdid Source device ID of the messages being searched.
 * \param fieldPresence String representing a field from the specified device ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFieldPresenceSync(char * accessToken,
	long long startDate, long long endDate, std::string interval, std::string sdid, std::string fieldPresence, 
	void(* handler)(FieldPresenceEnvelope, Error, void* )
	, void* userData);

/*! \brief Get normalized message presence. *Asynchronous*
 *
 * Get normalized message presence.
 * \param startDate startDate *Required*
 * \param endDate endDate *Required*
 * \param interval String representing grouping interval. One of: 'minute' (1 hour limit), 'hour' (1 day limit), 'day' (31 days limit), 'month' (1 year limit), or 'year' (10 years limit). *Required*
 * \param sdid Source device ID of the messages being searched.
 * \param fieldPresence String representing a field from the specified device ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFieldPresenceAsync(char * accessToken,
	long long startDate, long long endDate, std::string interval, std::string sdid, std::string fieldPresence, 
	void(* handler)(FieldPresenceEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Last Normalized Message. *Synchronous*
 *
 * Get last messages normalized.
 * \param count Number of items to return per query.
 * \param sdids Comma separated list of source device IDs (minimum: 1).
 * \param fieldPresence String representing a field from the specified device ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLastNormalizedMessagesSync(char * accessToken,
	int count, std::string sdids, std::string fieldPresence, 
	void(* handler)(NormalizedMessagesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Last Normalized Message. *Asynchronous*
 *
 * Get last messages normalized.
 * \param count Number of items to return per query.
 * \param sdids Comma separated list of source device IDs (minimum: 1).
 * \param fieldPresence String representing a field from the specified device ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLastNormalizedMessagesAsync(char * accessToken,
	int count, std::string sdids, std::string fieldPresence, 
	void(* handler)(NormalizedMessagesEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Normalized Message Aggregates. *Synchronous*
 *
 * Get Aggregates on normalized messages.
 * \param sdid Source device ID of the messages being searched. *Required*
 * \param field Message field being queried for aggregates. *Required*
 * \param startDate Timestamp of earliest message (in milliseconds since epoch). *Required*
 * \param endDate Timestamp of latest message (in milliseconds since epoch). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageAggregatesSync(char * accessToken,
	std::string sdid, std::string field, long long startDate, long long endDate, 
	void(* handler)(AggregatesResponse, Error, void* )
	, void* userData);

/*! \brief Get Normalized Message Aggregates. *Asynchronous*
 *
 * Get Aggregates on normalized messages.
 * \param sdid Source device ID of the messages being searched. *Required*
 * \param field Message field being queried for aggregates. *Required*
 * \param startDate Timestamp of earliest message (in milliseconds since epoch). *Required*
 * \param endDate Timestamp of latest message (in milliseconds since epoch). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageAggregatesAsync(char * accessToken,
	std::string sdid, std::string field, long long startDate, long long endDate, 
	void(* handler)(AggregatesResponse, Error, void* )
	, void* userData);
/*! \brief Get Message Snapshots. *Synchronous*
 *
 * Get message snapshots.
 * \param sdids Device IDs for which the snapshots are requested. Max 100 device ids per call. *Required*
 * \param includeTimestamp Indicates whether to return timestamps of the last update for each field.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageSnapshotsSync(char * accessToken,
	std::string sdids, bool includeTimestamp, 
	void(* handler)(SnapshotResponses, Error, void* )
	, void* userData);

/*! \brief Get Message Snapshots. *Asynchronous*
 *
 * Get message snapshots.
 * \param sdids Device IDs for which the snapshots are requested. Max 100 device ids per call. *Required*
 * \param includeTimestamp Indicates whether to return timestamps of the last update for each field.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageSnapshotsAsync(char * accessToken,
	std::string sdids, bool includeTimestamp, 
	void(* handler)(SnapshotResponses, Error, void* )
	, void* userData);
/*! \brief Get Normalized Actions. *Synchronous*
 *
 * Get the actions normalized
 * \param uid User ID. If not specified, assume that of the current authenticated user. If specified, it must be that of a user for which the current authenticated user has read access to.
 * \param ddid Destination device ID of the actions being searched.
 * \param mid The message ID being searched.
 * \param offset A string that represents the starting item, should be the value of 'next' field received in the last response. (required for pagination)
 * \param count count
 * \param startDate startDate
 * \param endDate endDate
 * \param order Desired sort order: 'asc' or 'desc'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNormalizedActionsSync(char * accessToken,
	std::string uid, std::string ddid, std::string mid, std::string offset, int count, long long startDate, long long endDate, std::string order, 
	void(* handler)(NormalizedActionsEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Normalized Actions. *Asynchronous*
 *
 * Get the actions normalized
 * \param uid User ID. If not specified, assume that of the current authenticated user. If specified, it must be that of a user for which the current authenticated user has read access to.
 * \param ddid Destination device ID of the actions being searched.
 * \param mid The message ID being searched.
 * \param offset A string that represents the starting item, should be the value of 'next' field received in the last response. (required for pagination)
 * \param count count
 * \param startDate startDate
 * \param endDate endDate
 * \param order Desired sort order: 'asc' or 'desc'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNormalizedActionsAsync(char * accessToken,
	std::string uid, std::string ddid, std::string mid, std::string offset, int count, long long startDate, long long endDate, std::string order, 
	void(* handler)(NormalizedActionsEnvelope, Error, void* )
	, void* userData);
/*! \brief Get Normalized Messages. *Synchronous*
 *
 * Get the messages normalized
 * \param uid User ID. If not specified, assume that of the current authenticated user. If specified, it must be that of a user for which the current authenticated user has read access to.
 * \param sdid Source device ID of the messages being searched.
 * \param mid The message ID being searched.
 * \param fieldPresence String representing a field from the specified device ID.
 * \param filter Filter.
 * \param offset A string that represents the starting item, should be the value of 'next' field received in the last response. (required for pagination)
 * \param count count
 * \param startDate startDate
 * \param endDate endDate
 * \param order Desired sort order: 'asc' or 'desc'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNormalizedMessagesSync(char * accessToken,
	std::string uid, std::string sdid, std::string mid, std::string fieldPresence, std::string filter, std::string offset, int count, long long startDate, long long endDate, std::string order, 
	void(* handler)(NormalizedMessagesEnvelope, Error, void* )
	, void* userData);

/*! \brief Get Normalized Messages. *Asynchronous*
 *
 * Get the messages normalized
 * \param uid User ID. If not specified, assume that of the current authenticated user. If specified, it must be that of a user for which the current authenticated user has read access to.
 * \param sdid Source device ID of the messages being searched.
 * \param mid The message ID being searched.
 * \param fieldPresence String representing a field from the specified device ID.
 * \param filter Filter.
 * \param offset A string that represents the starting item, should be the value of 'next' field received in the last response. (required for pagination)
 * \param count count
 * \param startDate startDate
 * \param endDate endDate
 * \param order Desired sort order: 'asc' or 'desc'
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNormalizedMessagesAsync(char * accessToken,
	std::string uid, std::string sdid, std::string mid, std::string fieldPresence, std::string filter, std::string offset, int count, long long startDate, long long endDate, std::string order, 
	void(* handler)(NormalizedMessagesEnvelope, Error, void* )
	, void* userData);
/*! \brief Send Actions. *Synchronous*
 *
 * Send Actions
 * \param data Actions that are passed in the body *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendActionsSync(char * accessToken,
	Actions data, 
	void(* handler)(MessageIDEnvelope, Error, void* )
	, void* userData);

/*! \brief Send Actions. *Asynchronous*
 *
 * Send Actions
 * \param data Actions that are passed in the body *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendActionsAsync(char * accessToken,
	Actions data, 
	void(* handler)(MessageIDEnvelope, Error, void* )
	, void* userData);
/*! \brief Send Message. *Synchronous*
 *
 * Send a message
 * \param data Message object that is passed in the body *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMessageSync(char * accessToken,
	Message data, 
	void(* handler)(MessageIDEnvelope, Error, void* )
	, void* userData);

/*! \brief Send Message. *Asynchronous*
 *
 * Send a message
 * \param data Message object that is passed in the body *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMessageAsync(char * accessToken,
	Message data, 
	void(* handler)(MessageIDEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* MessagesManager_H_ */
