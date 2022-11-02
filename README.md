# Horizon Keyboard
<insert picture of pcb prototype>


SO[H]ORTHO! is a 52 key (4x14) ortholinear keyboard, powered by an RP2040

This keyboard is a grid of 1U keys with optional hotswap, breakout for LED-backlighting.

## Project structure

* [`gerbers`](gerbers): Gerber files for PCB manufacturing
* [`graphics`](graphics): Source assets for PCB silkscreen
* [`kicad`](kicad): KiCad project files (schematics and PCB designs)
* [`kicad-libraries`](kicad-libraries): KiCad components and footprints
* [`kicad-plugins`](kicad-plugins): KiCad Pcbnew Python plugins
* [`images`](images): Images for project documentation

## PCBs

Two separate PCB designs are available for MX and Choc keyswitches, with their respective footprints and key spacing (MX: 19mm x 19mm, Choc: 18mm x 17mm).

Each design consists of a main PCB, a top plate to protect the microcontroller, and a bottom plate to protect the bottom components:

![Horizon MX PCBs photo](images/horizon-mx-pcbs.jpg)

The bottom plate is a cutout of all the components exposed through the bottom of the main PCB, and screws *directly* against the main PCB. This nicely guards you and your desk surface from all the pointy through-hole bits, while retaining a low keyboard height:

![Horizon Choc + MX complete build bottom photo](images/horizon-choc-mx-bottom.jpg)

## KiCad project notes

The bottom and top plates are generated via a custom KiCad 6 Python SWIG plugin [Horizon Board Producer](kicad-plugins/horizon-board-producer-plugin.py).

For the plugin to generate these plate boards, the PCB and its footprints use the following layer convention:

* `F.Adhesive` designates top plate holes and edge cuts.
* `B.Adhesive` designates bottom plate holes and edge cuts.

When the board producer runs, these layers are used as follows:

* On the board and footprints:
    * Graphics on the plate's designated layer will be moved to `Edge.Cuts` when producing that plate.
    * As with all edge cuts, please make sure your graphics are non-overlapping closed shapes.
* On footprints only:
    * Pads of type "SMD Aperture" and shape "Circular/Oval" on the plate's designated layer will be converted to proper NPTH pads.
    * Note only circular/oval shapes are supported for these pads, because they are the only available hole/drill shapes. If you need a fancy plate cutout shape on your footprint, then draw graphics lines on the designated layer.
    * **IMPORTANT**: When adding pads solely for plate cutout purposes, set the technical layer to just the designated plate cutout layers. Leave all other technical layers unchecked.

![Horizon KiCad plate edge cuts](images/horizon-kicad-plate-cuts.png)
![Horizon KiCad footprint plate holes](images/horizon-kicad-footprint-plate-holes.png)

Additionally, the board producer plugin will preserve any in-bounds "H" footprint pads (mounting holes), "LOGO" footprint graphics (custom silkscreen art), and board silkscreen on the plates. Other items which are not needed for plates (e.g., copper tracks and zones) are removed from the plates.

The board producer plugin also generates all the Gerber files for production.

Please note the board producer plugin expects the following folder structure:

* The KiCad PCB file is two folders deep from the project root, e.g., `kicad/[board-version]/[board-name].kicad_pcb`
* When the plugin executes, a folder called `temp` is created in the project root to store any temporary files created.
    * Each time the board producer runs, any existing files in this temporary folder are deleted.

