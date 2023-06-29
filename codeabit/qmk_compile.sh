#!/bin/bash
cd /root/qmk_firmware
/root/.local/bin/qmk compile -kb ferris/sweep_choc_mbuk -km codeabit
# /root/.local/bin/qmk json2c -o ./keyboards/ferris/keymaps/codeabit/keymap.c ./keyboards/ferris/keymaps/codeabit/keymap.json
