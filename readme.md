# Keychron K1 Pro (No battery/bt mod)

![Keychron K1 Pro](https://github.com/Keychron/ProductImage/blob/main/K_Pro/k1_pro.jpg?raw=true)

Sources for hardware modified K1 Pro

Hardware mods:
* Battery removed, including charging IC
* Bluetooth board removed

Behaviour mods:
* Win/Mac switch now toggles RGB
* RGB led brightness increased
* Mac support removed
* Only supports the ANSI variant
* Uses mostly standard TKL layout (eg: Keychron shortcuts like speech/backlight won't work)
* Startup delay removed

A customizable 80% TKL keyboard.

* Keyboard Maintainer: [Keychron](https://github.com/keychron)
* Hardware Supported: Keychron K1 Pro
* Hardware Availability: [Keychron K1 Pro QMK/VIA Wireless Custom Mechanical Keyboard](https://www.keychron.com/products/keychron-k1-pro-qmk-via-wireless-custom-mechanical-keyboard)

Make example for this keyboard (after setting up your build environment):

    make keychron/k1_pro/ansi/rgb:default

Flashing example for this keyboard:

    make keychron/k1_pro/ansi/rgb:default:flash

**Reset Key**: Connect the USB cable, toggle mode switch to "Off", hold down the *Esc* key or reset button underneath space bar, then toggle then switch to "Cable".

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
