FROM debian:buster

# Install ARM toolchain and building requirements
RUN apt-get update && \
    apt-get install -y \
        build-essential \
        binutils-arm-linux-gnueabi \
        gcc-arm-linux-gnueabihf \
        g++-arm-linux-gnueabihf \
        cmake

# Compile from source using CMake
CMD [ -d build ] || mkdir build && \
    [ -d install ] || mkdir install && \
    cd build && \
    CC=/usr/bin/arm-linux-gnueabihf-gcc \
    CXX=/usr/bin/arm-linux-gnueabihf-g++ cmake ../ && \
    make && \
    mv franky ../install && \
    cd ../install && \
    mkdir -p opt/scripts/franky && \
    mv franky opt/scripts/franky && \
    tar -cvf franky.tar.gz . && \
    rm opt -r