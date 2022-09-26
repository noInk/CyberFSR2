# DLSS2FSR (CyberFSR)
Customized general purpose FSR2.1.1 drop-in for DLSS2.
This build is currently limted to Nvidia video cards where the game/launcher does not implement any NVIDIA (gameready) custom check to lock the DLSS2 feature level. 
Built for 472.12 standard driver compatibility & the 900/1000 series.

## List of Know Supported Games
* The Ascent
* Horizon Zero Dawn
* Death Stranding
* Marvel's Spider-Man Remastered
* Marvel's Guardians of the Galaxy
* No Man's Sky
* Forged In Shadow Torch

## Installation
### Windows 
* Download the latest relase from [Release Page](https://github.com/NoInk/CyberFSR2/releases)
* Extract the contents of the archive next to the `nvngx_dlss.dll` file in your games folder
* Run/double-click `EnableSignatureOverride.reg` and confirm the merge
* That's it. Now DLSS option should appear in settigs

### Linux
* Download the latest relase from [Release Page](https://github.com/NoInk/CyberFSR2/releases)
* Extract the contents of the archive next to the `nvngx_dlss.dll` file in your games folder
* Run the following command with the appropriate file paths to install the tweaks manually:
```
WINEPREFIX=/path/where/the/steam/library/is/steamapps/compatdata/1091500/pfx /bin/wine64 regedit ../../common/Cyberpunk\ 2077/bin/x64/FidelityFx\ Super\ Resolution\ 2.0-3001-0-3-1656426926/EnableSignatureOverride.reg
```
* That's it. Now DLSS option should appear in settigs

## Uninstallation
* Just run `DisableSignatureOverride.reg`
* Delete nvngx.dll, nvngx.ini, ffx_fsr2_api_dx12_x64.dll, ffx_fsr2_api_vk_x64.dll, ffx_fsr2_api_x64.dll from the game folder
* Linux users should refer to prior command