##What are the API files for accessing the REST endpoints?

* [DeviceTypesManager](../src/DeviceTypesManager.cpp)
  * *getAvailableManifestVersionsSync* / *getAvailableManifestVersionsAsync* - Get Available Manifest Versions.
  * *getDeviceTypeSync* / *getDeviceTypeAsync* - Get Device Type.
  * *getDeviceTypesSync* / *getDeviceTypesAsync* - Get Device Types.
  * *getLatestManifestPropertiesSync* / *getLatestManifestPropertiesAsync* - Get Latest Manifest Properties.
  * *getManifestPropertiesSync* / *getManifestPropertiesAsync* - Get manifest properties.

* [DevicesManager](../src/DevicesManager.cpp)
  * *addDeviceSync* / *addDeviceAsync* - Add Device.
  * *deleteDeviceSync* / *deleteDeviceAsync* - Delete Device.
  * *deleteDeviceTokenSync* / *deleteDeviceTokenAsync* - Delete Device Token.
  * *getDeviceSync* / *getDeviceAsync* - Get Device.
  * *getDevicePresenceSync* / *getDevicePresenceAsync* - Get device presence information.
  * *getDeviceTokenSync* / *getDeviceTokenAsync* - Get Device Token.
  * *updateDeviceSync* / *updateDeviceAsync* - Update Device.
  * *updateDeviceTokenSync* / *updateDeviceTokenAsync* - Update Device Token.

* [ExportManager](../src/ExportManager.cpp)
  * *exportRequestSync* / *exportRequestAsync* - Create Export Request.
  * *getExportHistorySync* / *getExportHistoryAsync* - Get Export History.
  * *getExportResultSync* / *getExportResultAsync* - Get Export Result.
  * *getExportStatusSync* / *getExportStatusAsync* - Check Export Status.

* [MessagesManager](../src/MessagesManager.cpp)
  * *getAggregatesHistogramSync* / *getAggregatesHistogramAsync* - Get Normalized Message Histogram.
  * *getFieldPresenceSync* / *getFieldPresenceAsync* - Get normalized message presence.
  * *getLastNormalizedMessagesSync* / *getLastNormalizedMessagesAsync* - Get Last Normalized Message.
  * *getMessageAggregatesSync* / *getMessageAggregatesAsync* - Get Normalized Message Aggregates.
  * *getMessageSnapshotsSync* / *getMessageSnapshotsAsync* - Get Message Snapshots.
  * *getNormalizedActionsSync* / *getNormalizedActionsAsync* - Get Normalized Actions.
  * *getNormalizedMessagesSync* / *getNormalizedMessagesAsync* - Get Normalized Messages.
  * *sendActionsSync* / *sendActionsAsync* - Send Actions.
  * *sendMessageSync* / *sendMessageAsync* - Send Message.

* [RegistrationsManager](../src/RegistrationsManager.cpp)
  * *confirmUserSync* / *confirmUserAsync* - Confirm User.
  * *getRequestStatusForUserSync* / *getRequestStatusForUserAsync* - Get Request Status For User.
  * *unregisterDeviceSync* / *unregisterDeviceAsync* - Unregister Device.

* [RulesManager](../src/RulesManager.cpp)
  * *createRuleSync* / *createRuleAsync* - Create Rule.
  * *deleteRuleSync* / *deleteRuleAsync* - Delete Rule.
  * *getRuleSync* / *getRuleAsync* - Get Rule.
  * *updateRuleSync* / *updateRuleAsync* - Update Rule.

* [TagsManager](../src/TagsManager.cpp)
  * *getTagCategoriesSync* / *getTagCategoriesAsync* - Get all categories.
  * *getTagSuggestionsSync* / *getTagSuggestionsAsync* - Get tag suggestions.
  * *getTagsByCategoriesSync* / *getTagsByCategoriesAsync* - Get all tags of categories.

* [TokensManager](../src/TokensManager.cpp)
  * *checkTokenSync* / *checkTokenAsync* - Check Token.
  * *refreshTokenSync* / *refreshTokenAsync* - Refresh Token.
  * *tokenInfoSync* / *tokenInfoAsync* - Token Info.

* [UsersManager](../src/UsersManager.cpp)
  * *createUserPropertiesSync* / *createUserPropertiesAsync* - Create User Application Properties.
  * *deleteUserPropertiesSync* / *deleteUserPropertiesAsync* - Delete User Application Properties.
  * *getSelfSync* / *getSelfAsync* - Get Current User Profile.
  * *getUserDeviceTypesSync* / *getUserDeviceTypesAsync* - Get User Device Types.
  * *getUserDevicesSync* / *getUserDevicesAsync* - Get User Devices.
  * *getUserPropertiesSync* / *getUserPropertiesAsync* - Get User application properties.
  * *getUserRulesSync* / *getUserRulesAsync* - Get User Rules.
  * *updateUserPropertiesSync* / *updateUserPropertiesAsync* - Update User Application Properties.


## What are the Model files for the data structures/objects?

* [AckEnvelope](../src/AckEnvelope.cpp) - Acknowledgement Envelope.
* [Acknowledgement](../src/Acknowledgement.cpp) - Acknowledgement received by a WebSocket in response to a RegisterMessage, MessageIn or ActionIn.
* [Action](../src/Action.cpp) - Action Information.
* [ActionArray](../src/ActionArray.cpp) - Holds an array of Actions
* [ActionDetails](../src/ActionDetails.cpp) - Action details.
* [ActionDetailsArray](../src/ActionDetailsArray.cpp) - Contains the array of Action Details
* [ActionIn](../src/ActionIn.cpp) - Action sent to a WebSocket.
* [ActionOut](../src/ActionOut.cpp) - Action received in a WebSocket.
* [Actions](../src/Actions.cpp) - Actions Information.
* [AggregateData](../src/AggregateData.cpp) - Aggregate Data
* [AggregatesHistogramData](../src/AggregatesHistogramData.cpp) - Aggregates Histogram Data
* [AggregatesHistogramResponse](../src/AggregatesHistogramResponse.cpp) - Aggregates Histogram Response
* [AggregatesResponse](../src/AggregatesResponse.cpp) - Aggregates Response
* [AppProperties](../src/AppProperties.cpp) - User Application Properties
* [CheckTokenMessage](../src/CheckTokenMessage.cpp) -
* [CheckTokenResponse](../src/CheckTokenResponse.cpp) -
* [Device](../src/Device.cpp) - Device information.
* [DeviceArray](../src/DeviceArray.cpp) - Holds an array of Devices
* [DeviceEnvelope](../src/DeviceEnvelope.cpp) - Device Envelope
* [DeviceRegCompleteRequest](../src/DeviceRegCompleteRequest.cpp) -
* [DeviceRegConfirmUserRequest](../src/DeviceRegConfirmUserRequest.cpp) -
* [DeviceRegConfirmUserResponse](../src/DeviceRegConfirmUserResponse.cpp) -
* [DeviceRegConfirmUserResponseEnvelope](../src/DeviceRegConfirmUserResponseEnvelope.cpp) -
* [DeviceRegStatusResponse](../src/DeviceRegStatusResponse.cpp) -
* [DeviceRegStatusResponseEnvelope](../src/DeviceRegStatusResponseEnvelope.cpp) -
* [DeviceToken](../src/DeviceToken.cpp) - Device Token
* [DeviceTokenEnvelope](../src/DeviceTokenEnvelope.cpp) - Device Token Envelope
* [DeviceType](../src/DeviceType.cpp) - Device Type Information
* [DeviceTypeArray](../src/DeviceTypeArray.cpp) - Holds an array of DeviceTypes
* [DeviceTypeEnvelope](../src/DeviceTypeEnvelope.cpp) - Device Type Envelope
* [DeviceTypesEnvelope](../src/DeviceTypesEnvelope.cpp) - DeviceTypes Envelope
* [DevicesEnvelope](../src/DevicesEnvelope.cpp) - Devices Envelope
* [ErrorEnvelope](../src/ErrorEnvelope.cpp) - WebSocket Error Envelope
* [EventFeedData](../src/EventFeedData.cpp) - WebSocket Event Feed
* [ExportData](../src/ExportData.cpp) - Export Data.
* [ExportDataArray](../src/ExportDataArray.cpp) - Export Data Array.
* [ExportHistoryResponse](../src/ExportHistoryResponse.cpp) - Export History Response.
* [ExportNormalizedMessagesResponse](../src/ExportNormalizedMessagesResponse.cpp) - Export Normalized Messages Response.
* [ExportRequest](../src/ExportRequest.cpp) - Export Request.
* [ExportRequestData](../src/ExportRequestData.cpp) - Export Request Data.
* [ExportRequestInfo](../src/ExportRequestInfo.cpp) - Export Request Info.
* [ExportRequestResponse](../src/ExportRequestResponse.cpp) - Export Request Response.
* [ExportResponse](../src/ExportResponse.cpp) - Export Response.
* [ExportStatusResponse](../src/ExportStatusResponse.cpp) - Export Status Response.
* [FieldPath](../src/FieldPath.cpp) -
* [FieldPresence](../src/FieldPresence.cpp) - Field Presence
* [FieldPresenceEnvelope](../src/FieldPresenceEnvelope.cpp) - Field Presence Envelope
* [FieldsActions](../src/FieldsActions.cpp) - Fields and Actions
* [ManifestProperties](../src/ManifestProperties.cpp) - Manifest Properties
* [ManifestPropertiesEnvelope](../src/ManifestPropertiesEnvelope.cpp) - Manifest Properties Envelope
* [ManifestVersions](../src/ManifestVersions.cpp) - Manifest Versions
* [ManifestVersionsEnvelope](../src/ManifestVersionsEnvelope.cpp) - Manifest Versions Envelope
* [Message](../src/Message.cpp) - Message Information.
* [MessageAction](../src/MessageAction.cpp) - Message or Action Information.
* [MessageID](../src/MessageID.cpp) - Mesage ID.
* [MessageIDEnvelope](../src/MessageIDEnvelope.cpp) - Message ID Envelope
* [MessageIn](../src/MessageIn.cpp) - Message sent to a WebSocket
* [MessageOut](../src/MessageOut.cpp) - Message received by a WebSocket.
* [NonEmptyString](../src/NonEmptyString.cpp) -
* [NormalizedAction](../src/NormalizedAction.cpp) - Normalized Action
* [NormalizedActionsEnvelope](../src/NormalizedActionsEnvelope.cpp) - Normalized Actions Envelope
* [NormalizedMessage](../src/NormalizedMessage.cpp) - Normalized Message
* [NormalizedMessagesEnvelope](../src/NormalizedMessagesEnvelope.cpp) - Normalized Messages Envelope
* [OutputRule](../src/OutputRule.cpp) - Rule information.
* [PresenceEnvelope](../src/PresenceEnvelope.cpp) -
* [PresenceModel](../src/PresenceModel.cpp) -
* [PropertiesEnvelope](../src/PropertiesEnvelope.cpp) - User Application Properties Envelope
* [RefreshTokenResponse](../src/RefreshTokenResponse.cpp) -
* [RegisterMessage](../src/RegisterMessage.cpp) - WebSocket Registration Message
* [RuleArray](../src/RuleArray.cpp) - Holds an array of Rules.
* [RuleCreationInfo](../src/RuleCreationInfo.cpp) - Class to create a new Rule.
* [RuleEnvelope](../src/RuleEnvelope.cpp) - Rule Envelope.
* [RuleError](../src/RuleError.cpp) - Rule Error.
* [RuleUpdateInfo](../src/RuleUpdateInfo.cpp) - Class to update an existing Rule.
* [RuleWarningOutput](../src/RuleWarningOutput.cpp) - Rule Warnings
* [RulesEnvelope](../src/RulesEnvelope.cpp) - Rules Envelope.
* [SnapshotResponse](../src/SnapshotResponse.cpp) -
* [SnapshotResponses](../src/SnapshotResponses.cpp) -
* [SnapshotsResponseEnvelope](../src/SnapshotsResponseEnvelope.cpp) -
* [Tag](../src/Tag.cpp) - Tag information.
* [TagArray](../src/TagArray.cpp) - Contains the arry of Tags.
* [TagsEnvelope](../src/TagsEnvelope.cpp) - Tags Envelope.
* [Token](../src/Token.cpp) -
* [TokenInfo](../src/TokenInfo.cpp) -
* [TokenInfoSuccessResponse](../src/TokenInfoSuccessResponse.cpp) -
* [TokenRequest](../src/TokenRequest.cpp) -
* [TokenResponse](../src/TokenResponse.cpp) -
* [UnregisterDeviceResponse](../src/UnregisterDeviceResponse.cpp) -
* [UnregisterDeviceResponseEnvelope](../src/UnregisterDeviceResponseEnvelope.cpp) -
* [User](../src/User.cpp) - User Information
* [UserEnvelope](../src/UserEnvelope.cpp) - User Envelope
* [WebSocketError](../src/WebSocketError.cpp) - WebSocket Error Information
