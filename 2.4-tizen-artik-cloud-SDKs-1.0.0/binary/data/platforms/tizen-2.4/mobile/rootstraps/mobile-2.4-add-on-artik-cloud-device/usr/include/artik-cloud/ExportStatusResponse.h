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
 * ExportStatusResponse.h
 *
 * Export Status Response.
 */

#ifndef _ExportStatusResponse_H_
#define _ExportStatusResponse_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export Status Response.
 *
 */

class ExportStatusResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportStatusResponse();
	ExportStatusResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportStatusResponse();

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
	std::string getMd5();

	/*! \brief Set 
	 */
	void setMd5(std::string  md5);
	/*! \brief Get Export status
	 */
	std::string getStatus();

	/*! \brief Set Export status
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	std::string getTtl();

	/*! \brief Set 
	 */
	void setTtl(std::string  ttl);

private:
	long long expirationDate;
	std::string exportId;
	std::string md5;
	std::string status;
	std::string ttl;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportStatusResponse_H_ */
