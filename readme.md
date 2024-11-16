# zmk-config

[![corne Keyboard custom keymap](https://github.com/user-attachments/assets/e2662f21-ff2b-4bcd-96d1-5420a33adeb3)](http://www.keyboard-layout-editor.com/#/gists/bf533ff812829bf261ab7ea44d985077)

This is my personal [ZMK firmware](https://github.com/zmkfirmware/zmk/) configuration.
It consists of a 36-keys base layout that is re-used for my cochofi (corne 36keys) sofle 58keys.

This config uses [urob's ZMK](https://github.com/urob/zmk) fork which includes several PRs, relevant for me the [swapper implementation](https://github.com/zmkfirmware/zmk/pull/1366) for tri-state keys. I will switch to official ZMK once swapper PR is merged. In case I need my own ZMK fork [this guide](https://gist.github.com/urob/68a1e206b2356a01b876ed02d3f542c7) is excellent

Config adapted to **my** personal needs:

- Coding
- iso-es layout.
- Same shortcuts among mac/lin/win.

## Features:

- Shift/Alt mod tap in base row, both sides.
- Added macros for both Mac and Linux/Win (change workspace, change tab).
- Layer tap in raise/lower buttons.
- Only sofle: [Gaming layers for left half](https://github.com/pouyio/keymaps-qmk/blob/master/sofle/README.md).

## Instructions

To build in local follow the [official development guide](https://zmk.dev/docs/development/setup) and download [urob's ZMK](https://github.com/urob/zmk). Execute the custom build script:
`./scripts/zmk_build.sh -l -v 3.5 --host-config-dir /home/zmk-config --host-zmk-dir /home/zmk -o /home/zmk-config/build  -- -p`

Change `--host-config-dir`, `--host-zmk-dir` and/or `-o` to the correct directories
