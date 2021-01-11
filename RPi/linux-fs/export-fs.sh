# #!/bin/bash

######
# Main
######

if [ ! -d install ]; then
    mkdir install
fi
cd filesystem
tar -cvzf ../install/linux-fs.tar.gz .
