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
 * ExportNormalizedMessagesResponse.h
 *
 * Export Normalized Messages Response.
 */

#ifndef _ExportNormalizedMessagesResponse_H_
#define _ExportNormalizedMessagesResponse_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export Normalized Messages Response.
 *
 */

class ExportNormalizedMessagesResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportNormalizedMessagesResponse();
	ExportNormalizedMessagesResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportNormalizedMessagesResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getCsvHeaders();

	/*! \brief Set 
	 */
	void setCsvHeaders(bool  csvHeaders);
	/*! \brief Get 
	 */
	long long getEndDate();

	/*! \brief Set 
	 */
	void setEndDate(long long  endDate);
	/*! \brief Get 
	 */
	std::string getExportId();

	/*! \brief Set 
	 */
	void setExportId(std::string  exportId);
	/*! \brief Get 
	 */
	std::string getFormat();

	/*! \brief Set 
	 */
	void setFormat(std::string  format);
	/*! \brief Get 
	 */
	std::string getOrder();

	/*! \brief Set 
	 */
	void setOrder(std::string  order);
	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);
	/*! \brief Get 
	 */
	std::string getSdids();

	/*! \brief Set 
	 */
	void setSdids(std::string  sdids);
	/*! \brief Get 
	 */
	long long getStartDate();

	/*! \brief Set 
	 */
	void setStartDate(long long  startDate);
	/*! \brief Get 
	 */
	std::string getStdids();

	/*! \brief Set 
	 */
	void setStdids(std::string  stdids);
	/*! \brief Get 
	 */
	std::string getTrialId();

	/*! \brief Set 
	 */
	void setTrialId(std::string  trialId);
	/*! \brief Get 
	 */
	std::string getUid();

	/*! \brief Set 
	 */
	void setUid(std::string  uid);
	/*! \brief Get 
	 */
	std::string getUids();

	/*! \brief Set 
	 */
	void setUids(std::string  uids);
	/*! \brief Get 
	 */
	std::string getUrl();

	/*! \brief Set 
	 */
	void setUrl(std::string  url);

private:
	bool csvHeaders;
	long long endDate;
	std::string exportId;
	std::string format;
	std::string order;
	std::string sdid;
	std::string sdids;
	long long startDate;
	std::string stdids;
	std::string trialId;
	std::string uid;
	std::string uids;
	std::string url;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportNormalizedMessagesResponse_H_ */
