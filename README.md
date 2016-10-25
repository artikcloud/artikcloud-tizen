# artikcloud-tizen
ARTIK Cloud Tizen SDK

Install the library on Tizen 2.4 device / emulator

Use "sdb shell" to get a shell on the device / emulator
Push the rpms to the device using sdb push
Install the corresponsing RPM using "rpm -Uvh * .rpm"
 

How to install the Extension (Add-on) SDK - 

Install the latest Tizen IDE / studio
Use the Tizen package manager to install Tizen 2.4 packages (you may need to set the package server path to an appropriate server with Tizen 3.0)
Unzip the attached 2.4-add-on-artik-cloud-SDKs-1.0.0.zip
Settings in the Package Manager and Tizen in Go the Add new ares Extension SDK. Set Extension SDK The path to The extracted Folder
Install the Artik Cloud Extension SDK
 

How to use the SDK - 

Create a new Native App project for Tizen
Right-click on the project in project Explorer -> Properties -> C / C + + Build -> Tizen Settings -> Framework tab -> Check the box artik-cloud
Now simply import files like DevicesManager.h, UsersManager.h, MessagesManager.h and call the api endpoints.
