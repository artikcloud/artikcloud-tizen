#ARTIK Cloud Tizen SDK
==========================
Install the library on Tizen 2.4 device / emulator

Use "sdb shell" to get a shell on the device / emulator
Push the rpms to the device using sdb push
Install the corresponsing RPM using "rpm -Uvh * .rpm"
 

Installing the Extension (Add-on) SDK 
---------------------

1. Install the latest Tizen IDE / studio
2. Use the Tizen package manager to install Tizen 2.4 packages 
3. Unzip the attached 2.4-add-on-artik-cloud-SDKs-1.0.0.zip
4. Change the settings in the Package Manager and Tizen in Go the Add new Extension SDK. Set Extension SDK The path to The extracted Folder
5. Install the Artik Cloud Extension SDK
 
How to use the SDK
---------------------
1. Create a new Native App project for Tizen
2. Right-click on the project in project Explorer -> Properties -> C / C + + Build -> Tizen Settings -> Framework tab 
3. Check the box which states artik-cloud
4. Now simply import files such as DevicesManager.h, UsersManager.h, MessagesManager.h and call the api endpoints.

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
