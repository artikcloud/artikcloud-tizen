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
 * ExportDataArray.h
 *
 * Export Data Array.
 */

#ifndef _ExportDataArray_H_
#define _ExportDataArray_H_


#include <string>
#include "ExportData.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Export Data Array.
 *
 */

class ExportDataArray : public Object {
public:
	/*! \brief Constructor.
	 */
	ExportDataArray();
	ExportDataArray(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~ExportDataArray();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<ExportData> getExports();

	/*! \brief Set 
	 */
	void setExports(std::list <ExportData> exports);

private:
	std::list <ExportData>exports;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _ExportDataArray_H_ */
