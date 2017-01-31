#ARTIK Cloud Tizen SDK

This SDK Extension helps you connect your Tizen 2.4 mobile native applications to ARTIK Cloud. It exposes a number of methods to easily execute REST API calls to ARTIK Cloud.

##Prerequisites

Using this SDK requires [Tizen IDE/Tizen Studio](https://developer.tizen.org/development/tizen-studio/download) to be installed.

##Installation

1.	Use the Tizen IDE `Package Manager` (Update Manager) to install the `Native app. Development (IDE)` package for 2.4
2.	From the current repository download the folder `artikcloud-tizen/2.4-tizen-artik-cloud-SDKs-2.x.x/`
3.	Go to `Package Manager -> Configuration -> Extra Repository -> Add -> Set Repository Path`. Select the `pkg_list_***` file from inside the above folder and click ok. In the `name` field, give it any name and click ok.
4.	In the main window of `Package Manager`, click on the `Extension SDK` tab (Extras), and install `2.4 artik-cloud add-on sdk`.

##Usage

1.	Create a new Native App project for Tizen
2.	Add the SDK to your app by right-clicking on the project in `project Explorer -> Properties -> C/C++ Build -> click on Tizen Settings -> Framework tab -> Check the box "artik-cloud"`
3.	Then link to the SDK library by right-clicking on the project in `project Explorer -> Properties -> C/C++ Build -> Settings -> Tool Settings tab -> Under C++ Linker click Libraries -> Click the "+" button to add another library -> In the popup type "artik-cloud" -> click ok -> click ok`
4.	Now you can simply call the Artik api endpoints by importing API Manager classes such as `DevicesManager.h`, `UsersManager.h`, `MessagesManager.h`.

Check in the [sample](./sample) folder for an example of how to use the API. See the file `/html/index.html` inside the [documentation](./documentation) folder for the full API reference.

##Getting Started

All the SDK classes are under the namespace `Tizen::ArtikCloud`.
All the API endpoints are accessed via *Manager classes* such as `DevicesManager.h`, `UsersManager.h`, `MessagesManager.h`.
All other classes are *Model classes*, such as `Device.h` etc. containing various data structures needed for the API.

For each API call, you will need to supply an [Access Token](https://developer.artik.cloud/documentation/introduction/authentication.html#authentication), and a callback handler function which will be called at the end of the API call.
You can also pass a `void* userData` parameter for passing data to the callback function.
Other parameters (if any) and the type of the callback handler function, depend on the specific API.
Each API call can be either synchronous(blocking) or asynchronous(via threads).

For example, to get the details of the current user, call `UsersManager::getSelfSync` -

```C++

#include "UsersManager.h"

//First define the callback handler
void GetSelfCallback(UserEnvelope userEnvelope, Error error, void * userData)
{
	dlog_print(DLOG_DEBUG, LOG_TAG, "GetSelfCallback() start");

	//Check the error code is 200 for HTTP OK
	int err = error.getCode();
	dlog_print(DLOG_DEBUG, LOG_TAG, "error code = [%d]", err);

	//Do Something with the returned values
	User user = userEnvelope.getData();
	string userId = user.getId();
	string email = user.getEmail();
}


void GetSelf()
{
	//First create an instance of the corresponding manager class
	UsersManager api;

	//Now call the API
	api.getSelfSync((char *)accessToken.c_str(), GetSelfCallback, NULL);

	return;
}

```

Several API calls will require objects of the `Model Classes`.
Every data member of the Model classes has a `getter` and `setter` function.
Every Model class has a `toJson()` function, which retrieve a string JSON representation of the data in this class.
Every Model class also has a `fromJson()` function, which fills in members of this class from JSON string representing it.

For example -
```C++
#include "User.h"
void testUser()
{
	//First create an instance of the Model class
	User user;

	//Fill in the members using setters
	user.setName("Sample Name");
	user.setEmail("samplename@domain.com");

	//To get all the user data in a Json
	char* strJSON = user.toJson();

	return;
}

```

##More Documentation

For more detailed documentation on ArtikCloud Tizen SDK, check the file `/html/index.html` inside the [documentation](./documentation) folder for the full API reference.

To learn how to create your own Tizen Applications, see [Tizen Getting Started](https://developer.tizen.org/development/training/native-application/getting-started/creating-your-first-tizen-mobile-native-application).

For examples on how to use to API, check in the [sample](./sample) folder.

See Below for a quick summary of the files in the SDK.

##What are the API files for accessing the REST endpoints?
All URIs are relative to https://api.artik.cloudhttps://api.artik.cloud/v1.1

### DeviceTypesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getAvailableManifestVersionsSync* | *GET* https://api.artik.cloud/v1.1 | Get Available Manifest Versions.
*getAvailableManifestVersionsASync* | *GET* https://api.artik.cloud/v1.1 | Get Available Manifest Versions.
*getDeviceTypeSync* | *GET* https://api.artik.cloud/v1.1 | Get Device Type.
*getDeviceTypeASync* | *GET* https://api.artik.cloud/v1.1 | Get Device Type.
*getDeviceTypesSync* | *GET* https://api.artik.cloud/v1.1 | Get Device Types.
*getDeviceTypesASync* | *GET* https://api.artik.cloud/v1.1 | Get Device Types.
*getDeviceTypesByApplicationSync* | *GET* https://api.artik.cloud/v1.1 | Get Device Types by Application.
*getDeviceTypesByApplicationASync* | *GET* https://api.artik.cloud/v1.1 | Get Device Types by Application.
*getLatestManifestPropertiesSync* | *GET* https://api.artik.cloud/v1.1 | Get Latest Manifest Properties.
*getLatestManifestPropertiesASync* | *GET* https://api.artik.cloud/v1.1 | Get Latest Manifest Properties.
*getManifestPropertiesSync* | *GET* https://api.artik.cloud/v1.1 | Get manifest properties.
*getManifestPropertiesASync* | *GET* https://api.artik.cloud/v1.1 | Get manifest properties.

### DevicesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*addDeviceSync* | *POST* https://api.artik.cloud/v1.1 | Add Device.
*addDeviceASync* | *POST* https://api.artik.cloud/v1.1 | Add Device.
*deleteDeviceSync* | *DELETE* https://api.artik.cloud/v1.1 | Delete Device.
*deleteDeviceASync* | *DELETE* https://api.artik.cloud/v1.1 | Delete Device.
*deleteDeviceTokenSync* | *DELETE* https://api.artik.cloud/v1.1 | Delete Device Token.
*deleteDeviceTokenASync* | *DELETE* https://api.artik.cloud/v1.1 | Delete Device Token.
*getDeviceSync* | *GET* https://api.artik.cloud/v1.1 | Get Device.
*getDeviceASync* | *GET* https://api.artik.cloud/v1.1 | Get Device.
*getDevicePresenceSync* | *GET* https://api.artik.cloud/v1.1 | Get device presence information.
*getDevicePresenceASync* | *GET* https://api.artik.cloud/v1.1 | Get device presence information.
*getDeviceTokenSync* | *GET* https://api.artik.cloud/v1.1 | Get Device Token.
*getDeviceTokenASync* | *GET* https://api.artik.cloud/v1.1 | Get Device Token.
*updateDeviceSync* | *PUT* https://api.artik.cloud/v1.1 | Update Device.
*updateDeviceASync* | *PUT* https://api.artik.cloud/v1.1 | Update Device.
*updateDeviceTokenSync* | *PUT* https://api.artik.cloud/v1.1 | Update Device Token.
*updateDeviceTokenASync* | *PUT* https://api.artik.cloud/v1.1 | Update Device Token.

### DevicesManagementManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createTasksSync* | *POST* https://api.artik.cloud/v1.1 | Create a new task for one or more devices.
*createTasksASync* | *POST* https://api.artik.cloud/v1.1 | Create a new task for one or more devices.
*deleteServerPropertiesSync* | *DELETE* https://api.artik.cloud/v1.1 | Deletes a device's properties..
*deleteServerPropertiesASync* | *DELETE* https://api.artik.cloud/v1.1 | Deletes a device's properties..
*getAllByDidSync* | *GET* https://api.artik.cloud/v1.1 | Returns the list of tasks for a particular device id with optional status filter..
*getAllByDidASync* | *GET* https://api.artik.cloud/v1.1 | Returns the list of tasks for a particular device id with optional status filter..
*getDeviceTypesInfoSync* | *GET* https://api.artik.cloud/v1.1 | Read a device type device management information..
*getDeviceTypesInfoASync* | *GET* https://api.artik.cloud/v1.1 | Read a device type device management information..
*getManifestPropertiesSync* | *GET* https://api.artik.cloud/v1.1 | Get a device type's device management manifest properties.
*getManifestPropertiesASync* | *GET* https://api.artik.cloud/v1.1 | Get a device type's device management manifest properties.
*getPropertiesSync* | *GET* https://api.artik.cloud/v1.1 | Read a device's properties..
*getPropertiesASync* | *GET* https://api.artik.cloud/v1.1 | Read a device's properties..
*getStatusesSync* | *GET* https://api.artik.cloud/v1.1 | Returns the details and status of a task id and the individual statuses of each device id in the list..
*getStatusesASync* | *GET* https://api.artik.cloud/v1.1 | Returns the details and status of a task id and the individual statuses of each device id in the list..
*getStatusesHistorySync* | *GET* https://api.artik.cloud/v1.1 | Returns the history of the status changes for a specific task id, or for a specific device id in that task..
*getStatusesHistoryASync* | *GET* https://api.artik.cloud/v1.1 | Returns the history of the status changes for a specific task id, or for a specific device id in that task..
*getTaskByIDSync* | *GET* https://api.artik.cloud/v1.1 | Returns the details and global status of a specific task id..
*getTaskByIDASync* | *GET* https://api.artik.cloud/v1.1 | Returns the details and global status of a specific task id..
*getTasksSync* | *GET* https://api.artik.cloud/v1.1 | Returns the all the tasks for a device type..
*getTasksASync* | *GET* https://api.artik.cloud/v1.1 | Returns the all the tasks for a device type..
*queryPropertiesSync* | *GET* https://api.artik.cloud/v1.1 | Query device properties across devices..
*queryPropertiesASync* | *GET* https://api.artik.cloud/v1.1 | Query device properties across devices..
*updateDeviceTypesInfoSync* | *PUT* https://api.artik.cloud/v1.1 | Updates a device type information.
*updateDeviceTypesInfoASync* | *PUT* https://api.artik.cloud/v1.1 | Updates a device type information.
*updateServerPropertiesSync* | *POST* https://api.artik.cloud/v1.1 | Updates a device's server properties..
*updateServerPropertiesASync* | *POST* https://api.artik.cloud/v1.1 | Updates a device's server properties..
*updateTaskSync* | *PUT* https://api.artik.cloud/v1.1 | Updates a task for all devices - For now just allows changing the state to cancelled..
*updateTaskASync* | *PUT* https://api.artik.cloud/v1.1 | Updates a task for all devices - For now just allows changing the state to cancelled..
*updateTaskForDeviceSync* | *PUT* https://api.artik.cloud/v1.1 | Updates a task for a specific device - For now just allows changing the state to cancelled..
*updateTaskForDeviceASync* | *PUT* https://api.artik.cloud/v1.1 | Updates a task for a specific device - For now just allows changing the state to cancelled..

### ExportManager
Method | HTTP request | Description
------------- | ------------- | -------------
*exportRequestSync* | *POST* https://api.artik.cloud/v1.1 | Create Export Request.
*exportRequestASync* | *POST* https://api.artik.cloud/v1.1 | Create Export Request.
*getExportHistorySync* | *GET* https://api.artik.cloud/v1.1 | Get Export History.
*getExportHistoryASync* | *GET* https://api.artik.cloud/v1.1 | Get Export History.
*getExportResultSync* | *GET* https://api.artik.cloud/v1.1 | Get Export Result.
*getExportResultASync* | *GET* https://api.artik.cloud/v1.1 | Get Export Result.
*getExportStatusSync* | *GET* https://api.artik.cloud/v1.1 | Check Export Status.
*getExportStatusASync* | *GET* https://api.artik.cloud/v1.1 | Check Export Status.

### MessagesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getAggregatesHistogramSync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Message Histogram.
*getAggregatesHistogramASync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Message Histogram.
*getFieldPresenceSync* | *GET* https://api.artik.cloud/v1.1 | Get normalized message presence.
*getFieldPresenceASync* | *GET* https://api.artik.cloud/v1.1 | Get normalized message presence.
*getLastNormalizedMessagesSync* | *GET* https://api.artik.cloud/v1.1 | Get Last Normalized Message.
*getLastNormalizedMessagesASync* | *GET* https://api.artik.cloud/v1.1 | Get Last Normalized Message.
*getMessageAggregatesSync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Message Aggregates.
*getMessageAggregatesASync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Message Aggregates.
*getMessageSnapshotsSync* | *GET* https://api.artik.cloud/v1.1 | Get Message Snapshots.
*getMessageSnapshotsASync* | *GET* https://api.artik.cloud/v1.1 | Get Message Snapshots.
*getNormalizedActionsSync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Actions.
*getNormalizedActionsASync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Actions.
*getNormalizedMessagesSync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Messages.
*getNormalizedMessagesASync* | *GET* https://api.artik.cloud/v1.1 | Get Normalized Messages.
*sendActionsSync* | *POST* https://api.artik.cloud/v1.1 | Send Actions.
*sendActionsASync* | *POST* https://api.artik.cloud/v1.1 | Send Actions.
*sendMessageSync* | *POST* https://api.artik.cloud/v1.1 | Send Message.
*sendMessageASync* | *POST* https://api.artik.cloud/v1.1 | Send Message.

### RegistrationsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*confirmUserSync* | *PUT* https://api.artik.cloud/v1.1 | Confirm User.
*confirmUserASync* | *PUT* https://api.artik.cloud/v1.1 | Confirm User.
*getRequestStatusForUserSync* | *GET* https://api.artik.cloud/v1.1 | Get Request Status For User.
*getRequestStatusForUserASync* | *GET* https://api.artik.cloud/v1.1 | Get Request Status For User.
*unregisterDeviceSync* | *DELETE* https://api.artik.cloud/v1.1 | Unregister Device.
*unregisterDeviceASync* | *DELETE* https://api.artik.cloud/v1.1 | Unregister Device.

### RulesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createRuleSync* | *POST* https://api.artik.cloud/v1.1 | Create Rule.
*createRuleASync* | *POST* https://api.artik.cloud/v1.1 | Create Rule.
*deleteRuleSync* | *DELETE* https://api.artik.cloud/v1.1 | Delete Rule.
*deleteRuleASync* | *DELETE* https://api.artik.cloud/v1.1 | Delete Rule.
*getRuleSync* | *GET* https://api.artik.cloud/v1.1 | Get Rule.
*getRuleASync* | *GET* https://api.artik.cloud/v1.1 | Get Rule.
*updateRuleSync* | *PUT* https://api.artik.cloud/v1.1 | Update Rule.
*updateRuleASync* | *PUT* https://api.artik.cloud/v1.1 | Update Rule.

### TagsManager
Method | HTTP request | Description
------------- | ------------- | -------------
*getTagCategoriesSync* | *GET* https://api.artik.cloud/v1.1 | Get all categories.
*getTagCategoriesASync* | *GET* https://api.artik.cloud/v1.1 | Get all categories.
*getTagSuggestionsSync* | *GET* https://api.artik.cloud/v1.1 | Get tag suggestions.
*getTagSuggestionsASync* | *GET* https://api.artik.cloud/v1.1 | Get tag suggestions.
*getTagsByCategoriesSync* | *GET* https://api.artik.cloud/v1.1 | Get all tags of categories.
*getTagsByCategoriesASync* | *GET* https://api.artik.cloud/v1.1 | Get all tags of categories.

### TokensManager
Method | HTTP request | Description
------------- | ------------- | -------------
*checkTokenSync* | *POST* https://api.artik.cloud/v1.1 | Check Token.
*checkTokenASync* | *POST* https://api.artik.cloud/v1.1 | Check Token.
*refreshTokenSync* | *POST* https://api.artik.cloud/v1.1 | Refresh Token.
*refreshTokenASync* | *POST* https://api.artik.cloud/v1.1 | Refresh Token.
*tokenInfoSync* | *GET* https://api.artik.cloud/v1.1 | Token Info.
*tokenInfoASync* | *GET* https://api.artik.cloud/v1.1 | Token Info.

### UsersManager
Method | HTTP request | Description
------------- | ------------- | -------------
*createUserPropertiesSync* | *POST* https://api.artik.cloud/v1.1 | Create User Application Properties.
*createUserPropertiesASync* | *POST* https://api.artik.cloud/v1.1 | Create User Application Properties.
*deleteUserPropertiesSync* | *DELETE* https://api.artik.cloud/v1.1 | Delete User Application Properties.
*deleteUserPropertiesASync* | *DELETE* https://api.artik.cloud/v1.1 | Delete User Application Properties.
*getSelfSync* | *GET* https://api.artik.cloud/v1.1 | Get Current User Profile.
*getSelfASync* | *GET* https://api.artik.cloud/v1.1 | Get Current User Profile.
*getUserDeviceTypesSync* | *GET* https://api.artik.cloud/v1.1 | Get User Device Types.
*getUserDeviceTypesASync* | *GET* https://api.artik.cloud/v1.1 | Get User Device Types.
*getUserDevicesSync* | *GET* https://api.artik.cloud/v1.1 | Get User Devices.
*getUserDevicesASync* | *GET* https://api.artik.cloud/v1.1 | Get User Devices.
*getUserPropertiesSync* | *GET* https://api.artik.cloud/v1.1 | Get User application properties.
*getUserPropertiesASync* | *GET* https://api.artik.cloud/v1.1 | Get User application properties.
*getUserRulesSync* | *GET* https://api.artik.cloud/v1.1 | Get User Rules.
*getUserRulesASync* | *GET* https://api.artik.cloud/v1.1 | Get User Rules.
*updateUserPropertiesSync* | *PUT* https://api.artik.cloud/v1.1 | Update User Application Properties.
*updateUserPropertiesASync* | *PUT* https://api.artik.cloud/v1.1 | Update User Application Properties.


## What are the Model files for the data structures/objects?
Class | Description
------------- | -------------
 *AckEnvelope* | Acknowledgement Envelope.
 *Acknowledgement* | Acknowledgement received by a WebSocket in response to a RegisterMessage, MessageIn or ActionIn.
 *Action* | Action Information.
 *ActionArray* | Holds an array of Actions
 *ActionDetails* | Action details.
 *ActionDetailsArray* | Contains the array of Action Details
 *ActionIn* | Action sent to a WebSocket.
 *ActionOut* | Action received in a WebSocket.
 *Actions* | Actions Information.
 *AggregateData* | Aggregate Data
 *AggregatesHistogramData* | Aggregates Histogram Data
 *AggregatesHistogramResponse* | Aggregates Histogram Response
 *AggregatesResponse* | Aggregates Response
 *AppProperties* | User Application Properties
 *CheckTokenMessage* |
 *CheckTokenResponse* |
 *Device* | Device information.
 *DeviceArray* | Holds an array of Devices
 *DeviceEnvelope* | Device Envelope
 *DeviceRegCompleteRequest* |
 *DeviceRegConfirmUserRequest* |
 *DeviceRegConfirmUserResponse* |
 *DeviceRegConfirmUserResponseEnvelope* |
 *DeviceRegStatusResponse* |
 *DeviceRegStatusResponseEnvelope* |
 *DeviceTask* |
 *DeviceTaskUpdateRequest* |
 *DeviceTaskUpdateResponse* |
 *DeviceToken* | Device Token
 *DeviceTokenEnvelope* | Device Token Envelope
 *DeviceType* | Device Type Information
 *DeviceTypeArray* | Holds an array of DeviceTypes
 *DeviceTypeEnvelope* | Device Type Envelope
 *DeviceTypeInfo* |
 *DeviceTypeInfoEnvelope* |
 *DeviceTypesEnvelope* | DeviceTypes Envelope
 *DeviceTypesInfo* |
 *DeviceTypesInfoEnvelope* |
 *DevicesEnvelope* | Devices Envelope
 *ErrorEnvelope* | WebSocket Error Envelope
 *EventFeedData* | WebSocket Event Feed
 *ExportData* | Export Data.
 *ExportDataArray* | Export Data Array.
 *ExportHistoryResponse* | Export History Response.
 *ExportNormalizedMessagesResponse* | Export Normalized Messages Response.
 *ExportRequest* | Export Request.
 *ExportRequestData* | Export Request Data.
 *ExportRequestInfo* | Export Request Info.
 *ExportRequestResponse* | Export Request Response.
 *ExportResponse* | Export Response.
 *ExportStatusResponse* | Export Status Response.
 *FieldPath* |
 *FieldPresence* | Field Presence
 *FieldPresenceEnvelope* | Field Presence Envelope
 *FieldsActions* | Fields and Actions
 *ManifestProperties* | Manifest Properties
 *ManifestPropertiesEnvelope* | Manifest Properties Envelope
 *ManifestVersions* | Manifest Versions
 *ManifestVersionsEnvelope* | Manifest Versions Envelope
 *Message* | Message Information.
 *MessageAction* | Message or Action Information.
 *MessageID* | Mesage ID.
 *MessageIDEnvelope* | Message ID Envelope
 *MessageIn* | Message sent to a WebSocket
 *MessageOut* | Message received by a WebSocket.
 *MetadataEnvelope* |
 *MetadataPropertiesEnvelope* |
 *MetadataQueryEnvelope* |
 *NonEmptyString* |
 *NormalizedAction* | Normalized Action
 *NormalizedActionsEnvelope* | Normalized Actions Envelope
 *NormalizedMessage* | Normalized Message
 *NormalizedMessagesEnvelope* | Normalized Messages Envelope
 *OutputRule* | Rule information.
 *PresenceEnvelope* |
 *PresenceModel* |
 *PropertiesEnvelope* | User Application Properties Envelope
 *RefreshTokenResponse* |
 *RegisterMessage* | WebSocket Registration Message
 *RuleArray* | Holds an array of Rules.
 *RuleCreationInfo* | Class to create a new Rule.
 *RuleEnvelope* | Rule Envelope.
 *RuleError* | Rule Error.
 *RuleUpdateInfo* | Class to update an existing Rule.
 *RuleWarningOutput* | Rule Warnings
 *RulesEnvelope* | Rules Envelope.
 *SnapshotResponse* |
 *SnapshotResponses* |
 *SnapshotsResponseEnvelope* |
 *Tag* | Tag information.
 *TagArray* | Contains the arry of Tags.
 *TagsEnvelope* | Tags Envelope.
 *Task* |
 *TaskByDid* |
 *TaskByDidList* |
 *TaskByDidListEnvelope* |
 *TaskEnvelope* |
 *TaskHistory* |
 *TaskHistoryList* |
 *TaskList* |
 *TaskListEnvelope* |
 *TaskParameters* |
 *TaskRequest* |
 *TaskStatus* |
 *TaskStatusCounts* |
 *TaskStatuses* |
 *TaskStatusesEnvelope* |
 *TaskStatusesHistoryEnvelope* |
 *TaskUpdateRequest* |
 *TaskUpdateResponse* |
 *TasksStatusCounts* |
 *Token* |
 *TokenInfo* |
 *TokenInfoSuccessResponse* |
 *TokenRequest* |
 *TokenResponse* |
 *UnregisterDeviceResponse* |
 *UnregisterDeviceResponseEnvelope* |
 *User* | User Information
 *UserEnvelope* | User Envelope
 *WebSocketError* | WebSocket Error Information



##More about ARTIK Cloud

If you are not familiar with ARTIK Cloud, we have extensive documentation at https://developer.artik.cloud/documentation

The full ARTIK Cloud API specification can be found at https://developer.artik.cloud/documentation/api-reference/

Check out advanced sample applications at https://developer.artik.cloud/documentation/samples/

To create and manage your services and devices on ARTIK Cloud, create an account at https://developer.artik.cloud

Also see the ARTIK Cloud blog for tutorials, updates, and more: http://artik.io/blog/cloud

##Licence and Copyright

Licensed under the Apache License. See [LICENSE](./LICENSE).

Copyright (c) 2016 Samsung Electronics Co., Ltd.
