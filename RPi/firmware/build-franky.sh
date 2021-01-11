#!/bin/bash

#Author: Cedric Barre

build() {
    docker run --rm -v $PWD:/mnt/franky -w /mnt/franky cedyboiii/fr4nky:rpi-cross-compiler
}

#####
# Main
#####

echo -e "\n     Building the firmware for Franky...\n"
build