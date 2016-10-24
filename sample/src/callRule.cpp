

#include <dlog.h>
#include <callRule.h>
#include <string>
#include <UsersManager.h>

using namespace Tizen::ArtikCloud;
char* sdid2("cb19e910d1cb441ba5a318ea88c3ac23");
char* accessToken2("5f3b6de5fcf640999b415e0cb547c2d9");

UsersManager deviceMgr;
std::string currentLabel;


void handler(UserEnvelope ruleEnv, Error err, void* userData) {
	dlog_print(DLOG_INFO, "DEMO", "Rule done with error %d and code %s", err.getCode(), err.getMessage().c_str());
	dlog_print(DLOG_INFO, "DEMO", "ruleenvis %s", ruleEnv.toJson());
	if (err.getCode() == 200) {
		dlog_print(DLOG_INFO, "DEMO", "Rule done with 200");
	}
}

int connectivityCheck(){
	dlog_print(DLOG_INFO, "DEMO", "Calling Device Presence");
	deviceMgr.getSelfSync(accessToken2,handler, NULL);
	return 0;
}
