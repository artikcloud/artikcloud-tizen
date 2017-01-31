#include <callRule.h>
#include <MessagesManager.h>
#include <dlog.h>
#include <stdlib.h>
#include <chrono>
#include <string>
#include <map>

using namespace Tizen::ArtikCloud;
using namespace std;

//REMEMBER TO REPLACE THESE
char deviceId[] = "170e5221612b4bc38dce53fd4395174a";
char deviceToken[] = "1718113118564ad495ad03f04116f379";

//First create an instance of the corresponding manager class
MessagesManager msgMgr;
long long int ms;
string currentLabel;

//Define the callback handler which will be called after calling SendMessage function
void sendMessageHandler(MessageIDEnvelope msgEnv, Error err, void* userData) {

	dlog_print(DLOG_INFO, "DEMO", "Send Message done with error %d and code %s",
			err.getCode(), err.getMessage().c_str());
	//Print the full Json in dlog
	dlog_print(DLOG_INFO, "DEMO", "msgEnv is %s", msgEnv.toJson());

	currentLabel = "";

	//Check if the API call was successfull
	if (err.getCode() == 200) {
		dlog_print(DLOG_INFO, "DEMO", "Send Message successful");

		std::string response = msgEnv.getData().getMid();
		currentLabel.append(
				"The Message was sent successfully! The Message ID is - ");
		currentLabel.append(response);
		currentLabel.append(
				". Wait a few seconds, then press the GetMsg Button to retrieve it");

	} else {
		dlog_print(DLOG_INFO, "DEMO", "Send Message NOT successful");
		string errmsg = err.getMessage();
		dlog_print(DLOG_INFO, "DEMO",
				"the error code is %d and error message is %s", err.getCode(),
				errmsg.c_str());

		//display the error
		currentLabel.append(
				"The Message was Not sent successfully! This is the error message - ");
		currentLabel.append(err.getMessage());
	}
	//display currentLabel
	elm_object_text_set(mylabel, currentLabel.c_str());
	return;
}

//Now to call the corressponding API endpoint
int sendMessage() {
	//UI part - set the text displayed inside the box in the app.
	currentLabel = "Trying to Send Message";
	elm_object_text_set(mylabel, currentLabel.c_str());

	dlog_print(DLOG_INFO, "DEMO", "Sending Message");
	Message data;

	//Set sdid to send with the message
	data.setSdid(deviceId);
	data.setType("message");

	//Set the timestamp tp current time
	ms = chrono::duration_cast < chrono::milliseconds
			> (chrono::system_clock::now().time_since_epoch()).count();
	data.setTs(ms);

	//Create a Map to send as data in the message
	//The "temp" value is randomly generated from 0-199
	//The "onFire" value is false
	map<string, string> myData;
	string temperature = "temp";
	int randTemp = rand() % 200;
	string tempval = std::to_string(randTemp);
	myData.insert(pair<string, string>(temperature, tempval));
	myData.insert(pair<string, string>("onFire", "false"));
	data.setData(myData);

	//Send the Message by calling the API
	msgMgr.sendMessageAsync(deviceToken, data, sendMessageHandler, NULL);
	return 0;
}

//Define the callback handler which will be called after calling getLastNormalizedMessage function
void getLastNormalizedMessageHandler(NormalizedMessagesEnvelope msgEnv,
		Error err, void* userData) {

	dlog_print(DLOG_INFO, "DEMO", "getMessage done with error %d and code %s",
			err.getCode(), err.getMessage().c_str());
	//Print the full Json in dlog
	dlog_print(DLOG_INFO, "DEMO", "msgEnv is %s", msgEnv.toJson());

	currentLabel = "";

	//Check if the API call was successfull
	if (err.getCode() == 200) {

		dlog_print(DLOG_INFO, "DEMO", "Send Message successful");

		std::string response = msgEnv.getData().front().getMid();
		currentLabel.append(
				"The Message was received successfully! The Message ID is - ");
		currentLabel.append(response);
	} else {
		dlog_print(DLOG_INFO, "DEMO", "getMessage NOT successful");
		string errmsg = err.getMessage();
		dlog_print(DLOG_INFO, "DEMO",
				"the error code is %d and error message is %s", err.getCode(),
				errmsg.c_str());

		//display the error
		currentLabel.append(
				"The Message was Not received successfully! This is the error - ");
		currentLabel.append(err.getMessage());
		std::string response = msgEnv.toJson();
		currentLabel.append(response);
	}

	elm_object_text_set(mylabel, currentLabel.c_str());
	return;
}

//Now to call the corressponding API endpoint
int getLastNormalizedMessage() {
	//UI part - set the text displayed inside the box in the app.
	currentLabel = "";
	elm_object_text_set(mylabel, currentLabel.c_str());

	dlog_print(DLOG_INFO, "DEMO", "starting to  getLastNormalizedMessages");

	//Retrieve the Message by calling the API
	msgMgr.getLastNormalizedMessagesAsync(deviceToken, 1, deviceId, "",
			getLastNormalizedMessageHandler, NULL);

	return 0;
}
