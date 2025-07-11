# zmk-config

[![corne Keyboard custom keymap](https://github.com/user-attachments/assets/9178f23a-b4f1-4adc-a232-5806301dd0c2)](http://www.keyboard-layout-editor.com/#/gists/bf533ff812829bf261ab7ea44d985077)

This is my personal [ZMK firmware](https://github.com/zmkfirmware/zmk/) configuration.
It consists of a 36-keys base layout that is re-used for my cochofi (corne 36keys) sofle 58keys.

This config uses [this external module](https://github.com/dhruvinsh/zmk-tri-state) for tri-state (swapper). Not included in official zmk.

Config adapted to **my** personal needs:

- Coding
- iso-es layout.
- Same shortcuts among mac/lin/win.

## Features:

- Shift/Alt mod tap in base row, both sides.
- Added macros for both Mac and Linux/Win (change workspace, change tab).
- Layer tap in raise/lower buttons.
- Only sofle: [Gaming layers for left half](https://github.com/pouyio/keymaps-qmk/blob/master/sofle/README.md).

## First setup for local development

1. Clone in the same folder the next repos:
   - [zmk](https://github.com/zmkfirmware/zmk) firmware.
   - [zmk-tri-state](https://github.com/dhruvinsh/zmk-tri-state) external module.
   - This repo.
2. Follow [the official instructions](https://zmk.dev/docs/development/local-toolchain/setup/native), `Install globally` is the preferred option.

The final structure should be:

<pre>
~/workspace/
          ├── zmk/ 
          ├── zmk-tri-state/ 
          └── zmk-config/
</pre>

## Build Instructions

Execute the custom build script:
`./scripts/zmk_build.sh -l -v 3.5 --host-config-dir /home/zmk-config --host-zmk-dir /home/zmk -o /home/zmk-config/build  -- -p`

Change `--host-config-dir`, `--host-zmk-dir` and/or `-o` to the correct directories
