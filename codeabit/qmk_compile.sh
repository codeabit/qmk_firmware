#!/bin/bash
cd /root/qmk_firmware
/root/.local/bin/qmk compile -kb ferris/sweep_choc_mbuk -km codeabit
/root/.local/bin/qmk c2json -kb ferris/sweep_choc_mbuk -km codeabit -o ./codeabit/codeabit.json ./keyboards/ferris/keymaps/codeabit/keymap.c
