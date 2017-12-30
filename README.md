<h1 align="center">Myriad</h1>

<div align="center">
    <strong>A voxel sandbox made in <a href="https://github.com/mosra/magnum">Magnum</a>.</strong>
</div>

<div align="center">
  <img src="https://img.shields.io/badge/made%20with-c%2B%2B11-blue.svg?style=flat-square" alt="Made With C++" />
  <a href="https://github.com/mosra/magnum">
    <img src="https://img.shields.io/badge/build%20in-magnum-blue.svg?style=flat-square" alt="Built In Magnum" />
  </a>
</div>

<div align="center">
  <a>
    <img src="https://img.shields.io/appveyor/ci/teammycelium/myriad.svg?style=flat-square" alt="Appveyor Build Status" />
  </a>
  <a>
    <img src="https://img.shields.io/travis/teammycelium/myriad.svg?style=flat-square" alt="Travis Build Status" />
  </a>
</div>

<div align="center">
  <a href="https://github.com/teammycelium/myriad/releases">
    <img src="https://img.shields.io/github/downloads/teammycelium/myriad/total.svg?style=flat-square" alt="Downloads" />
  </a>
  <a>
    <img src="https://img.shields.io/github/release/teammycelium/myriad/all.svg?style=flat-square" alt="Version" />
  </a>
</div>

<div align="center">
  <a href="https://github.com/teammycelium/myriad/blob/master/LICENSE">
    <img src="https://img.shields.io/github/license/teammycelium/myriad.svg?style=flat-square" alt="License" />
  </a>
  <a href="https://discord.gg/GXw3R7v">
    <img src="https://img.shields.io/discord/374249603609919488.svg?style=flat-square" alt="Discord" />
  </a>
  <a>
    <img src="https://img.shields.io/badge/minecraft-1.x.x-brightgreen.svg?style=flat-square" alt="Minecraft Versions" />
  </a>
</div>

<div align="center">
  <a href="https://teammycelium.github.io/myriad/">
    Website
  </a>
  <span> | </span>
  <a href="https://teammycelium.github.io/myriad/docs/">
    Documentation
  </a>
  <span> | </span>
  <a href="https://discord.gg/GXw3R7v">
    Discord
  </a>
</div>

## Table Of Contents
  * [Build]()
    * [Dependencies]()
    * [Steps]()
  * [Contributors]()
  * [Todo]()

## Build
### Dependencies
**NOTE: Windows users need MSYS2 to build Myriad. Everything must be done within MSYS2.**
  * Windows (MSYS2)
    *Be sure to update MSYS2 with* ```pacman -Syu``` *(It may be need to be ran multiple time)*
    ```bash
    pacman -S mingw-w64-x86_64-toolchain mingw-w64-x86_64-cmake mingw-w64-x86_64-python3 mingw-w64-x86_64-glfw mingw-w64-x86_64-libpng
    ```
### Steps
  * Project
      ```bash
      mkdir myriad-build && cd myriad-build
      ```
  * Corrade
      ```bash
      git clone https://github.com/mosra/corrade.git
      cd corrade
      mkdir -p build && cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=/usr -G "MSYS Makefiles"
      make -j
      make install
      ```
  * Magnum
      ```bash
      cd ../..
      git clone https://github.com/mosra/magnum.git
      cd magnum
      mkdir -p build && cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=/usr -DWITH_GLFWAPPLICATION=ON -DWITH_AUDIO=ON -DWITH_PRIMITIVES=ON -DWITH_SHADERS=ON -DWITH_SHAPES=ON -DWITH_TEXT=ON -G "MSYS Makefiles"
      make -j
      make install
      ```
  * Magnum Plugins
      ```bash
      cd ../..
      git clone https://github.com/mosra/magnum-plugins.git
      cd magnum-plugins
      mkdir -p build && cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=/usr -DWITH_DRFLACAUDIOIMPORTER=ON -DWITH_FREETYPEFONT=ON -DWITH_PNGIMPORTER=ON -DWITH_STBVORBISAUDIOIMPORTER=ON -G "MSYS Makefiles"
      make -j
      make install
      ```
  * Magnum Extras
      ```bash
      cd ../..
      git clone https://github.com/mosra/magnum-extras.git
      cd magnum-extras
      mkdir -p build && cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=/usr -DWITH_UI=ON -G "MSYS Makefiles"
      make -j
      make install
      ```

## Contributors

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/Txuritan">
        <img src="https://avatars0.githubusercontent.com/u/7692150" width="80px;"/>
        <br />
        <img src="https://img.shields.io/badge/team-mycelium-red.svg" alt="TeamMycelium" />
        <br />
        Txuritan
      </a>
    </td>
    <td>
      <img src="https://img.shields.io/badge/contributor-code-blue.svg" alt="Contributor: Code" />
      <br />
      <img src="https://img.shields.io/badge/contributor-design-blue.svg" alt="Contributor: Design" />
      <br />
      <img src="https://img.shields.io/badge/contributor-documentation-blue.svg" alt="Contributor: Documentation" />
      <br />
      <img src="https://img.shields.io/badge/contributor-translation-blue.svg" alt="Contributor: Translation" />
    </td>
  </tr>
</table>

## Todo

  * [ ] API
  * [ ] Blocks
  * [ ] Commands
  * [ ] Compatibly
  * [ ] Dimensions
  * [ ] Entities
  * [ ] Generation
  * [ ] Items