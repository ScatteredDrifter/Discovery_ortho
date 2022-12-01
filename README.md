# SO[H] ORTHO!

A 52 key (4x14) ortholinear keyboard, powered by an RP2040

This is a fork of [Horizon by skarrmann](https://github.com/skarrmann/horizon)

Used License [MIT](/LICENSE)

 ---
This keyboard is a grid of 1U keys with optional hotswap, breakout for LED-backlighting.


![](/images/pcb_banner.JPG)

## Status :: 
- prototypes arrived and **working**
- Case to be tested 
- untested LEDs
- untested LED-Pinout
- working encoder  

---

## Features :: 
- QMK and Vial Support
- Support for Choc-Switches **only**!
- Choc-spacing 
- Hotswap for Choc-Switches 
- built with rp2040 and additional flash storage allowing for plenty of combos, layers, led matrices etc.
- easy to order with jlcpcb --> check release for files 
- support for encoder in the middle  
- additional pinouts for further modifications 
- middle part features several layouts

## Layout :: 

This pcb features different layouts that are configured within VIAL for easy usage. See below for available Layout-Options. 

As for the case, there are 6 screw holes for mounting a panel in the middle to cover the electronics. 

![](/images/layout.png)



## Firmware :: 

the pre-compiled file for Vial and the whole Qmk-userspace for this keyboard can be found [here](/firmware/)

To enter the bootloader - which is necessary in order to flash a new firmware - you'll have to bridge the two contacts located in the middle of the front-pcb. In later revisions there might be actual buttons, for the first revision I was not able to get them to fit on there. Bridge both contacts for a short amount of time in order to boot the mcu to bootloader. It should show up as a regular usb-stick in your file explorer now and you can drag the .utf onto this usb-stick. Once done it will restart and use your newly flashed firmware!


## Images of PCB ::

![](/images/pcb_front.JPG)

![](/images/pcb_closeup.JPG)

