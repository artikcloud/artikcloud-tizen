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
 * NormalizedAction.h
 *
 * Normalized Action
 */

#ifndef _NormalizedAction_H_
#define _NormalizedAction_H_


#include <string>
#include "ActionArray.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Normalized Action
 *
 */

class NormalizedAction : public Object {
public:
	/*! \brief Constructor.
	 */
	NormalizedAction();
	NormalizedAction(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~NormalizedAction();

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
	std::string getDdid();

	/*! \brief Set 
	 */
	void setDdid(std::string  ddid);
	/*! \brief Get 
	 */
	std::string getDdtid();

	/*! \brief Set 
	 */
	void setDdtid(std::string  ddtid);
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
	ActionArray getData();

	/*! \brief Set 
	 */
	void setData(ActionArray  data);

private:
	long long cts;
	long long ts;
	std::string mid;
	std::string sdid;
	std::string ddid;
	std::string ddtid;
	std::string uid;
	int mv;
	ActionArray data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _NormalizedAction_H_ */
