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
 * Device.h
 *
 * Device information.
 */

#ifndef _Device_H_
#define _Device_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Device information.
 *
 */

class Device : public Object {
public:
	/*! \brief Constructor.
	 */
	Device();
	Device(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~Device();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Device ID
	 */
	std::string getId();

	/*! \brief Set Device ID
	 */
	void setId(std::string  id);
	/*! \brief Get User ID
	 */
	std::string getUid();

	/*! \brief Set User ID
	 */
	void setUid(std::string  uid);
	/*! \brief Get Device Type ID
	 */
	std::string getDtid();

	/*! \brief Set Device Type ID
	 */
	void setDtid(std::string  dtid);
	/*! \brief Get Name
	 */
	std::string getName();

	/*! \brief Set Name
	 */
	void setName(std::string  name);
	/*! \brief Get Manifest Version
	 */
	int getManifestVersion();

	/*! \brief Set Manifest Version
	 */
	void setManifestVersion(int  manifestVersion);
	/*! \brief Get Manifest Version Policy (LATEST, DEVICE)
	 */
	std::string getManifestVersionPolicy();

	/*! \brief Set Manifest Version Policy (LATEST, DEVICE)
	 */
	void setManifestVersionPolicy(std::string  manifestVersionPolicy);
	/*! \brief Get Needs Provider Authentication
	 */
	bool getNeedProviderAuth();

	/*! \brief Set Needs Provider Authentication
	 */
	void setNeedProviderAuth(bool  needProviderAuth);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getProperties();

	/*! \brief Set 
	 */
	void setProperties(std::map <std::string, std::string> properties);
	/*! \brief Get Created On (milliseconds since epoch)
	 */
	long long getCreatedOn();

	/*! \brief Set Created On (milliseconds since epoch)
	 */
	void setCreatedOn(long long  createdOn);
	/*! \brief Get Is Connected
	 */
	bool getConnected();

	/*! \brief Set Is Connected
	 */
	void setConnected(bool  connected);
	/*! \brief Get Certificate Info (if any)
	 */
	std::string getCertificateInfo();

	/*! \brief Set Certificate Info (if any)
	 */
	void setCertificateInfo(std::string  certificateInfo);
	/*! \brief Get Certificate Signature (if any)
	 */
	std::string getCertificateSignature();

	/*! \brief Set Certificate Signature (if any)
	 */
	void setCertificateSignature(std::string  certificateSignature);
	/*! \brief Get External ID (if any)
	 */
	std::string getEid();

	/*! \brief Set External ID (if any)
	 */
	void setEid(std::string  eid);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getProviderCredentials();

	/*! \brief Set 
	 */
	void setProviderCredentials(std::map <std::string, std::string> providerCredentials);

private:
	std::string id;
	std::string uid;
	std::string dtid;
	std::string name;
	int manifestVersion;
	std::string manifestVersionPolicy;
	bool needProviderAuth;
	std::map <std::string, std::string>properties;
	long long createdOn;
	bool connected;
	std::string certificateInfo;
	std::string certificateSignature;
	std::string eid;
	std::map <std::string, std::string>providerCredentials;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _Device_H_ */
