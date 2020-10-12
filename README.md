My personal [Dactyl-ManuForm](https://github.com/abstracthat/dactyl-manuform). This repository contains all the resources used to build this keyboard.


![overview](/images/photos/overview.jpg?raw=true)

## Layout

<details>
  <summary>Layer 0 [qwerty]</summary>

  ![qwerty layer](/images/layers/layer-0-qwerty.png?raw=true)

</details>

<details>
  <summary>Layer 1 [navigation]</summary>

  ![qwerty layer](/images/layers/layer-1-nav.png?raw=true)

</details>

<details>
  <summary>Layer 2 [mouse]</summary>

  ![qwerty layer](/images/layers/layer-2-mouse.png?raw=true)

</details>

## Firmware

I used the [Docker](https://docs.qmk.fm/#/getting_started_docker) version of [QMK Toolbox](https://github.com/qmk/qmk_toolbox).  
You have to flash each of the halves of the keyboard.

```
mkdir ~/qmk_firmware/keyboards/handwired/dactyl_manuform/5x6/keymaps/oddkb/
cp ./keymap/* ~/qmk_firmware/keyboards/handwired/dactyl_manuform/5x6/keymaps/oddkb/

cd ~/qmk_firmware/

sudo ./util/docker_build.sh handwired/dactyl_manuform/5x6:oddkb:avrdude
```
## Build
- [Guide for building](https://medium.com/swlh/complete-idiot-guide-for-building-a-dactyl-manuform-keyboard-53454845b065)
- [Another guide for building](https://nickgreen.info/dactyl-manuform-build-log/)
- [Wiring scheme](https://github.com/abstracthat/dactyl-manuform#alternative-row-driven-wiring-diagram-for-promicro)

## Links
- [Mech Guide [RU]](https://rumech.guide/)
- [Keyboards and design: Tonsky [RU]](https://tonsky.livejournal.com/321097.html)
