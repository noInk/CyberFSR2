# DLSS2FSR (CyberFSR)
General purpose FSR2 drop-in for DLSS2[^1].
[^1]:This build is currently limited to Nvidia video cards. 
* Built for 472.12 standard driver compatibility & the 900/1000 series.


## Installation
### Windows 
* Download the latest release from [Release Page](https://github.com/NoInk/CyberFSR2/releases)
* Extract the contents of the archive next to the `nvngx_dlss.dll` file in your games folder
* Run/double-click EnableSignatureOverride.reg and confirm the merge before using the library
* Play with FSR2 while in game
* Run/double-click `DisableSignatureOverride.reg` and confirm the merge while DLSS2FSR is not in use

### Linux
* Download the latest release from [Release Page](https://github.com/NoInk/CyberFSR2/releases)
* Extract the contents of the archive next to the `nvngx_dlss.dll` file in your games folder
* Run the following command with the appropriate file paths to install the tweaks manually before using the library:
```
WINEPREFIX=/path/where/the/steam/library/is/steamapps/compatdata/1091500/pfx /bin/wine64 regedit ../../common/Cyberpunk\ 2077/bin/x64/FidelityFx\ Super\ Resolution\ 2.0-3001-0-3-1656426926/EnableSignatureOverride.reg
```
* Play with FSR2 while in game
* Linux users should refer to prior command to register the `DisableSignatureOverride.reg` while DLSS2FSR is not in use

## Uninstallation
* Run/double-click `DisableSignatureOverride.reg`
* Delete nvngx.dll, nvngx.ini, ffx_fsr2_api_dx12_x64.dll, ffx_fsr2_api_vk_x64.dll, ffx_fsr2_api_x64.dll from the game folder
* Linux users should refer to prior command
