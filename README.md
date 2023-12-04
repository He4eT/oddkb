My personal [Dactyl-ManuForm](https://github.com/abstracthat/dactyl-manuform). This repository contains all the resources used to build this keyboard.


![overview](/images/photos/overview.jpg?raw=true)

## Layout

<details>
  <summary>Layer 0 [qwerty]</summary>

  ![qwerty layer](/images/layers/initial/layer-0-qwerty.png?raw=true)

</details>

<details>
  <summary>Layer 1 [navigation]</summary>

  ![qwerty layer](/images/layers/initial/layer-1-nav.png?raw=true)

</details>

<details>
  <summary>Layer 2 [mouse]</summary>

  ![qwerty layer](/images/layers/initial/layer-2-mouse.png?raw=true)

</details>

## Flashing

I used the [Docker](https://docs.qmk.fm/#/getting_started_docker) version of [QMK](https://github.com/qmk/qmk_firmware).
You have to flash each of the halves of the keyboard.

```
git clone --recurse-submodules git@github.com:He4eT/oddkb.git
cd oddkb
make flash
```

## Build
- [Guide for building](https://medium.com/swlh/complete-idiot-guide-for-building-a-dactyl-manuform-keyboard-53454845b065)
- [Another guide for building](https://nickgreen.info/dactyl-manuform-build-log/)
- [Wiring scheme](https://github.com/abstracthat/dactyl-manuform#alternative-row-driven-wiring-diagram-for-promicro)

## Links
- [Mech Guide [RU]](https://docs.killswit.ch/)
- [Keyboards and design: Tonsky [RU]](https://tonsky.livejournal.com/321097.html)
