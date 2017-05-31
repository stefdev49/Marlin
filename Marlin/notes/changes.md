## code changes

FILAMENTCHANGEENABLE => FILAMENT_CHANGE_FEATURE
thermistortables => 2 new files instead of extending thermistortables.

## hardware infos
```code
#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_MKS_BASE
#endif
```
Motherboard is an MKS one.


## to try

//#define DEBUG_LEVELING_FEATURE

//#define PROBE_DOUBLE_TOUCH
