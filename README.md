# Nova
Nova, a [Buran-Ortho](https://github.com/ScatteredDrifter/Buran-Ortho/tree/main) variant that has a 25mm trackball sensor integrated into a 5mm switch plate and optional 3x EVQ roller encoders. Powered by integrated RP2040.

# Sponsorship
This Nova pcb/pcba is made possible by: ![PCBWay](https://github.com/protieusz/Nova/assets/118025702/c1806de4-9571-4a6e-a0ec-50ecb846ec0c)
Thank you PCBWay for your quality pcba/pcb service. For all you pcb/pcba services, you can always rely on PCBWay for your pcb prototyping needs.

# Featured On KBD News
https://kbd.news/Buran-Ortho-2371.html

# Description
Nova, a [Buran-Ortho](https://github.com/ScatteredDrifter/Buran-Ortho/tree/main) variant that is heavily modified on the PCB side of components placement and case and switch plate mod to accomodate for the 25mm trackball hole.  Blessing for mods have been granted by the original designer of Buran, ScatterDrifter and thick switch plate by Plant. Case mod was done on Ottimo's Bofa case, https://github.com/subottimale/Buran-Bofa-case/tree/main.  The follow mods were done to the case, switch plate and pcb:

-PCB RP2040 components were place, routed from scratch and also to accomodate the PMW3360 sensor using EasyEDA.

-Added EVQ roller encoders option x3 to the middle top 3 key switches. EC11 encoder footprints have been removed.

-Switch plate was modded with a larger hole in the place of the former encoder location to accomodate for the integrated 25mm trackball holder module.

-Top case of the Bofa was modified with a larger hole in place of the former encoder placement.

- ~~QMK code was borrowed from [Ploopy Adept](https://github.com/qmk/qmk_firmware/tree/master/keyboards/ploopyco/madromys) and modified by adding the Nova's key matrix layout into the code. No changes were made to the trackball code.~~ I have decided to use aki27's [bally](https://github.com/aki27kbd/vial-qmk/tree/vial/keyboards/aki27/bally)'s code instead since the Ploopy code I ran into issues and too tired to get it working.

-Added 38 individual switch RGBs.

Full Production Pics:

![D4AFC096-B288-4E2A-9FCC-9BD741920737](https://github.com/protieusz/Nova/assets/118025702/15443f6e-ad1e-4253-9ee1-9126bc0c9746)
![827E48CC-210B-4E32-AA6E-871CCC9DF78D](https://github.com/protieusz/Nova/assets/118025702/9c63eb48-3dde-4382-92ed-27b1116da256)
![7421A98E-BB6E-4C39-A3ED-7C58B0D0783C](https://github.com/protieusz/Nova/assets/118025702/85aac6d9-e79e-4cec-a313-35ae22107dd7)
![20E94940-8326-4AEA-AF0D-43A8B87361EF](https://github.com/protieusz/Nova/assets/118025702/3c5c2977-fe9d-449c-8de7-942b94233c9e)
![IMG_2039](https://github.com/protieusz/Nova/assets/118025702/03234a4a-6868-4225-9c27-014b70fe0cc5)
![IMG_2036](https://github.com/protieusz/Nova/assets/118025702/472eb5b6-f5ef-4f25-bdb9-fc298efe179e)
![IMG_2035](https://github.com/protieusz/Nova/assets/118025702/a617276d-920c-448d-8943-a0bf2753e255)
![IMG_2034](https://github.com/protieusz/Nova/assets/118025702/fce383c5-e284-4144-9dbd-118666bf54f2)
![IMG_2033](https://github.com/protieusz/Nova/assets/118025702/808687b4-2cc0-40d4-a1d9-fc9cd07b0a70)
![IMG_2032](https://github.com/protieusz/Nova/assets/118025702/1f6e4a31-1f7c-4f39-86c9-89c7c62107af)
![IMG_2031](https://github.com/protieusz/Nova/assets/118025702/3e7adf5c-c9a6-442c-9090-f74659e60a5b)
![IMG_2030](https://github.com/protieusz/Nova/assets/118025702/db50d2a8-01c1-4ba2-9482-fbe22b13dc74)
![IMG_2029](https://github.com/protieusz/Nova/assets/118025702/1a6e225e-bd95-4f74-ad32-bd2a7ac57241)
![IMG_2028](https://github.com/protieusz/Nova/assets/118025702/97c24a53-7a61-4031-a399-ce10a3f2c1a4)
![IMG_2027](https://github.com/protieusz/Nova/assets/118025702/068f6474-da43-4d2b-965c-e9127760a470)

Render & Test Fitting Pics:

![IMG_1874](https://github.com/protieusz/Nova/assets/118025702/269dbd43-a6f4-431c-bc50-b58c464a1276)
![IMG_1875](https://github.com/protieusz/Nova/assets/118025702/d840ba80-04c9-4d51-8522-df98a514fcf2)

![Screenshot 2024-04-10 at 10 01 34 PM](https://github.com/protieusz/Nova/assets/118025702/bbb181b3-5421-4398-b397-f94b852f5420)
![Screenshot 2024-04-10 at 10 00 57 PM](https://github.com/protieusz/Nova/assets/118025702/50fdc093-8a62-47a4-a0cb-18b12e879334)
![Screenshot 2024-04-10 at 10 44 53 AM](https://github.com/protieusz/Nova/assets/118025702/7ef384a2-9472-4f99-9f03-136cd2b2cf45)
![Screenshot 2024-04-10 at 8 18 57 PM](https://github.com/protieusz/Nova/assets/118025702/a82b0cff-f751-4e21-bb5f-d770c85822a7)
![Screenshot 2024-04-10 at 10 00 38 PM](https://github.com/protieusz/Nova/assets/118025702/571db011-d829-4c5e-bc7f-8ac3f65115c8)
![Screenshot 2024-04-10 at 10 00 15 PM](https://github.com/protieusz/Nova/assets/118025702/c57df934-5434-4005-9c61-d3a79210c695)
![Screenshot 2024-04-10 at 10 00 01 PM](https://github.com/protieusz/Nova/assets/118025702/90423b37-b4fa-435d-b627-d9fb693865bf)
![Screenshot 2024-04-10 at 8 47 54 PM](https://github.com/protieusz/Nova/assets/118025702/77cbeaec-3c07-4648-9ca8-cbfd597a88f1)

PCB Renders:

![Screenshot 2024-04-16 at 9 46 38 AM](https://github.com/protieusz/Nova/assets/118025702/9d5e5115-1827-420e-88af-84417446131d)
![Screenshot 2024-04-16 at 9 46 20 AM](https://github.com/protieusz/Nova/assets/118025702/3210c499-7e13-4b93-9d12-e1a940a54742)
![Screenshot 2024-04-16 at 9 48 29 AM](https://github.com/protieusz/Nova/assets/118025702/b6557e02-adee-4c21-b635-8b92eed11630)
![Screenshot 2024-04-16 at 10 03 32 AM](https://github.com/protieusz/Nova/assets/118025702/6c0c6578-be72-4eb5-ad70-62251b2727f3)
![Screenshot 2024-04-16 at 10 03 46 AM](https://github.com/protieusz/Nova/assets/118025702/66e8e325-438a-41b0-a25e-8f1d08415eba)
![Screenshot 2024-04-12 at 8 30 23 AM](https://github.com/protieusz/Nova/assets/118025702/cf590bf3-adee-4944-a61a-2534cd781ce8)
![Screenshot 2024-04-12 at 8 51 13 AM](https://github.com/protieusz/Nova/assets/118025702/f6181810-a6e6-4c41-b0b7-2919d5b57c16)
![Screenshot 2024-04-12 at 8 51 27 AM](https://github.com/protieusz/Nova/assets/118025702/5a24fe29-4c96-4c3f-9973-37281b95ac6a)
![Screenshot 2024-04-12 at 8 51 39 AM](https://github.com/protieusz/Nova/assets/118025702/f8da4e9b-1c0e-4308-831b-ccedc9ee1994)
![Screenshot 2024-04-11 at 12 16 26 PM](https://github.com/protieusz/Nova/assets/118025702/5a832483-b8dd-4ea7-817d-ba2faa055792)
![Screenshot 2024-04-12 at 8 51 52 AM](https://github.com/protieusz/Nova/assets/118025702/d9c3fb40-e4ad-4ae8-b4a0-1251997c4817)

# Build Guide

Needed Parts To Complete The Nova:

| Parts         | Link |
| ------------- | ------------- |
| 38-41 x Switches   |   |
| 3 x EVQ Rollers Encoders (Optional)  | https://www.aliexpress.com/item/32990950196.html?spm=a2g0o.order_list.order_list_main.70.79251802LG9UyV  |
| 1 x Nova PCBA |  |
| 1 x PMW3360 Sensor | https://www.aliexpress.com/item/1005005355003386.html?spm=a2g0o.order_list.order_list_main.50.79251802LG9UyV  |
| 38-41 x Keycaps |  |
| 38 x RGB LEDs SK6812 MINI-E 12MA| https://www.aliexpress.com/item/1005003636607308.html?spm=a2g0o.order_list.order_list_main.65.79251802LG9UyV |
| Modified Bofu Top Case |  |
| Un-modifed Bofu Bottom Case |  |
| USB C Magnetic Connector (Recommended) | https://www.aliexpress.com/item/1005003156990314.html?spm=a2g0o.order_list.order_list_main.121.79251802LG9UyV |
| 10 x M2 Screws (Bottom Case) |  |
| M2 Screws (Switch Plate) | |
| 1 x 25mm POM, Perixx, Natural Gemstone, Billyard balls (Experiment yourself) | |
| Hot Inserts 3.2mm Diameter 3-4mm Length |[  ](https://www.aliexpress.com/item/1005005220632314.html?spm=a2g0o.order_list.order_list_main.327.1da21802wQGF0Y)|


Soldering the PMW3360 Sensor:

Refer to the picture below on the orientation of the sensor and be wary of PIN 1. Do not mess up or else it will be hell to de-solder. Study the picture carefully before you solder or forever be sorry.

PMW3360 sensor goes at the back of the PCB as per picture below

![IMG_2074](https://github.com/protieusz/Nova/assets/118025702/52b9fa08-c84f-446d-87bb-10fc7c3659c5)

Zoomed in on the sensor. Make sure the washed out greyish yellowish dot aka PIN 1 aligns with PIN 1 silkscreen labelled on the pcb. The number example AXX should be the orientaton of the picture.  On the right side, sideways should be the sensor model number. Make very sure of the orientation. No support will be given on how to de-solder and solder. Apply a yellow tape or painters tape on the sensor to secure it so that it is flush on the pcb and when you solder the pins, it will not move.

![IMG_2075](https://github.com/protieusz/Nova/assets/118025702/5b9e9bae-cf95-4548-af92-623fdfb6b5db)

Zoomed Front Side PCB where the sensor lens will be installed

![IMG_2076](https://github.com/protieusz/Nova/assets/118025702/828b5fe8-99b1-4af7-8f60-b5ddebf67f42)
![IMG_2077](https://github.com/protieusz/Nova/assets/118025702/fb5014bf-9640-4921-92f2-19a303daf54f)

Remember to remove the yellow tape off the sensor after you solder it

![IMG_2078](https://github.com/protieusz/Nova/assets/118025702/0b7c4cfc-31b2-45eb-9584-404f83f6322f)
![IMG_2079](https://github.com/protieusz/Nova/assets/118025702/637d322f-dc5c-4a91-ac85-ded5743e9283)
