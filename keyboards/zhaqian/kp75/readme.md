# kp75 by kpaxart

A 75% keyboard with rgb. work with openrgb. singlergb.

83 key, and a encode. split space, iso enter.

Note: The source code for this keyboard has only been tested in this repository[[zhaqian](https://github.com/zhaqian12/qmk_firmware/tree/zhaqian)]!

* Keyboard Maintainer: [zhaqian](https://github.com/zhaqian12)
* Hardware Supported: kp75
* Hardware Availability: [zq-kb](https://github.com/zhaqian12/ZQ-Keyboard)

Make example for this keyboard (after setting up your build environment):

    make zhaqian/kp75/f103:default
    make zhaqian/kp75/f103:via
    make zhaqian/kp75/air32f103:default
    make zhaqian/kp75/air32f103:via

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
 
## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB twice - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
