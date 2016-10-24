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
 * ExportRequestData.h
 *
 * Export Request Data.
 */

#ifndef _ExportRequestData_H_
#define _ExportRequestData_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export Request Data.
 *
 */

class ExportRequestData : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportRequestData();
	ExportRequestData(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportRequestData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Add header to csv format
	 */
	bool getCsvHeaders();

	/*! \brief Set Add header to csv format
	 */
	void setCsvHeaders(bool  csvHeaders);
	/*! \brief Get Timestamp of latest message (in milliseconds since epoch).
	 */
	long long getEndDate();

	/*! \brief Set Timestamp of latest message (in milliseconds since epoch).
	 */
	void setEndDate(long long  endDate);
	/*! \brief Get Returned Export ID that should be used to check status and get the export result.
	 */
	std::string getExportId();

	/*! \brief Set Returned Export ID that should be used to check status and get the export result.
	 */
	void setExportId(std::string  exportId);
	/*! \brief Get Format of the export.
	 */
	std::string getFormat();

	/*! \brief Set Format of the export.
	 */
	void setFormat(std::string  format);
	/*! \brief Get Ascending or descending sort order.
	 */
	std::string getOrder();

	/*! \brief Set Ascending or descending sort order.
	 */
	void setOrder(std::string  order);
	/*! \brief Get Source Device IDs being searched for messages (Comma-separated for multiple Device IDs).
	 */
	std::string getSdids();

	/*! \brief Set Source Device IDs being searched for messages (Comma-separated for multiple Device IDs).
	 */
	void setSdids(std::string  sdids);
	/*! \brief Get Source Device Type IDs being searched for messages (Comma-separated for multiple Device Type IDs).
	 */
	std::string getSdtids();

	/*! \brief Set Source Device Type IDs being searched for messages (Comma-separated for multiple Device Type IDs).
	 */
	void setSdtids(std::string  sdtids);
	/*! \brief Get Timestamp of earliest message (in milliseconds since epoch).
	 */
	long long getStartDate();

	/*! \brief Set Timestamp of earliest message (in milliseconds since epoch).
	 */
	void setStartDate(long long  startDate);
	/*! \brief Get Trial ID being searched for messages.
	 */
	std::string getTrialId();

	/*! \brief Set Trial ID being searched for messages.
	 */
	void setTrialId(std::string  trialId);
	/*! \brief Get Owner's user IDs being searched for messages (Comma-separated for multiple User IDs).
	 */
	std::string getUids();

	/*! \brief Set Owner's user IDs being searched for messages (Comma-separated for multiple User IDs).
	 */
	void setUids(std::string  uids);
	/*! \brief Get URL added to successful email message.
	 */
	std::string getUrl();

	/*! \brief Set URL added to successful email message.
	 */
	void setUrl(std::string  url);

private:
	bool csvHeaders;
	long long endDate;
	std::string exportId;
	std::string format;
	std::string order;
	std::string sdids;
	std::string sdtids;
	long long startDate;
	std::string trialId;
	std::string uids;
	std::string url;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportRequestData_H_ */
