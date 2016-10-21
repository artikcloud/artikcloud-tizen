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
 * UnregisterDeviceResponse.h
 *
 * 
 */

#ifndef _UnregisterDeviceResponse_H_
#define _UnregisterDeviceResponse_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class UnregisterDeviceResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	UnregisterDeviceResponse();
	UnregisterDeviceResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~UnregisterDeviceResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Device certificate information.
	 */
	std::string getCertificateInfo();

	/*! \brief Set Device certificate information.
	 */
	void setCertificateInfo(std::string  certificateInfo);
	/*! \brief Get Certificate's signature.
	 */
	std::string getCertificateSignature();

	/*! \brief Set Certificate's signature.
	 */
	void setCertificateSignature(std::string  certificateSignature);
	/*! \brief Get Device created on date.
	 */
	long long getCreatedOn();

	/*! \brief Set Device created on date.
	 */
	void setCreatedOn(long long  createdOn);
	/*! \brief Get Device type id.
	 */
	std::string getDtid();

	/*! \brief Set Device type id.
	 */
	void setDtid(std::string  dtid);
	/*! \brief Get External ID of the device.
	 */
	std::string getEid();

	/*! \brief Set External ID of the device.
	 */
	void setEid(std::string  eid);
	/*! \brief Get Device id.
	 */
	std::string getId();

	/*! \brief Set Device id.
	 */
	void setId(std::string  id);
	/*! \brief Get Device manifest version.
	 */
	long long getManifestVersion();

	/*! \brief Set Device manifest version.
	 */
	void setManifestVersion(long long  manifestVersion);
	/*! \brief Get Device manifest version policy.
	 */
	std::string getManifestVersionPolicy();

	/*! \brief Set Device manifest version policy.
	 */
	void setManifestVersionPolicy(std::string  manifestVersionPolicy);
	/*! \brief Get Device name.
	 */
	std::string getName();

	/*! \brief Set Device name.
	 */
	void setName(std::string  name);
	/*! \brief Get Device need provider auth.
	 */
	bool getNeedProviderAuth();

	/*! \brief Set Device need provider auth.
	 */
	void setNeedProviderAuth(bool  needProviderAuth);
	/*! \brief Get User id.
	 */
	std::string getUid();

	/*! \brief Set User id.
	 */
	void setUid(std::string  uid);

private:
	std::string certificateInfo;
	std::string certificateSignature;
	long long createdOn;
	std::string dtid;
	std::string eid;
	std::string id;
	long long manifestVersion;
	std::string manifestVersionPolicy;
	std::string name;
	bool needProviderAuth;
	std::string uid;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _UnregisterDeviceResponse_H_ */
