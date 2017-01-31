#ARTIK Cloud Tizen SDK
==========================
This SDK Extension helps you connect your Tizen 2.4 mobile native applications to ARTIK Cloud. It exposes a number of methods to easily execute REST API calls to ARTIK Cloud.

Requirements
---------------------
This SDK requires [Tizen IDE/Tizen Studio](https://developer.tizen.org/development/tizen-studio/download) to be installed. 

Installing the Extension (Add-on) SDK 
---------------------

1.	Use the Tizen IDE Package Manager (Update Manager) to install the “Native app. Development (IDE)” package for 2.4
2.	Under artikcloud-tizen/2.4-tizen-artik-cloud-SDKs/binary, download and unzip 2.4-add-on-artik-cloud-SDKs.zip
3.	Go to Package Manager -> Configuration -> Extra Repository -> Add -> Set Repository Path to “pkg_list_***” file from extracted folder and click ok. In the “name” field, give it any name and click ok.
4.	In the main window of Package Manager, click on the Extension SDK tab (Extras), and install “2.4 artik-cloud add-on sdk”.
 
How to use the SDK
---------------------
1.	Create a new Native App project for Tizen
2.	Right-click on the project in project Explorer -> Properties -> C/C++ Build -> click on Tizen Settings -> Framework tab -> Check the box “artik-cloud”
3.	Right-click on the project in project Explorer -> Properties -> C/C++ Build -> Settings -> Tool Settings tab -> Under C++ Linker click Libraries -> Click the “+” button to add another library -> In the popup type “artik-cloud” -> click ok -> click ok
4.	Now simply import files such as DevicesManager.h, UsersManager.h, MessagesManager.h and call the Artik api endpoints.

More about ARTIK Cloud
---------------------

If you are not familiar with ARTIK Cloud, we have extensive documentation at https://developer.artik.cloud/documentation

The full ARTIK Cloud API specification can be found at https://developer.artik.cloud/documentation/api-reference/

Check out advanced sample applications at https://developer.artik.cloud/documentation/samples/

To create and manage your services and devices on ARTIK Cloud, create an account at https://developer.artik.cloud

Also see the ARTIK Cloud blog for tutorials, updates, and more: http://artik.io/blog/cloud

Licence and Copyright
---------------------

Licensed under the Apache License. 

Copyright (c) 2016 Samsung Electronics Co., Ltd.
