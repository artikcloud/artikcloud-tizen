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

#ifndef _TagsManager_H_
#define _TagsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "TagsEnvelope.h"
#include "Error.h"

namespace Tizen{
namespace ArtikCloud {
class TagsManager {
public:
	TagsManager();
	virtual ~TagsManager();

/*! \brief Get all categories. *Synchronous*
 *
 * Get all tags marked as categories
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagCategoriesSync(char * accessToken,
	
	void(* handler)(TagsEnvelope, Error, void* )
	, void* userData);

/*! \brief Get all categories. *Asynchronous*
 *
 * Get all tags marked as categories
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagCategoriesAsync(char * accessToken,
	
	void(* handler)(TagsEnvelope, Error, void* )
	, void* userData);
/*! \brief Get tag suggestions. *Synchronous*
 *
 * Get tag suggestions for applications, device types that have been most used with a group of tags.
 * \param entityType Entity type name.
 * \param tags Comma separated list of tags.
 * \param name Name of tags used for type ahead.
 * \param count Number of results to return. Max 10.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagSuggestionsSync(char * accessToken,
	std::string entityType, std::string tags, std::string name, int count, 
	void(* handler)(TagsEnvelope, Error, void* )
	, void* userData);

/*! \brief Get tag suggestions. *Asynchronous*
 *
 * Get tag suggestions for applications, device types that have been most used with a group of tags.
 * \param entityType Entity type name.
 * \param tags Comma separated list of tags.
 * \param name Name of tags used for type ahead.
 * \param count Number of results to return. Max 10.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagSuggestionsAsync(char * accessToken,
	std::string entityType, std::string tags, std::string name, int count, 
	void(* handler)(TagsEnvelope, Error, void* )
	, void* userData);
/*! \brief Get all tags of categories. *Synchronous*
 *
 * Get all tags related to the list of categories
 * \param categories Comma separated list of categories.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagsByCategoriesSync(char * accessToken,
	std::string categories, 
	void(* handler)(TagsEnvelope, Error, void* )
	, void* userData);

/*! \brief Get all tags of categories. *Asynchronous*
 *
 * Get all tags related to the list of categories
 * \param categories Comma separated list of categories.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTagsByCategoriesAsync(char * accessToken,
	std::string categories, 
	void(* handler)(TagsEnvelope, Error, void* )
	, void* userData);

	static std::string getBasePath()
	{
		return "https://api.artik.cloud/v1.1";
	}
};

}
}
#endif /* TagsManager_H_ */
