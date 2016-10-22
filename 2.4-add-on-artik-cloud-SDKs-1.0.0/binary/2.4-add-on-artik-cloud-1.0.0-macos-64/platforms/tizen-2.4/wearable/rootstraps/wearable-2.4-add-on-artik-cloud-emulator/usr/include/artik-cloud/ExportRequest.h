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
 * ExportRequest.h
 *
 * Export Request.
 */

#ifndef _ExportRequest_H_
#define _ExportRequest_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export Request.
 *
 */

class ExportRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportRequest();
	ExportRequest(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getEndDate();

	/*! \brief Set 
	 */
	void setEndDate(long long  endDate);
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
	std::string getSdids();

	/*! \brief Set 
	 */
	void setSdids(std::string  sdids);
	/*! \brief Get 
	 */
	std::string getSdtids();

	/*! \brief Set 
	 */
	void setSdtids(std::string  sdtids);
	/*! \brief Get 
	 */
	long long getStartDate();

	/*! \brief Set 
	 */
	void setStartDate(long long  startDate);
	/*! \brief Get 
	 */
	std::string getTrialId();

	/*! \brief Set 
	 */
	void setTrialId(std::string  trialId);
	/*! \brief Get 
	 */
	std::string getUids();

	/*! \brief Set 
	 */
	void setUids(std::string  uids);

private:
	long long endDate;
	std::string format;
	std::string order;
	std::string sdids;
	std::string sdtids;
	long long startDate;
	std::string trialId;
	std::string uids;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportRequest_H_ */
