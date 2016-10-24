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
 * DeviceType.h
 *
 * Device Type Information
 */

#ifndef _DeviceType_H_
#define _DeviceType_H_


#include <string>
#include "Tag.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Device Type Information
 *
 */

class DeviceType : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceType();
	DeviceType(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DeviceType();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Device Type ID.
	 */
	std::string getId();

	/*! \brief Set Device Type ID.
	 */
	void setId(std::string  id);
	/*! \brief Get Unique Name.
	 */
	std::string getUniqueName();

	/*! \brief Set Unique Name.
	 */
	void setUniqueName(std::string  uniqueName);
	/*! \brief Get Latest Manifest version.
	 */
	int getLatestVersion();

	/*! \brief Set Latest Manifest version.
	 */
	void setLatestVersion(int  latestVersion);
	/*! \brief Get 
	 */
	long long getLastUpdated();

	/*! \brief Set 
	 */
	void setLastUpdated(long long  lastUpdated);
	/*! \brief Get Name.
	 */
	std::string getName();

	/*! \brief Set Name.
	 */
	void setName(std::string  name);
	/*! \brief Get Description.
	 */
	std::string getDescription();

	/*! \brief Set Description.
	 */
	void setDescription(std::string  description);
	/*! \brief Get User ID.
	 */
	std::string getUid();

	/*! \brief Set User ID.
	 */
	void setUid(std::string  uid);
	/*! \brief Get Organization ID.
	 */
	std::string getOid();

	/*! \brief Set Organization ID.
	 */
	void setOid(std::string  oid);
	/*! \brief Get Uses Cloud Connectors SDK
	 */
	bool getHasCloudConnector();

	/*! \brief Set Uses Cloud Connectors SDK
	 */
	void setHasCloudConnector(bool  hasCloudConnector);
	/*! \brief Get Approval status.
	 */
	bool getApproved();

	/*! \brief Set Approval status.
	 */
	void setApproved(bool  approved);
	/*! \brief Get Published status.
	 */
	bool getPublished();

	/*! \brief Set Published status.
	 */
	void setPublished(bool  published);
	/*! \brief Get Protected status.
	 */
	bool getProtected();

	/*! \brief Set Protected status.
	 */
	void setProtected(bool  _protected);
	/*! \brief Get In Store.
	 */
	bool getInStore();

	/*! \brief Set In Store.
	 */
	void setInStore(bool  inStore);
	/*! \brief Get Does the current user own a device of this device type
	 */
	bool getOwnedByCurrentUser();

	/*! \brief Set Does the current user own a device of this device type
	 */
	void setOwnedByCurrentUser(bool  ownedByCurrentUser);
	/*! \brief Get Tags
	 */
	std::list<Tag> getTags();

	/*! \brief Set Tags
	 */
	void setTags(std::list <Tag> tags);
	/*! \brief Get Require Secure Device Registration (SDR) Protocol.
	 */
	bool getRsp();

	/*! \brief Set Require Secure Device Registration (SDR) Protocol.
	 */
	void setRsp(bool  rsp);
	/*! \brief Get Issuer Distinguished Name (Used in SDR)
	 */
	std::string getIssuerDn();

	/*! \brief Set Issuer Distinguished Name (Used in SDR)
	 */
	void setIssuerDn(std::string  issuerDn);
	/*! \brief Get Vendor ID. (Used in SDR)
	 */
	std::string getVid();

	/*! \brief Set Vendor ID. (Used in SDR)
	 */
	void setVid(std::string  vid);

private:
	std::string id;
	std::string uniqueName;
	int latestVersion;
	long long lastUpdated;
	std::string name;
	std::string description;
	std::string uid;
	std::string oid;
	bool hasCloudConnector;
	bool approved;
	bool published;
	bool _protected;
	bool inStore;
	bool ownedByCurrentUser;
	std::list <Tag>tags;
	bool rsp;
	std::string issuerDn;
	std::string vid;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DeviceType_H_ */
