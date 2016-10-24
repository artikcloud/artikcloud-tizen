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
 * ExportData.h
 *
 * Export Data.
 */

#ifndef _ExportData_H_
#define _ExportData_H_


#include <string>
#include "ExportRequest.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export Data.
 *
 */

class ExportData : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportData();
	ExportData(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getExpirationDate();

	/*! \brief Set 
	 */
	void setExpirationDate(long long  expirationDate);
	/*! \brief Get 
	 */
	std::string getExportId();

	/*! \brief Set 
	 */
	void setExportId(std::string  exportId);
	/*! \brief Get 
	 */
	long long getFileSize();

	/*! \brief Set 
	 */
	void setFileSize(long long  fileSize);
	/*! \brief Get 
	 */
	std::string getMd5();

	/*! \brief Set 
	 */
	void setMd5(std::string  md5);
	/*! \brief Get 
	 */
	ExportRequest getRequest();

	/*! \brief Set 
	 */
	void setRequest(ExportRequest  request);
	/*! \brief Get Export status
	 */
	std::string getStatus();

	/*! \brief Set Export status
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	long long getTotalMessages();

	/*! \brief Set 
	 */
	void setTotalMessages(long long  totalMessages);

private:
	long long expirationDate;
	std::string exportId;
	long long fileSize;
	std::string md5;
	ExportRequest request;
	std::string status;
	long long totalMessages;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportData_H_ */
