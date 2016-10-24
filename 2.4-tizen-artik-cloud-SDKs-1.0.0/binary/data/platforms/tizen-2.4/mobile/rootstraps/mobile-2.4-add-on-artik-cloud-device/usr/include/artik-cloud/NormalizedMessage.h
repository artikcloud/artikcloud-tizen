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
 * NormalizedMessage.h
 *
 * Normalized Message
 */

#ifndef _NormalizedMessage_H_
#define _NormalizedMessage_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Normalized Message
 *
 */

class NormalizedMessage : public Object {
public:
	/*! \brief Constructor.
	 */
	NormalizedMessage();
	NormalizedMessage(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~NormalizedMessage();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCts();

	/*! \brief Set 
	 */
	void setCts(long long  cts);
	/*! \brief Get 
	 */
	long long getTs();

	/*! \brief Set 
	 */
	void setTs(long long  ts);
	/*! \brief Get 
	 */
	std::string getMid();

	/*! \brief Set 
	 */
	void setMid(std::string  mid);
	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);
	/*! \brief Get 
	 */
	std::string getSdtid();

	/*! \brief Set 
	 */
	void setSdtid(std::string  sdtid);
	/*! \brief Get 
	 */
	std::string getUid();

	/*! \brief Set 
	 */
	void setUid(std::string  uid);
	/*! \brief Get 
	 */
	int getMv();

	/*! \brief Set 
	 */
	void setMv(int  mv);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getData();

	/*! \brief Set 
	 */
	void setData(std::map <std::string, std::string> data);

private:
	long long cts;
	long long ts;
	std::string mid;
	std::string sdid;
	std::string sdtid;
	std::string uid;
	int mv;
	std::map <std::string, std::string>data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _NormalizedMessage_H_ */
