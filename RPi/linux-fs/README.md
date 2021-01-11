# Raspberry-Pi Filesystem

**Description**

This folder contains the essential additions to the filesystem of the Raspberry Pi used to properly run the robotics application. The linux service feature is used here to have the application run in the background. This also allows the application to start on boot and restart on failure.


-----------------------------------------------------------------------------------------------
**Usage**

To produce the compressed *.zip* file ready to be exported to the Raspberry-Pi, run the [export-fs.sh](export-fs.sh) script in the *linux-fs* directory (execution must by done from this directory only) as follows:
```
./export.sh
```
The compressed file will be contained in the *install* directory that will be created during execution of the script.

Using *scp*, you can send the compressed file to the board and extract the file as follows:
```
tar -xvf linux-fs.tar.gz -C /
```

-----------------------------------------------------------------------------------------------
