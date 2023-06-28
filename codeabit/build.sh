#!/bin/bash
# Mounts the qmk_firmware directory and build the firmware

docker build -t codeabit_qmk_firmware .

docker run --rm -v /Users/bryan/code/qmk_firmware:/root/qmk_firmware codeabit_qmk_firmware 