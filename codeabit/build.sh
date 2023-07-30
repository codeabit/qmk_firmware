#!/bin/bash
# Mounts the qmk_firmware directory and build the firmware

docker build -t codeabit_qmk_firmware .

cd ..
SCRIPTDIR=`pwd`
echo 'Working dir: '$SCRIPTDIR

docker run --rm -v $SCRIPTDIR:/root/qmk_firmware codeabit_qmk_firmware 

mv *.hex ./codeabit
