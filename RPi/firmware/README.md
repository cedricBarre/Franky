# Franky Firmware

**Description**

This folder contains the firmware for Franky the robot. The source code is written in C++ and is executed on a Raspberry-Pi.

--------------------------------------------------------------------------------------------------

**Usage**

To compile the source code, the [build-franky.sh](build-franky.sh) shell script can be executed from the *firmware* directory (execution must by done from this directory only) as follows:
```
./build-franky.sh
```
The output file will be present in the *install* directory which is created during the execution of the build script. The name of the output file will be *franky.tar.gz*. This file is a compressed *.zip* file that can be exported to the Raspberry-Pi and extracted in order to install the firmware. The file can be exported via *scp* and extracted with the following command:
```
sudo tar -xvf franky.tar.gz -C /
```  
After the compressed file is extracted, the service must be restarted for the new firmare to be executed. This is done with the following command:
```
sudo systemctl restart franky
```

**Note**: It is important to note that Docker be installed on the host system from which the code is compiled and built. See the following page for information on the installation of [Docker](https://docs.docker.com/get-docker/).

--------------------------------------------------------------------------------------------------
