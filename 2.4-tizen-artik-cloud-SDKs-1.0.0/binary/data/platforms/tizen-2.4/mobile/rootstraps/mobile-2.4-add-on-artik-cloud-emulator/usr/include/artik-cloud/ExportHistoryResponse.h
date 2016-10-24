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
 * ExportHistoryResponse.h
 *
 * Export History Response.
 */

#ifndef _ExportHistoryResponse_H_
#define _ExportHistoryResponse_H_


#include <string>
#include "ExportDataArray.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export History Response.
 *
 */

class ExportHistoryResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportHistoryResponse();
	ExportHistoryResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportHistoryResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCount();

	/*! \brief Set 
	 */
	void setCount(long long  count);
	/*! \brief Get 
	 */
	ExportDataArray getData();

	/*! \brief Set 
	 */
	void setData(ExportDataArray  data);
	/*! \brief Get 
	 */
	long long getOffset();

	/*! \brief Set 
	 */
	void setOffset(long long  offset);
	/*! \brief Get 
	 */
	long long getTotal();

	/*! \brief Set 
	 */
	void setTotal(long long  total);

private:
	long long count;
	ExportDataArray data;
	long long offset;
	long long total;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportHistoryResponse_H_ */
