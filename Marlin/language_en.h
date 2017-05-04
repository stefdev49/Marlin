/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * English
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_EN_H
#define LANGUAGE_EN_H

#ifndef WELCOME_MSG
  #define WELCOME_MSG                         MACHINE_NAME _UxGT(" ready.")
#endif
#ifndef MSG_BACK
  #define MSG_BACK                            _UxGT("Back")
#endif
#ifndef MSG_SD_INSERTED
  #define MSG_SD_INSERTED                     _UxGT("Card inserted")
#endif
#ifndef MSG_SD_REMOVED
  #define MSG_SD_REMOVED                      _UxGT("Card removed")
#endif
#ifndef MSG_LCD_ENDSTOPS
  #define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters
#endif
#ifndef MSG_MAIN
  #define MSG_MAIN                            _UxGT("Main")
#endif
#ifndef MSG_AUTOSTART
  #define MSG_AUTOSTART                       _UxGT("Autostart")
#endif
#ifndef MSG_DISABLE_STEPPERS
  #define MSG_DISABLE_STEPPERS                _UxGT("Disable steppers")
#endif
#ifndef MSG_DEBUG_MENU
  #define MSG_DEBUG_MENU                      _UxGT("Debug Menu")
#endif
#ifndef MSG_PROGRESS_BAR_TEST
  #define MSG_PROGRESS_BAR_TEST               _UxGT("Progress Bar Test")
#endif
#ifndef MSG_AUTO_HOME
  #define MSG_AUTO_HOME                       _UxGT("Auto home")
#endif
#ifndef MSG_AUTO_HOME_X
  #define MSG_AUTO_HOME_X                     _UxGT("Home X")
#endif
#ifndef MSG_AUTO_HOME_Y
  #define MSG_AUTO_HOME_Y                     _UxGT("Home Y")
#endif
#ifndef MSG_AUTO_HOME_Z
  #define MSG_AUTO_HOME_Z                     _UxGT("Home Z")
#endif
#ifndef MSG_LEVEL_BED_HOMING
  #define MSG_LEVEL_BED_HOMING                _UxGT("Homing XYZ")
#endif
#ifndef MSG_LEVEL_BED_WAITING
  #define MSG_LEVEL_BED_WAITING               _UxGT("Click to Begin")
#endif
#ifndef MSG_LEVEL_BED_NEXT_POINT
  #define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Next Point")
#endif
#ifndef MSG_LEVEL_BED_DONE
  #define MSG_LEVEL_BED_DONE                  _UxGT("Leveling Done!")
#endif
#ifndef MSG_LEVEL_BED_CANCEL
  #define MSG_LEVEL_BED_CANCEL                _UxGT("Cancel")
#endif
#ifndef MSG_SET_HOME_OFFSETS
  #define MSG_SET_HOME_OFFSETS                _UxGT("Set home offsets")
#endif
#ifndef MSG_HOME_OFFSETS_APPLIED
  #define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offsets applied")
#endif
#ifndef MSG_SET_ORIGIN
  #define MSG_SET_ORIGIN                      _UxGT("Set origin")
#endif
#ifndef MSG_PREHEAT_1
  #define MSG_PREHEAT_1                       _UxGT("Preheat PLA")
#endif
#ifndef MSG_PREHEAT_1_N
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#endif
#ifndef MSG_PREHEAT_1_ALL
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" All")
#endif
#ifndef MSG_PREHEAT_1_END
  #define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" End")
#endif
#ifndef MSG_PREHEAT_1_BEDONLY
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Bed")
#endif
#ifndef MSG_PREHEAT_1_SETTINGS
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" conf")
#endif
#ifndef MSG_PREHEAT_2
  #define MSG_PREHEAT_2                       _UxGT("Preheat ABS")
#endif
#ifndef MSG_PREHEAT_2_N
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#endif
#ifndef MSG_PREHEAT_2_ALL
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" All")
#endif
#ifndef MSG_PREHEAT_2_END
  #define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" End")
#endif
#ifndef MSG_PREHEAT_2_BEDONLY
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Bed")
#endif
#ifndef MSG_PREHEAT_2_SETTINGS
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" conf")
#endif
#ifndef MSG_COOLDOWN
  #define MSG_COOLDOWN                        _UxGT("Cooldown")
#endif
#ifndef MSG_SWITCH_PS_ON
  #define MSG_SWITCH_PS_ON                    _UxGT("Switch power on")
#endif
#ifndef MSG_SWITCH_PS_OFF
  #define MSG_SWITCH_PS_OFF                   _UxGT("Switch power off")
#endif
#ifndef MSG_EXTRUDE
  #define MSG_EXTRUDE                         _UxGT("Extrude")
#endif
#ifndef MSG_RETRACT
  #define MSG_RETRACT                         _UxGT("Retract")
#endif
#ifndef MSG_MOVE_AXIS
  #define MSG_MOVE_AXIS                       _UxGT("Move axis")
#endif
#ifndef MSG_LEVEL_BED
  #define MSG_LEVEL_BED                       _UxGT("Level bed")
#endif

#if ENABLED(AUTO_BED_LEVELING_UBL)
  #ifndef MSG_UBL_UNHOMED
    #define MSG_UBL_UNHOMED                   _UxGT("Home XYZ first")
  #endif
  #ifndef MSG_UBL_TOOLS
    #define MSG_UBL_TOOLS                     _UxGT("UBL Tools")
  #endif
  #ifndef MSG_UBL_LEVEL_BED
    #define MSG_UBL_LEVEL_BED                 _UxGT("Unified Bed Leveling")
  #endif
  #ifndef MSG_UBL_ACTIVATE_MESH
    #define MSG_UBL_ACTIVATE_MESH             _UxGT("Activate UBL")
  #endif
  #ifndef MSG_UBL_DEACTIVATE_MESH
    #define MSG_UBL_DEACTIVATE_MESH           _UxGT("Deactivate UBL")
  #endif
  #ifndef MSG_UBL_CUSTOM_BED_TEMP
    #define MSG_UBL_CUSTOM_BED_TEMP           _UxGT("Bed Temp")
  #endif
  #ifndef MSG_UBL_SET_BED_TEMP
    #define MSG_UBL_SET_BED_TEMP              _UxGT("Bed Temp")
  #endif
  #ifndef MSG_UBL_CUSTOM_HOTEND_TEMP
    #define MSG_UBL_CUSTOM_HOTEND_TEMP        _UxGT("Hotend Temp")
  #endif
  #ifndef MSG_UBL_SET_HOTEND_TEMP
    #define MSG_UBL_SET_HOTEND_TEMP           _UxGT("Hotend Temp")
  #endif
  #ifndef MSG_UBL_VALIDATE_CUSTOM_MESH
    #define MSG_UBL_VALIDATE_CUSTOM_MESH      _UxGT("Validate Custom Mesh")
  #endif
  #ifndef MSG_UBL_EDIT_CUSTOM_MESH
    #define MSG_UBL_EDIT_CUSTOM_MESH          _UxGT("Edit Custom Mesh")
  #endif
  #ifndef MSG_UBL_BUILD_CUSTOM_MESH
    #define MSG_UBL_BUILD_CUSTOM_MESH         _UxGT("Build Custom Mesh")
  #endif
  #ifndef MSG_UBL_BUILD_MESH_MENU
    #define MSG_UBL_BUILD_MESH_MENU           _UxGT("Build Mesh")
  #endif
  #ifndef MSG_UBL_BUILD_PLA_MESH
    #define MSG_UBL_BUILD_PLA_MESH            _UxGT("Build PLA Mesh")
  #endif
  #ifndef MSG_UBL_BUILD_ABS_MESH
    #define MSG_UBL_BUILD_ABS_MESH            _UxGT("Build ABS Mesh")
  #endif
  #ifndef MSG_UBL_BUILD_COLD_MESH
    #define MSG_UBL_BUILD_COLD_MESH           _UxGT("Build Cold Mesh")
  #endif
  #ifndef MSG_UBL_MESH_HEIGHT_ADJUST
    #define MSG_UBL_MESH_HEIGHT_ADJUST        _UxGT("Adjust Mesh Height")
  #endif
  #ifndef MSG_UBL_MESH_HEIGHT_AMOUNT
    #define MSG_UBL_MESH_HEIGHT_AMOUNT        _UxGT("Height Amount")
  #endif
  #ifndef MSG_UBL_VALIDATE_MESH_MENU
    #define MSG_UBL_VALIDATE_MESH_MENU        _UxGT("Validate Mesh")
  #endif
  #ifndef MSG_UBL_VALIDATE_PLA_MESH
    #define MSG_UBL_VALIDATE_PLA_MESH         _UxGT("PLA Mesh Validation")
  #endif
  #ifndef MSG_UBL_VALIDATE_ABS_MESH
    #define MSG_UBL_VALIDATE_ABS_MESH         _UxGT("ABS Mesh Validation")
  #endif
  #ifndef MSG_UBL_CONTINUE_MESH
    #define MSG_UBL_CONTINUE_MESH             _UxGT("Continue Bed Mesh")
  #endif
  #ifndef MSG_UBL_MESH_LEVELING
    #define MSG_UBL_MESH_LEVELING             _UxGT("Mesh Leveling")
  #endif
  #ifndef MSG_UBL_3POINT_MESH_LEVELING
    #define MSG_UBL_3POINT_MESH_LEVELING      _UxGT("3-Point Leveling")
  #endif
  #ifndef MSG_UBL_GRID_MESH_LEVELING
    #define MSG_UBL_GRID_MESH_LEVELING        _UxGT("Grid Mesh Leveling")
  #endif
  #ifndef MSG_UBL_MESH_LEVEL
    #define MSG_UBL_MESH_LEVEL                _UxGT("Level Mesh")
  #endif
  #ifndef MSG_UBL_SIDE_POINTS
    #define MSG_UBL_SIDE_POINTS               _UxGT("Side Points")
  #endif
  #ifndef MSG_UBL_MAP_TYPE
    #define MSG_UBL_MAP_TYPE                  _UxGT("Map Type")
  #endif
  #ifndef MSG_UBL_OUTPUT_MAP
    #define MSG_UBL_OUTPUT_MAP                _UxGT("Output Mesh Map")
  #endif
  #ifndef MSG_UBL_OUTPUT_MAP_HOST
    #define MSG_UBL_OUTPUT_MAP_HOST           _UxGT("Output for Host")
  #endif
  #ifndef MSG_UBL_OUTPUT_MAP_CSV
    #define MSG_UBL_OUTPUT_MAP_CSV          _UxGT("Output for CSV")
  #endif
  #ifndef MSG_UBL_INFO_UBL
    #define MSG_UBL_INFO_UBL                  _UxGT("Output UBL Info")
  #endif
  #ifndef MSG_UBL_EDIT_MESH_MENU
    #define MSG_UBL_EDIT_MESH_MENU            _UxGT("Edit Mesh")
  #endif
  #ifndef MSG_UBL_FILLIN_MENU
    #define MSG_UBL_FILLIN_MENU               _UxGT("Fill-in NANs")
  #endif
  #ifndef MSG_UBL_FILLIN_AMOUNT
    #define MSG_UBL_FILLIN_AMOUNT             _UxGT("Fill-in Amount")
  #endif
  #ifndef MSG_UBL_SMART_FILLIN
    #define MSG_UBL_SMART_FILLIN              _UxGT("Smart Fill-in")
  #endif
  #ifndef MSG_UBL_FILLIN_MESH
    #define MSG_UBL_FILLIN_MESH               _UxGT("Fill-in NANs")
  #endif
  #ifndef MSG_UBL_PLA_EDIT_MESH
    #define MSG_UBL_PLA_EDIT_MESH             _UxGT("Edit PLA Bed Mesh")
  #endif
  #ifndef MSG_UBL_ABS_EDIT_MESH
    #define MSG_UBL_ABS_EDIT_MESH             _UxGT("Edit ABS Bed Mesh")
  #endif
  #ifndef MSG_UBL_STORAGE_MESH_MENU
    #define MSG_UBL_STORAGE_MESH_MENU         _UxGT("Mesh Storage")
  #endif
  #ifndef MSG_UBL_STORAGE_SLOT
    #define MSG_UBL_STORAGE_SLOT              _UxGT("Memory Slot")
  #endif
  #ifndef MSG_UBL_LOAD_MESH
    #define MSG_UBL_LOAD_MESH                 _UxGT("Load Bed Mesh")
  #endif
  #ifndef MSG_UBL_SAVE_MESH
    #define MSG_UBL_SAVE_MESH                 _UxGT("Save Bed Mesh")
  #endif
#endif  // AUTO_BED_LEVELING_UBL
#if HAS_COLOR_LEDS
  #ifndef MSG_LCD_COLOR_NUMBER
    #define MSG_LCD_COLOR_NUMBER              _UxGT("Color By Number")
  #endif
  #ifndef MSG_LCD_COLOR_RESET
    #define MSG_LCD_COLOR_RESET               _UxGT("Reset Colors")
  #endif
  #ifndef MSG_LCD_COLOR
    #define MSG_LCD_COLOR                     _UxGT("Color")
  #endif
  #ifndef MSG_LCD_RED
    #define MSG_LCD_RED                       _UxGT("Red")
  #endif
  #ifndef MSG_LCD_GREEN
    #define MSG_LCD_GREEN                     _UxGT("Green")
  #endif
  #ifndef MSG_LCD_BLUE
    #define MSG_LCD_BLUE                      _UxGT("Blue")
  #endif
  #ifndef MSG_LCD_WHITE
    #define MSG_LCD_WHITE                     _UxGT("White")
  #endif
  #ifndef MSG_LCD_AQUA
    #define MSG_LCD_AQUA                      _UxGT("Aqua")
  #endif
  #ifndef MSG_LCD_YELLOW
    #define MSG_LCD_YELLOW                    _UxGT("Yellow")
  #endif
  #ifndef MSG_LCD_PURPLE
    #define MSG_LCD_PURPLE                    _UxGT("Purple")
  #endif
  #ifndef MSG_LCD_AMBER
    #define MSG_LCD_AMBER                     _UxGT("Amber")
  #endif
  #ifndef MSG_LCD_BLACKLIGHT
    #define MSG_LCD_BLACKLIGHT                _UxGT("Blacklight")
  #endif
  #ifndef MSG_LCD_WATERMELON
    #define MSG_LCD_WATERMELON                _UxGT("Watermelon")
  #endif
#endif // HAS_COLOR_LEDS
#ifndef MSG_MOVING
  #define MSG_MOVING                          _UxGT("Moving...")
#endif
#ifndef MSG_FREE_XY
  #define MSG_FREE_XY                         _UxGT("Free XY")
#endif
#ifndef MSG_MOVE_X
  #define MSG_MOVE_X                          _UxGT("Move X")
#endif
#ifndef MSG_MOVE_Y
  #define MSG_MOVE_Y                          _UxGT("Move Y")
#endif
#ifndef MSG_MOVE_Z
  #define MSG_MOVE_Z                          _UxGT("Move Z")
#endif
#ifndef MSG_MOVE_E
  #define MSG_MOVE_E                          _UxGT("Extruder")
#endif
#ifndef MSG_MOVE_01MM
  #define MSG_MOVE_01MM                       _UxGT("Move 0.1mm")
#endif
#ifndef MSG_MOVE_1MM
  #define MSG_MOVE_1MM                        _UxGT("Move 1mm")
#endif
#ifndef MSG_MOVE_10MM
  #define MSG_MOVE_10MM                       _UxGT("Move 10mm")
#endif
#ifndef MSG_SPEED
  #define MSG_SPEED                           _UxGT("Speed")
#endif
#ifndef MSG_BED_Z
  #define MSG_BED_Z                           _UxGT("Bed Z")
#endif
#ifndef MSG_NOZZLE
  #define MSG_NOZZLE                          _UxGT("Nozzle")
#endif
#ifndef MSG_BED
  #define MSG_BED                             _UxGT("Bed")
#endif
#ifndef MSG_FAN_SPEED
  #define MSG_FAN_SPEED                       _UxGT("Fan speed")
#endif
#ifndef MSG_FLOW
  #define MSG_FLOW                            _UxGT("Flow")
#endif
#ifndef MSG_CONTROL
  #define MSG_CONTROL                         _UxGT("Control")
#endif
#ifndef MSG_MIN
  #define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#endif
#ifndef MSG_MAX
  #define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#endif
#ifndef MSG_FACTOR
  #define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#endif
#ifndef MSG_AUTOTEMP
  #define MSG_AUTOTEMP                        _UxGT("Autotemp")
#endif
#ifndef MSG_ON
  #define MSG_ON                              _UxGT("On ")
#endif
#ifndef MSG_OFF
  #define MSG_OFF                             _UxGT("Off")
#endif
#ifndef MSG_PID_P
  #define MSG_PID_P                           _UxGT("PID-P")
#endif
#ifndef MSG_PID_I
  #define MSG_PID_I                           _UxGT("PID-I")
#endif
#ifndef MSG_PID_D
  #define MSG_PID_D                           _UxGT("PID-D")
#endif
#ifndef MSG_PID_C
  #define MSG_PID_C                           _UxGT("PID-C")
#endif
#ifndef MSG_SELECT
  #define MSG_SELECT                          _UxGT("Select")
#endif
#ifndef MSG_ACC
  #define MSG_ACC                             _UxGT("Accel")
#endif
#ifndef MSG_VX_JERK
  #define MSG_VX_JERK                         _UxGT("Vx-jerk")
#endif
#ifndef MSG_VY_JERK
  #define MSG_VY_JERK                         _UxGT("Vy-jerk")
#endif
#ifndef MSG_VZ_JERK
  #define MSG_VZ_JERK                         _UxGT("Vz-jerk")
#endif
#ifndef MSG_VE_JERK
  #define MSG_VE_JERK                         _UxGT("Ve-jerk")
#endif
#ifndef MSG_VMAX
  #define MSG_VMAX                            _UxGT("Vmax ")
#endif
#ifndef MSG_VMIN
  #define MSG_VMIN                            _UxGT("Vmin")
#endif
#ifndef MSG_VTRAV_MIN
  #define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#endif
#ifndef MSG_AMAX
  #define MSG_AMAX                            _UxGT("Amax ")
#endif
#ifndef MSG_A_RETRACT
  #define MSG_A_RETRACT                       _UxGT("A-retract")
#endif
#ifndef MSG_A_TRAVEL
  #define MSG_A_TRAVEL                        _UxGT("A-travel")
#endif
#ifndef MSG_XSTEPS
  #define MSG_XSTEPS                          _UxGT("Xsteps/mm")
#endif
#ifndef MSG_YSTEPS
  #define MSG_YSTEPS                          _UxGT("Ysteps/mm")
#endif
#ifndef MSG_ZSTEPS
  #define MSG_ZSTEPS                          _UxGT("Zsteps/mm")
#endif
#ifndef MSG_ESTEPS
  #define MSG_ESTEPS                          _UxGT("Esteps/mm")
#endif
#ifndef MSG_E1STEPS
  #define MSG_E1STEPS                         _UxGT("E1steps/mm")
#endif
#ifndef MSG_E2STEPS
  #define MSG_E2STEPS                         _UxGT("E2steps/mm")
#endif
#ifndef MSG_E3STEPS
  #define MSG_E3STEPS                         _UxGT("E3steps/mm")
#endif
#ifndef MSG_E4STEPS
  #define MSG_E4STEPS                         _UxGT("E4steps/mm")
#endif
#ifndef MSG_E5STEPS
  #define MSG_E5STEPS                         _UxGT("E5steps/mm")
#endif
#ifndef MSG_TEMPERATURE
  #define MSG_TEMPERATURE                     _UxGT("Temperature")
#endif
#ifndef MSG_MOTION
  #define MSG_MOTION                          _UxGT("Motion")
#endif
#ifndef MSG_FILAMENT
  #define MSG_FILAMENT                        _UxGT("Filament")
#endif
#ifndef MSG_VOLUMETRIC_ENABLED
  #define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#endif
#ifndef MSG_FILAMENT_DIAM
  #define MSG_FILAMENT_DIAM                   _UxGT("Fil. Dia.")
#endif
#ifndef MSG_ADVANCE_K
  #define MSG_ADVANCE_K                       _UxGT("Advance K")
#endif
#ifndef MSG_CONTRAST
  #define MSG_CONTRAST                        _UxGT("LCD contrast")
#endif
#ifndef MSG_STORE_EEPROM
  #define MSG_STORE_EEPROM                    _UxGT("Store memory")
#endif
#ifndef MSG_LOAD_EEPROM
  #define MSG_LOAD_EEPROM                     _UxGT("Load memory")
#endif
#ifndef MSG_RESTORE_FAILSAFE
  #define MSG_RESTORE_FAILSAFE                _UxGT("Restore failsafe")
#endif
#ifndef MSG_INIT_EEPROM
  #define MSG_INIT_EEPROM                     _UxGT("Initalize Memory")
#endif
#ifndef MSG_REFRESH
  #define MSG_REFRESH                         _UxGT("Refresh")
#endif
#ifndef MSG_WATCH
  #define MSG_WATCH                           _UxGT("Info screen")
#endif
#ifndef MSG_PREPARE
  #define MSG_PREPARE                         _UxGT("Prepare")
#endif
#ifndef MSG_TUNE
  #define MSG_TUNE                            _UxGT("Tune")
#endif
#ifndef MSG_PAUSE_PRINT
  #define MSG_PAUSE_PRINT                     _UxGT("Pause print")
#endif
#ifndef MSG_RESUME_PRINT
  #define MSG_RESUME_PRINT                    _UxGT("Resume print")
#endif
#ifndef MSG_STOP_PRINT
  #define MSG_STOP_PRINT                      _UxGT("Stop print")
#endif
#ifndef MSG_CARD_MENU
  #define MSG_CARD_MENU                       _UxGT("Print from SD")
#endif
#ifndef MSG_NO_CARD
  #define MSG_NO_CARD                         _UxGT("No SD card")
#endif
#ifndef MSG_DWELL
  #define MSG_DWELL                           _UxGT("Sleep...")
#endif
#ifndef MSG_USERWAIT
  #define MSG_USERWAIT                        _UxGT("Wait for user...")
#endif
#ifndef MSG_RESUMING
  #define MSG_RESUMING                        _UxGT("Resuming print")
#endif
#ifndef MSG_PRINT_ABORTED
  #define MSG_PRINT_ABORTED                   _UxGT("Print aborted")
#endif
#ifndef MSG_NO_MOVE
  #define MSG_NO_MOVE                         _UxGT("No move.")
#endif
#ifndef MSG_KILLED
  #define MSG_KILLED                          _UxGT("KILLED. ")
#endif
#ifndef MSG_STOPPED
  #define MSG_STOPPED                         _UxGT("STOPPED. ")
#endif
#ifndef MSG_CONTROL_RETRACT
  #define MSG_CONTROL_RETRACT                 _UxGT("Retract mm")
#endif
#ifndef MSG_CONTROL_RETRACT_SWAP
  #define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")
#endif
#ifndef MSG_CONTROL_RETRACTF
  #define MSG_CONTROL_RETRACTF                _UxGT("Retract  V")
#endif
#ifndef MSG_CONTROL_RETRACT_ZLIFT
  #define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER
  #define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAP
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVERF
  #define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#endif
#ifndef MSG_AUTORETRACT
  #define MSG_AUTORETRACT                     _UxGT("AutoRetr.")
#endif
#ifndef MSG_FILAMENTCHANGE
  #define MSG_FILAMENTCHANGE                  _UxGT("Change filament")
#endif
#ifndef MSG_INIT_SDCARD
  #define MSG_INIT_SDCARD                     _UxGT("Init. SD card")
#endif
#ifndef MSG_CNG_SDCARD
  #define MSG_CNG_SDCARD                      _UxGT("Change SD card")
#endif
#ifndef MSG_ZPROBE_OUT
  #define MSG_ZPROBE_OUT                      _UxGT("Z probe out. bed")
#endif
#ifndef MSG_BLTOUCH
  #define MSG_BLTOUCH                         _UxGT("BLTouch")
#endif
#ifndef MSG_BLTOUCH_SELFTEST
  #define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")
#endif
#ifndef MSG_BLTOUCH_RESET
  #define MSG_BLTOUCH_RESET                   _UxGT("Reset BLTouch")
#endif
#ifndef MSG_BLTOUCH_DEPLOY
  #define MSG_BLTOUCH_DEPLOY                  _UxGT("Deploy BLTouch")
#endif
#ifndef MSG_BLTOUCH_STOW
  #define MSG_BLTOUCH_STOW                    _UxGT("Stow BLTouch")
#endif
#ifndef MSG_HOME
  #define MSG_HOME                            _UxGT("Home") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#endif
#ifndef MSG_FIRST
  #define MSG_FIRST                           _UxGT("first")
#endif
#ifndef MSG_ZPROBE_ZOFFSET
  #define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Offset")
#endif
#ifndef MSG_BABYSTEP_X
  #define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#endif
#ifndef MSG_BABYSTEP_Y
  #define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#endif
#ifndef MSG_BABYSTEP_Z
  #define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#endif
#ifndef MSG_ENDSTOP_ABORT
  #define MSG_ENDSTOP_ABORT                   _UxGT("Endstop abort")
#endif
#ifndef MSG_HEATING_FAILED_LCD
  #define MSG_HEATING_FAILED_LCD              _UxGT("Heating failed")
#endif
#ifndef MSG_ERR_REDUNDANT_TEMP
  #define MSG_ERR_REDUNDANT_TEMP              _UxGT("Err: REDUNDANT TEMP")
#endif
#ifndef MSG_THERMAL_RUNAWAY
  #define MSG_THERMAL_RUNAWAY                 _UxGT("THERMAL RUNAWAY")
#endif
#ifndef MSG_ERR_MAXTEMP
  #define MSG_ERR_MAXTEMP                     _UxGT("Err: MAXTEMP")
#endif
#ifndef MSG_ERR_MINTEMP
  #define MSG_ERR_MINTEMP                     _UxGT("Err: MINTEMP")
#endif
#ifndef MSG_ERR_MAXTEMP_BED
  #define MSG_ERR_MAXTEMP_BED                 _UxGT("Err: MAXTEMP BED")
#endif
#ifndef MSG_ERR_MINTEMP_BED
  #define MSG_ERR_MINTEMP_BED                 _UxGT("Err: MINTEMP BED")
#endif
#ifndef MSG_ERR_Z_HOMING
  #define MSG_ERR_Z_HOMING                    _UxGT("G28 Z Forbidden")
#endif
#ifndef MSG_HALTED
  #define MSG_HALTED                          _UxGT("PRINTER HALTED")
#endif
#ifndef MSG_PLEASE_RESET
  #define MSG_PLEASE_RESET                    _UxGT("Please reset")
#endif
#ifndef MSG_SHORT_DAY
  #define MSG_SHORT_DAY                       _UxGT("d") // One character only
#endif
#ifndef MSG_SHORT_HOUR
  #define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#endif
#ifndef MSG_SHORT_MINUTE
  #define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#endif
#ifndef MSG_HEATING
  #define MSG_HEATING                         _UxGT("Heating...")
#endif
#ifndef MSG_HEATING_COMPLETE
  #define MSG_HEATING_COMPLETE                _UxGT("Heating done.")
#endif
#ifndef MSG_BED_HEATING
  #define MSG_BED_HEATING                     _UxGT("Bed Heating.")
#endif
#ifndef MSG_BED_DONE
  #define MSG_BED_DONE                        _UxGT("Bed done.")
#endif
#ifndef MSG_DELTA_CALIBRATE
  #define MSG_DELTA_CALIBRATE                 _UxGT("Delta Calibration")
#endif
#ifndef MSG_DELTA_CALIBRATE_X
  #define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrate X")
#endif
#ifndef MSG_DELTA_CALIBRATE_Y
  #define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrate Y")
#endif
#ifndef MSG_DELTA_CALIBRATE_Z
  #define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrate Z")
#endif
#ifndef MSG_DELTA_CALIBRATE_CENTER
  #define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrate Center")
#endif
#ifndef MSG_DELTA_AUTO_CALIBRATE
  #define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto Calibration")
#endif
#ifndef MSG_DELTA_HEIGHT_CALIBRATE
  #define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Set Delta Height")
#endif
#ifndef MSG_INFO_MENU
  #define MSG_INFO_MENU                       _UxGT("About Printer")
#endif
#ifndef MSG_INFO_PRINTER_MENU
  #define MSG_INFO_PRINTER_MENU               _UxGT("Printer Info")
#endif
#ifndef MSG_INFO_STATS_MENU
  #define MSG_INFO_STATS_MENU                 _UxGT("Printer Stats")
#endif
#ifndef MSG_INFO_BOARD_MENU
  #define MSG_INFO_BOARD_MENU                 _UxGT("Board Info")
#endif
#ifndef MSG_INFO_THERMISTOR_MENU
  #define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistors")
#endif
#ifndef MSG_INFO_EXTRUDERS
  #define MSG_INFO_EXTRUDERS                  _UxGT("Extruders")
#endif
#ifndef MSG_INFO_BAUDRATE
  #define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#endif
#ifndef MSG_INFO_PROTOCOL
  #define MSG_INFO_PROTOCOL                   _UxGT("Protocol")
#endif
#ifndef MSG_LIGHTS_ON
  #define MSG_LIGHTS_ON                       _UxGT("Case light on")
#endif
#ifndef MSG_LIGHTS_OFF
  #define MSG_LIGHTS_OFF                      _UxGT("Case light off")
#endif

#if LCD_WIDTH >= 20
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              _UxGT("Print Count")
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed")
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               _UxGT("Total print time")
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            _UxGT("Longest job time")
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           _UxGT("Extruded total")
  #endif
#else
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              _UxGT("Prints")
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed")
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               _UxGT("Total")
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            _UxGT("Longest")
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           _UxGT("Extruded")
  #endif
#endif

#ifndef MSG_INFO_MIN_TEMP
  #define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#endif
#ifndef MSG_INFO_MAX_TEMP
  #define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#endif
#ifndef MSG_INFO_PSU
  #define MSG_INFO_PSU                        _UxGT("Power Supply")
#endif
#ifndef MSG_DRIVE_STRENGTH
  #define MSG_DRIVE_STRENGTH                  _UxGT("Drive Strength")
#endif
#ifndef MSG_DAC_PERCENT
  #define MSG_DAC_PERCENT                     _UxGT("Driver %")
#endif
#ifndef MSG_DAC_EEPROM_WRITE
  #define MSG_DAC_EEPROM_WRITE                _UxGT("DAC EEPROM Write")
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER
  #define MSG_FILAMENT_CHANGE_HEADER          _UxGT("CHANGE FILAMENT")
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_HEADER
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("CHANGE OPTIONS:")
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_EXTRUDE
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Extrude more")
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_RESUME
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Resume print")
#endif
#ifndef MSG_FILAMENT_CHANGE_MINTEMP
  #define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Minimum Temp is ")
#endif
#ifndef MSG_FILAMENT_CHANGE_NOZZLE
  #define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Nozzle: ")
#endif

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Wait for start")
    #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("of the filament")
    #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("change")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Wait for")
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filament unload")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert filament")
    #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("and press button")
    #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("to continue...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEAT_1
    #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Press button to")
    #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("heat nozzle.")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEATING_1
    #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Heating nozzle")
    #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Please wait...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Wait for")
    #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filament load")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Wait for")
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("filament extrude")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Wait for print")
    #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("to resume")
  #endif
#else // LCD_HEIGHT < 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Please wait...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ejecting...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert and Click")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEATING_1
    #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Heating...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Loading...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Extruding...")
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Resuming...")
  #endif
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_EN_H
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "ultralcd.h"
#if ENABLED(ULTRA_LCD)
#include "Marlin.h"
#include "language.h"
#include "cardreader.h"
#include "temperature.h"
#include "stepper.h"
#include "configuration_store.h"
#include "utility.h"

#if HAS_BUZZER && DISABLED(LCD_USE_I2C_BUZZER)
  #include "buzzer.h"
#endif

#if ENABLED(PRINTCOUNTER)
  #include "printcounter.h"
  #include "duration_t.h"
#endif

#if ENABLED(BLTOUCH)
  #include "endstops.h"
#endif

int lcd_preheat_hotend_temp[2], lcd_preheat_bed_temp[2], lcd_preheat_fan_speed[2];

#if ENABLED(FILAMENT_LCD_DISPLAY) && ENABLED(SDSUPPORT)
  millis_t previous_lcd_status_ms = 0;
#endif

#if ENABLED(BABYSTEPPING)
  long babysteps_done = 0;
  #if ENABLED(BABYSTEP_ZPROBE_OFFSET)
    static void lcd_babystep_zoffset();
  #else
    static void lcd_babystep_z();
  #endif
#endif

uint8_t lcd_status_message_level;
char lcd_status_message[3 * (LCD_WIDTH) + 1] = WELCOME_MSG; // worst case is kana with up to 3*LCD_WIDTH+1

#if ENABLED(DOGLCD)
  #include "ultralcd_impl_DOGM.h"
  #include <U8glib.h>
#else
  #include "ultralcd_impl_HD44780.h"
#endif

// The main status screen
void lcd_status_screen();

millis_t next_lcd_update_ms;

uint8_t lcdDrawUpdate = LCDVIEW_CLEAR_CALL_REDRAW; // Set when the LCD needs to draw, decrements after every draw. Set to 2 in LCD routines so the LCD gets at least 1 full redraw (first redraw is partial)
uint16_t max_display_update_time = 0;

#if ENABLED(DOGLCD)
  bool drawing_screen = false;
  #define LCDVIEW_KEEP_REDRAWING LCDVIEW_CALL_REDRAW_NEXT
#else
  #define LCDVIEW_KEEP_REDRAWING LCDVIEW_REDRAW_NOW
#endif

#if ENABLED(DAC_STEPPER_CURRENT)
  #include "stepper_dac.h" //was dac_mcp4728.h MarlinMain uses stepper dac for the m-codes
  int16_t driverPercent[XYZE];
#endif

#if ENABLED(ULTIPANEL)

  #ifndef TALL_FONT_CORRECTION
    #define TALL_FONT_CORRECTION 0
  #endif

  // Function pointer to menu functions.
  typedef void (*screenFunc_t)();

  #if HAS_POWER_SWITCH
    extern bool powersupply;
  #endif

  #if ENABLED(AUTO_BED_LEVELING_UBL)
    #include "ubl.h"
  #endif

  ////////////////////////////////////////////
  ///////////////// Menu Tree ////////////////
  ////////////////////////////////////////////

  void lcd_main_menu();
  void lcd_tune_menu();
  void lcd_prepare_menu();
  void lcd_move_menu();
  void lcd_control_menu();
  void lcd_control_temperature_menu();
  void lcd_control_temperature_preheat_material1_settings_menu();
  void lcd_control_temperature_preheat_material2_settings_menu();
  void lcd_control_motion_menu();
  void lcd_control_filament_menu();

  #if ENABLED(LCD_INFO_MENU)
    #if ENABLED(PRINTCOUNTER)
      void lcd_info_stats_menu();
    #endif
    void lcd_info_thermistors_menu();
    void lcd_info_board_menu();
    void lcd_info_menu();
  #endif // LCD_INFO_MENU

  #if ENABLED(FILAMENT_CHANGE_FEATURE)
    void lcd_filament_change_toocold_menu();
    void lcd_filament_change_option_menu();
    void lcd_filament_change_init_message();
    void lcd_filament_change_unload_message();
    void lcd_filament_change_insert_message();
    void lcd_filament_change_load_message();
    void lcd_filament_change_heat_nozzle();
    void lcd_filament_change_extrude_message();
    void lcd_filament_change_resume_message();
  #endif

  #if ENABLED(DAC_STEPPER_CURRENT)
    void dac_driver_commit();
    void dac_driver_getValues();
    void lcd_dac_menu();
    void lcd_dac_write_eeprom();
  #endif

  #if HAS_LCD_CONTRAST
    void lcd_set_contrast();
  #endif

  #if ENABLED(FWRETRACT)
    void lcd_control_retract_menu();
  #endif

  #if ENABLED(DELTA_CALIBRATION_MENU)
    void lcd_delta_calibrate_menu();
  #endif

  #if ENABLED(MESH_BED_LEVELING) && ENABLED(LCD_BED_LEVELING)
    #include "mesh_bed_leveling.h"
    extern void mesh_probing_done();
  #endif

  ////////////////////////////////////////////
  //////////// Menu System Actions ///////////
  ////////////////////////////////////////////

  #define menu_action_back(dummy) _menu_action_back()
  void _menu_action_back();
  void menu_action_submenu(screenFunc_t data);
  void menu_action_gcode(const char* pgcode);
  void menu_action_function(screenFunc_t data);

  #define DECLARE_MENU_EDIT_TYPE(_type, _name) \
    bool _menu_edit_ ## _name(); \
    void menu_edit_ ## _name(); \
    void menu_edit_callback_ ## _name(); \
    void _menu_action_setting_edit_ ## _name(const char * const pstr, _type* const ptr, const _type minValue, const _type maxValue); \
    void menu_action_setting_edit_ ## _name(const char * const pstr, _type * const ptr, const _type minValue, const _type maxValue); \
    void menu_action_setting_edit_callback_ ## _name(const char * const pstr, _type * const ptr, const _type minValue, const _type maxValue, const screenFunc_t callback); \
    typedef void _name##_void

  DECLARE_MENU_EDIT_TYPE(int, int3);
  DECLARE_MENU_EDIT_TYPE(float, float3);
  DECLARE_MENU_EDIT_TYPE(float, float32);
  DECLARE_MENU_EDIT_TYPE(float, float43);
  DECLARE_MENU_EDIT_TYPE(float, float5);
  DECLARE_MENU_EDIT_TYPE(float, float51);
  DECLARE_MENU_EDIT_TYPE(float, float52);
  DECLARE_MENU_EDIT_TYPE(float, float62);
  DECLARE_MENU_EDIT_TYPE(unsigned long, long5);

  void menu_action_setting_edit_bool(const char* pstr, bool* ptr);
  void menu_action_setting_edit_callback_bool(const char* pstr, bool* ptr, screenFunc_t callbackFunc);

  #if ENABLED(SDSUPPORT)
    void lcd_sdcard_menu();
    void menu_action_sdfile(const char* filename, char* longFilename);
    void menu_action_sddirectory(const char* filename, char* longFilename);
  #endif

  ////////////////////////////////////////////
  //////////// Menu System Macros ////////////
  ////////////////////////////////////////////

  #ifndef ENCODER_FEEDRATE_DEADZONE
    #define ENCODER_FEEDRATE_DEADZONE 10
  #endif
  #ifndef ENCODER_STEPS_PER_MENU_ITEM
    #define ENCODER_STEPS_PER_MENU_ITEM 5
  #endif
  #ifndef ENCODER_PULSES_PER_STEP
    #define ENCODER_PULSES_PER_STEP 1
  #endif

  /**
   * MENU_ITEM generates draw & handler code for a menu item, potentially calling:
   *
   *   lcd_implementation_drawmenu_[type](sel, row, label, arg3...)
   *   menu_action_[type](arg3...)
   *
   * Examples:
   *   MENU_ITEM(back, MSG_WATCH, 0 [dummy parameter] )
   *   or
   *   MENU_BACK(MSG_WATCH)
   *     lcd_implementation_drawmenu_back(sel, row, PSTR(MSG_WATCH))
   *     menu_action_back()
   *
   *   MENU_ITEM(function, MSG_PAUSE_PRINT, lcd_sdcard_pause)
   *     lcd_implementation_drawmenu_function(sel, row, PSTR(MSG_PAUSE_PRINT), lcd_sdcard_pause)
   *     menu_action_function(lcd_sdcard_pause)
   *
   *   MENU_ITEM_EDIT(int3, MSG_SPEED, &feedrate_percentage, 10, 999)
   *   MENU_ITEM(setting_edit_int3, MSG_SPEED, PSTR(MSG_SPEED), &feedrate_percentage, 10, 999)
   *     lcd_implementation_drawmenu_setting_edit_int3(sel, row, PSTR(MSG_SPEED), PSTR(MSG_SPEED), &feedrate_percentage, 10, 999)
   *     menu_action_setting_edit_int3(PSTR(MSG_SPEED), &feedrate_percentage, 10, 999)
   *
   */
  #define _MENU_ITEM_PART_1(TYPE, LABEL, ...) \
    if (_menuLineNr == _thisItemNr) { \
      if (lcdDrawUpdate) \
        lcd_implementation_drawmenu_ ## TYPE(encoderLine == _thisItemNr, _lcdLineNr, PSTR(LABEL), ## __VA_ARGS__); \
      if (lcd_clicked && encoderLine == _thisItemNr) {

  #define _MENU_ITEM_PART_2(TYPE, ...) \
        menu_action_ ## TYPE(__VA_ARGS__); \
        if (screen_changed) return; \
      } \
    } \
    ++_thisItemNr

  #define MENU_ITEM(TYPE, LABEL, ...) do { \
      _skipStatic = false; \
      _MENU_ITEM_PART_1(TYPE, LABEL, ## __VA_ARGS__); \
      _MENU_ITEM_PART_2(TYPE, ## __VA_ARGS__); \
    } while(0)

  #define MENU_BACK(LABEL) MENU_ITEM(back, LABEL, 0)

  // Used to print static text with no visible cursor.
  // Parameters: label [, bool center [, bool invert [, char *value] ] ]
  #define STATIC_ITEM(LABEL, ...) \
    if (_menuLineNr == _thisItemNr) { \
      if (_skipStatic && encoderLine <= _thisItemNr) { \
        encoderPosition += ENCODER_STEPS_PER_MENU_ITEM; \
        ++encoderLine; \
      } \
      if (lcdDrawUpdate) \
        lcd_implementation_drawmenu_static(_lcdLineNr, PSTR(LABEL), ## __VA_ARGS__); \
    } \
    ++_thisItemNr

  #if ENABLED(ENCODER_RATE_MULTIPLIER)

    bool encoderRateMultiplierEnabled;
    #define ENCODER_RATE_MULTIPLY(F) (encoderRateMultiplierEnabled = F)

    //#define ENCODER_RATE_MULTIPLIER_DEBUG  // If defined, output the encoder steps per second value

    /**
     * MENU_MULTIPLIER_ITEM generates drawing and handling code for a multiplier menu item
     */
    #define MENU_MULTIPLIER_ITEM(type, label, ...) do { \
        _MENU_ITEM_PART_1(type, label, ## __VA_ARGS__); \
        encoderRateMultiplierEnabled = true; \
        lastEncoderMovementMillis = 0; \
        _MENU_ITEM_PART_2(type, ## __VA_ARGS__); \
      } while(0)

  #else  // !ENCODER_RATE_MULTIPLIER
    #define ENCODER_RATE_MULTIPLY(F) NOOP
  #endif // !ENCODER_RATE_MULTIPLIER

  #define MENU_ITEM_DUMMY() do { _thisItemNr++; } while(0)
  #define MENU_ITEM_EDIT(type, label, ...) MENU_ITEM(setting_edit_ ## type, label, PSTR(label), ## __VA_ARGS__)
  #define MENU_ITEM_EDIT_CALLBACK(type, label, ...) MENU_ITEM(setting_edit_callback_ ## type, label, PSTR(label), ## __VA_ARGS__)
  #if ENABLED(ENCODER_RATE_MULTIPLIER)
    #define MENU_MULTIPLIER_ITEM_EDIT(type, label, ...) MENU_MULTIPLIER_ITEM(setting_edit_ ## type, label, PSTR(label), ## __VA_ARGS__)
    #define MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(type, label, ...) MENU_MULTIPLIER_ITEM(setting_edit_callback_ ## type, label, PSTR(label), ## __VA_ARGS__)
  #else //!ENCODER_RATE_MULTIPLIER
    #define MENU_MULTIPLIER_ITEM_EDIT(type, label, ...) MENU_ITEM(setting_edit_ ## type, label, PSTR(label), ## __VA_ARGS__)
    #define MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(type, label, ...) MENU_ITEM(setting_edit_callback_ ## type, label, PSTR(label), ## __VA_ARGS__)
  #endif //!ENCODER_RATE_MULTIPLIER

  /**
   * START_SCREEN_OR_MENU generates init code for a screen or menu
   *
   *   encoderLine is the position based on the encoder
   *   encoderTopLine is the top menu line to display
   *   _lcdLineNr is the index of the LCD line (e.g., 0-3)
   *   _menuLineNr is the menu item to draw and process
   *   _thisItemNr is the index of each MENU_ITEM or STATIC_ITEM
   *   _countedItems is the total number of items in the menu (after one call)
   */
  #define START_SCREEN_OR_MENU(LIMIT) \
    ENCODER_DIRECTION_MENUS(); \
    ENCODER_RATE_MULTIPLY(false); \
    if (encoderPosition > 0x8000) encoderPosition = 0; \
    static int8_t _countedItems = 0; \
    int8_t encoderLine = encoderPosition / (ENCODER_STEPS_PER_MENU_ITEM); \
    if (_countedItems > 0 && encoderLine >= _countedItems - (LIMIT)) { \
      encoderLine = max(0, _countedItems - (LIMIT)); \
      encoderPosition = encoderLine * (ENCODER_STEPS_PER_MENU_ITEM); \
    }

  #define SCREEN_OR_MENU_LOOP() \
    int8_t _menuLineNr = encoderTopLine, _thisItemNr; \
    for (int8_t _lcdLineNr = 0; _lcdLineNr < LCD_HEIGHT - (TALL_FONT_CORRECTION); _lcdLineNr++, _menuLineNr++) { \
      _thisItemNr = 0

  /**
   * START_SCREEN  Opening code for a screen having only static items.
   *               Do simplified scrolling of the entire screen.
   *
   * START_MENU    Opening code for a screen with menu items.
   *               Scroll as-needed to keep the selected line in view.
   */
  #define START_SCREEN() \
    START_SCREEN_OR_MENU(LCD_HEIGHT - (TALL_FONT_CORRECTION)); \
    encoderTopLine = encoderLine; \
    bool _skipStatic = false; \
    SCREEN_OR_MENU_LOOP()

  #define START_MENU() \
    START_SCREEN_OR_MENU(1); \
    screen_changed = false; \
    NOMORE(encoderTopLine, encoderLine); \
    if (encoderLine >= encoderTopLine + LCD_HEIGHT - (TALL_FONT_CORRECTION)) { \
      encoderTopLine = encoderLine - (LCD_HEIGHT - (TALL_FONT_CORRECTION) - 1); \
    } \
    bool _skipStatic = true; \
    SCREEN_OR_MENU_LOOP()

  #define END_SCREEN() \
    } \
    _countedItems = _thisItemNr

  #define END_MENU() \
    } \
    _countedItems = _thisItemNr; \
    UNUSED(_skipStatic)

  ////////////////////////////////////////////
  ///////////// Global Variables /////////////
  ////////////////////////////////////////////

  /**
   * REVERSE_MENU_DIRECTION
   *
   * To reverse the menu direction we need a general way to reverse
   * the direction of the encoder everywhere. So encoderDirection is
   * added to allow the encoder to go the other way.
   *
   * This behavior is limited to scrolling Menus and SD card listings,
   * and is disabled in other contexts.
   */
  #if ENABLED(REVERSE_MENU_DIRECTION)
    int8_t encoderDirection = 1;
    #define ENCODER_DIRECTION_NORMAL() (encoderDirection = 1)
    #define ENCODER_DIRECTION_MENUS() (encoderDirection = -1)
  #else
    #define ENCODER_DIRECTION_NORMAL() ;
    #define ENCODER_DIRECTION_MENUS() ;
  #endif

  // Encoder Movement
  volatile int8_t encoderDiff; // Updated in lcd_buttons_update, added to encoderPosition every LCD update
  uint32_t encoderPosition;
  millis_t lastEncoderMovementMillis = 0;

  // Button States
  bool lcd_clicked, wait_for_unclick;
  volatile uint8_t buttons;
  millis_t next_button_update_ms;
  #if ENABLED(REPRAPWORLD_KEYPAD)
    volatile uint8_t buttons_reprapworld_keypad;
  #endif
  #if ENABLED(LCD_HAS_SLOW_BUTTONS)
    volatile uint8_t slow_buttons;
  #endif

  // Menu System Navigation
  screenFunc_t currentScreen = lcd_status_screen;
  int8_t encoderTopLine;
  typedef struct {
    screenFunc_t menu_function;
    uint32_t encoder_position;
  } menuPosition;
  menuPosition screen_history[6];
  uint8_t screen_history_depth = 0;
  bool screen_changed, defer_return_to_status;

  // Value Editing
  const char *editLabel;
  void *editValue;
  int32_t minEditValue, maxEditValue;
  screenFunc_t callbackFunc;

  // Manual Moves
  const float manual_feedrate_mm_m[] = MANUAL_FEEDRATE;
  millis_t manual_move_start_time = 0;
  int8_t manual_move_axis = (int8_t)NO_AXIS;
  #if EXTRUDERS > 1
    int8_t manual_move_e_index = 0;
  #else
    #define manual_move_e_index 0
  #endif

  #if PIN_EXISTS(SD_DETECT)
    uint8_t lcd_sd_status;
  #endif

  #if ENABLED(PIDTEMP)
    float raw_Ki, raw_Kd; // place-holders for Ki and Kd edits
  #endif

  /**
   * General function to go directly to a screen
   */
  void lcd_goto_screen(screenFunc_t screen, const uint32_t encoder = 0) {
    if (currentScreen != screen) {

      #if ENABLED(DOUBLECLICK_FOR_Z_BABYSTEPPING) && ENABLED(BABYSTEPPING)
        static millis_t doubleclick_expire_ms = 0;
        // Going to lcd_main_menu from status screen? Remember first click time.
        // Going back to status screen within a very short time? Go to Z babystepping.
        if (screen == lcd_main_menu) {
          if (currentScreen == lcd_status_screen)
            doubleclick_expire_ms = millis() + DOUBLECLICK_MAX_INTERVAL;
        }
        else if (screen == lcd_status_screen && currentScreen == lcd_main_menu && PENDING(millis(), doubleclick_expire_ms))
          screen =
            #if ENABLED(BABYSTEP_ZPROBE_OFFSET)
              lcd_babystep_zoffset
            #else
              lcd_babystep_z
            #endif
          ;
      #endif

      currentScreen = screen;
      encoderPosition = encoder;
      if (screen == lcd_status_screen) {
        defer_return_to_status = false;
        screen_history_depth = 0;
      }
      lcd_implementation_clear();
      #if ENABLED(LCD_PROGRESS_BAR)
        // For LCD_PROGRESS_BAR re-initialize custom characters
        lcd_set_custom_characters(screen == lcd_status_screen);
      #endif
      lcdDrawUpdate = LCDVIEW_CALL_REDRAW_NEXT;
      screen_changed = true;
      #if ENABLED(DOGLCD)
        drawing_screen = false;
      #endif
    }
  }

  /**
   * Synchronize safely while holding the current screen
   * This blocks all further screen or stripe updates once called
   */
  extern uint8_t commands_in_queue;

  inline void lcd_synchronize() {
    static bool no_reentry = false;
    lcd_implementation_drawmenu_static(LCD_HEIGHT >= 4 ? 1 : 0, PSTR(MSG_MOVING));
    if (no_reentry) return;
    no_reentry = true;
    screenFunc_t old_screen = currentScreen;
    lcd_goto_screen(lcd_synchronize);
    while (commands_in_queue) {
      idle();
      stepper.synchronize();
    }
    no_reentry = false;
    lcd_goto_screen(old_screen);
  }

  void lcd_return_to_status() { lcd_goto_screen(lcd_status_screen); }

  void lcd_save_previous_screen() {
    if (screen_history_depth < COUNT(screen_history)) {
      screen_history[screen_history_depth].menu_function = currentScreen;
      screen_history[screen_history_depth].encoder_position = encoderPosition;
      ++screen_history_depth;
    }
  }

  void lcd_goto_previous_menu() {
    if (screen_history_depth > 0) {
      --screen_history_depth;
      lcd_goto_screen(
        screen_history[screen_history_depth].menu_function,
        screen_history[screen_history_depth].encoder_position
      );
    }
    else
      lcd_return_to_status();
  }

#endif // ULTIPANEL

/**
 *
 * "Info Screen"
 *
 * This is very display-dependent, so the lcd implementation draws this.
 */

void lcd_status_screen() {

  #if ENABLED(ULTIPANEL)
    ENCODER_DIRECTION_NORMAL();
    ENCODER_RATE_MULTIPLY(false);
  #endif

  #if ENABLED(LCD_PROGRESS_BAR)
    millis_t ms = millis();
    #if DISABLED(PROGRESS_MSG_ONCE)
      if (ELAPSED(ms, progress_bar_ms + PROGRESS_BAR_MSG_TIME + PROGRESS_BAR_BAR_TIME)) {
        progress_bar_ms = ms;
      }
    #endif
    #if PROGRESS_MSG_EXPIRE > 0
      // Handle message expire
      if (expire_status_ms > 0) {
        #if ENABLED(SDSUPPORT)
          if (card.isFileOpen()) {
            // Expire the message when printing is active
            if (IS_SD_PRINTING) {
              if (ELAPSED(ms, expire_status_ms)) {
                lcd_status_message[0] = '\0';
                expire_status_ms = 0;
              }
            }
            else {
              expire_status_ms += LCD_UPDATE_INTERVAL;
            }
          }
          else {
            expire_status_ms = 0;
          }
        #else
          expire_status_ms = 0;
        #endif //SDSUPPORT
      }
    #endif
  #endif //LCD_PROGRESS_BAR

  lcd_implementation_status_screen();

  #if ENABLED(ULTIPANEL)

    if (lcd_clicked) {
      #if ENABLED(FILAMENT_LCD_DISPLAY) && ENABLED(SDSUPPORT)
        previous_lcd_status_ms = millis();  // get status message to show up for a while
      #endif
      lcd_implementation_init( // to maybe revive the LCD if static electricity killed it.
        #if ENABLED(LCD_PROGRESS_BAR)
          false
        #endif
      );
      lcd_goto_screen(lcd_main_menu);
    }

    #if ENABLED(ULTIPANEL_FEEDMULTIPLY)
      int new_frm = feedrate_percentage + (int32_t)encoderPosition;
      // Dead zone at 100% feedrate
      if ((feedrate_percentage < 100 && new_frm > 100) || (feedrate_percentage > 100 && new_frm < 100)) {
        feedrate_percentage = 100;
        encoderPosition = 0;
      }
      else if (feedrate_percentage == 100) {
        if ((int32_t)encoderPosition > ENCODER_FEEDRATE_DEADZONE) {
          feedrate_percentage += (int32_t)encoderPosition - (ENCODER_FEEDRATE_DEADZONE);
          encoderPosition = 0;
        }
        else if ((int32_t)encoderPosition < -(ENCODER_FEEDRATE_DEADZONE)) {
          feedrate_percentage += (int32_t)encoderPosition + ENCODER_FEEDRATE_DEADZONE;
          encoderPosition = 0;
        }
      }
      else {
        feedrate_percentage = new_frm;
        encoderPosition = 0;
      }
    #endif // ULTIPANEL_FEEDMULTIPLY

    feedrate_percentage = constrain(feedrate_percentage, 10, 999);

  #endif //ULTIPANEL
}

/**
 *
 * draw the kill screen
 *
 */
void kill_screen(const char* lcd_msg) {
  lcd_init();
  lcd_setalertstatuspgm(lcd_msg);
  #if ENABLED(DOGLCD)
    u8g.firstPage();
    do {
      lcd_kill_screen();
    } while (u8g.nextPage());
  #else
    lcd_kill_screen();
  #endif
}

#if ENABLED(ULTIPANEL)

  /**
   *
   * Audio feedback for controller clicks
   *
   */
  void lcd_buzz(long duration, uint16_t freq) {
    #if ENABLED(LCD_USE_I2C_BUZZER)
      lcd.buzz(duration, freq);
    #elif PIN_EXISTS(BEEPER)
      buzzer.tone(duration, freq);
    #else
      UNUSED(duration); UNUSED(freq);
    #endif
  }

  void lcd_quick_feedback() {
    lcdDrawUpdate = LCDVIEW_CLEAR_CALL_REDRAW;
    buttons = 0;
    next_button_update_ms = millis() + 500;

    // Buzz and wait. The delay is needed for buttons to settle!
    lcd_buzz(LCD_FEEDBACK_FREQUENCY_DURATION_MS, LCD_FEEDBACK_FREQUENCY_HZ);
    #if ENABLED(LCD_USE_I2C_BUZZER)
      delay(10);
    #elif PIN_EXISTS(BEEPER)
      for (int8_t i = 5; i--;) { buzzer.tick(); delay(2); }
    #endif
  }

  void lcd_completion_feedback(const bool good/*=true*/) {
    if (good) {
      lcd_buzz(100, 659);
      lcd_buzz(100, 698);
    }
    else lcd_buzz(20, 440);
  }

  inline void line_to_current(AxisEnum axis) {
    planner.buffer_line_kinematic(current_position, MMM_TO_MMS(manual_feedrate_mm_m[axis]), active_extruder);
  }

  #if ENABLED(SDSUPPORT)

    void lcd_sdcard_pause() {
      card.pauseSDPrint();
      print_job_timer.pause();
      #if ENABLED(PARK_HEAD_ON_PAUSE)
        enqueue_and_echo_commands_P(PSTR("M125"));
      #endif
    }

    void lcd_sdcard_resume() {
      #if ENABLED(PARK_HEAD_ON_PAUSE)
        enqueue_and_echo_commands_P(PSTR("M24"));
      #else
        card.startFileprint();
        print_job_timer.start();
      #endif
    }

    void lcd_sdcard_stop() {
      card.stopSDPrint();
      clear_command_queue();
      quickstop_stepper();
      print_job_timer.stop();
      #if ENABLED(AUTOTEMP)
        thermalManager.autotempShutdown();
      #endif
      wait_for_heatup = false;
      LCD_MESSAGEPGM(MSG_PRINT_ABORTED);
    }

  #endif // SDSUPPORT

  #if ENABLED(MENU_ITEM_CASE_LIGHT)

    extern bool case_light_on;
    extern void update_case_light();

    void toggle_case_light() {
      case_light_on ^= true;
      lcdDrawUpdate = LCDVIEW_CALL_REDRAW_NEXT;
      update_case_light();
    }

  #endif // MENU_ITEM_CASE_LIGHT

  #if ENABLED(BLTOUCH)

    /**
     *
     * "BLTouch" submenu
     *
     */
    static void bltouch_menu() {
      START_MENU();
      //
      // ^ Main
      //
      MENU_BACK(MSG_MAIN);
      MENU_ITEM(gcode, MSG_BLTOUCH_RESET, PSTR("M280 P" STRINGIFY(Z_ENDSTOP_SERVO_NR) " S" STRINGIFY(BLTOUCH_RESET)));
      MENU_ITEM(gcode, MSG_BLTOUCH_SELFTEST, PSTR("M280 P" STRINGIFY(Z_ENDSTOP_SERVO_NR) " S" STRINGIFY(BLTOUCH_SELFTEST)));
      MENU_ITEM(gcode, MSG_BLTOUCH_DEPLOY, PSTR("M280 P" STRINGIFY(Z_ENDSTOP_SERVO_NR) " S" STRINGIFY(BLTOUCH_DEPLOY)));
      MENU_ITEM(gcode, MSG_BLTOUCH_STOW, PSTR("M280 P" STRINGIFY(Z_ENDSTOP_SERVO_NR) " S" STRINGIFY(BLTOUCH_STOW)));
      END_MENU();
    }

  #endif // BLTOUCH

  #if ENABLED(LCD_PROGRESS_BAR_TEST)

    static void progress_bar_test() {
      static int8_t bar_percent = 0;
      if (lcd_clicked) {
        lcd_goto_previous_menu();
        lcd_set_custom_characters(false);
        return;
      }
      bar_percent += (int8_t)encoderPosition;
      bar_percent = constrain(bar_percent, 0, 100);
      encoderPosition = 0;
      lcd_implementation_drawmenu_static(0, PSTR(MSG_PROGRESS_BAR_TEST), true, true);
      lcd.setCursor((LCD_WIDTH) / 2 - 2, LCD_HEIGHT - 2);
      lcd.print(itostr3(bar_percent)); lcd.print('%');
      lcd.setCursor(0, LCD_HEIGHT - 1); lcd_draw_progress_bar(bar_percent);
    }

    void _progress_bar_test() {
      lcd_goto_screen(progress_bar_test);
      lcd_set_custom_characters();
    }

  #endif // LCD_PROGRESS_BAR_TEST

  #if HAS_DEBUG_MENU

    void lcd_debug_menu() {
      START_MENU();

      MENU_BACK(MSG_MAIN); // ^ Main

      #if ENABLED(LCD_PROGRESS_BAR_TEST)
        MENU_ITEM(submenu, MSG_PROGRESS_BAR_TEST, _progress_bar_test);
      #endif

      END_MENU();
    }

  #endif // HAS_DEBUG_MENU

  /**
   *
   * "Main" menu
   *
   */

  void lcd_main_menu() {
    START_MENU();
    MENU_BACK(MSG_WATCH);

    //
    // Debug Menu when certain options are enabled
    //
    #if HAS_DEBUG_MENU
      MENU_ITEM(submenu, MSG_DEBUG_MENU, lcd_debug_menu);
    #endif

    //
    // Switch case light on/off
    //
    #if ENABLED(MENU_ITEM_CASE_LIGHT)
      if (case_light_on)
        MENU_ITEM(function, MSG_LIGHTS_OFF, toggle_case_light);
      else
        MENU_ITEM(function, MSG_LIGHTS_ON, toggle_case_light);
    #endif

    #if ENABLED(BLTOUCH)
      MENU_ITEM(submenu, MSG_BLTOUCH, bltouch_menu);
    #endif

    if (planner.movesplanned() || IS_SD_PRINTING) {
      MENU_ITEM(submenu, MSG_TUNE, lcd_tune_menu);
    }
    else {
      MENU_ITEM(submenu, MSG_PREPARE, lcd_prepare_menu);
      #if ENABLED(DELTA_CALIBRATION_MENU)
        MENU_ITEM(submenu, MSG_DELTA_CALIBRATE, lcd_delta_calibrate_menu);
      #endif
    }
    MENU_ITEM(submenu, MSG_CONTROL, lcd_control_menu);

    #if ENABLED(SDSUPPORT)
      if (card.cardOK) {
        if (card.isFileOpen()) {
          if (card.sdprinting)
            MENU_ITEM(function, MSG_PAUSE_PRINT, lcd_sdcard_pause);
          else
            MENU_ITEM(function, MSG_RESUME_PRINT, lcd_sdcard_resume);
          MENU_ITEM(function, MSG_STOP_PRINT, lcd_sdcard_stop);
        }
        else {
          MENU_ITEM(submenu, MSG_CARD_MENU, lcd_sdcard_menu);
          #if !PIN_EXISTS(SD_DETECT)
            MENU_ITEM(gcode, MSG_CNG_SDCARD, PSTR("M21"));  // SD-card changed by user
          #endif
        }
      }
      else {
        MENU_ITEM(submenu, MSG_NO_CARD, lcd_sdcard_menu);
        #if !PIN_EXISTS(SD_DETECT)
          MENU_ITEM(gcode, MSG_INIT_SDCARD, PSTR("M21")); // Manually initialize the SD-card via user interface
        #endif
      }
    #endif //SDSUPPORT

    #if ENABLED(LCD_INFO_MENU)
      MENU_ITEM(submenu, MSG_INFO_MENU, lcd_info_menu);
    #endif

    END_MENU();
  }

  /**
   *
   * "Tune" submenu items
   *
   */

  #if HAS_M206_COMMAND
    /**
     * Set the home offset based on the current_position
     */
    void lcd_set_home_offsets() {
      // M428 Command
      enqueue_and_echo_commands_P(PSTR("M428"));
      lcd_return_to_status();
    }
  #endif

  #if ENABLED(BABYSTEPPING)

    void _lcd_babystep(const AxisEnum axis, const char* msg) {
      if (lcd_clicked) { defer_return_to_status = false; return lcd_goto_previous_menu(); }
      ENCODER_DIRECTION_NORMAL();
      if (encoderPosition) {
        const int babystep_increment = (int32_t)encoderPosition * (BABYSTEP_MULTIPLICATOR);
        encoderPosition = 0;
        lcdDrawUpdate = LCDVIEW_REDRAW_NOW;
        thermalManager.babystep_axis(axis, babystep_increment);
        babysteps_done += babystep_increment;
      }
      if (lcdDrawUpdate)
        lcd_implementation_drawedit(msg, ftostr43sign(planner.steps_to_mm[axis] * babysteps_done));
    }

    #if ENABLED(BABYSTEP_XY)
      void _lcd_babystep_x() { _lcd_babystep(X_AXIS, PSTR(MSG_BABYSTEPPING_X)); }
      void _lcd_babystep_y() { _lcd_babystep(Y_AXIS, PSTR(MSG_BABYSTEPPING_Y)); }
      void lcd_babystep_x() { lcd_goto_screen(_lcd_babystep_x); babysteps_done = 0; defer_return_to_status = true; }
      void lcd_babystep_y() { lcd_goto_screen(_lcd_babystep_y); babysteps_done = 0; defer_return_to_status = true; }
    #endif

    #if ENABLED(BABYSTEP_ZPROBE_OFFSET)

      void lcd_babystep_zoffset() {
        if (lcd_clicked) { defer_return_to_status = false; return lcd_goto_previous_menu(); }
        defer_return_to_status = true;
        ENCODER_DIRECTION_NORMAL();
        if (encoderPosition) {
          const int babystep_increment = (int32_t)encoderPosition * (BABYSTEP_MULTIPLICATOR);
          encoderPosition = 0;

          const float new_zoffset = zprobe_zoffset + planner.steps_to_mm[Z_AXIS] * babystep_increment;
          if (WITHIN(new_zoffset, Z_PROBE_OFFSET_RANGE_MIN, Z_PROBE_OFFSET_RANGE_MAX)) {

            if (planner.abl_enabled)
              thermalManager.babystep_axis(Z_AXIS, babystep_increment);

            zprobe_zoffset = new_zoffset;
            refresh_zprobe_zoffset(true);
            lcdDrawUpdate = LCDVIEW_REDRAW_NOW;
          }
        }
        if (lcdDrawUpdate)
          lcd_implementation_drawedit(PSTR(MSG_ZPROBE_ZOFFSET), ftostr43sign(zprobe_zoffset));
      }

    #else // !BABYSTEP_ZPROBE_OFFSET

      void _lcd_babystep_z() { _lcd_babystep(Z_AXIS, PSTR(MSG_BABYSTEPPING_Z)); }
      void lcd_babystep_z() { lcd_goto_screen(_lcd_babystep_z); babysteps_done = 0; defer_return_to_status = true; }

    #endif // !BABYSTEP_ZPROBE_OFFSET

  #endif // BABYSTEPPING

  #if ENABLED(AUTO_BED_LEVELING_UBL)

    float mesh_edit_value, mesh_edit_accumulator; // We round mesh_edit_value to 2.5 decimal places.  So we keep a
                                                  // seperate value that doesn't lose precision.
    static int ubl_encoderPosition = 0;

    static void _lcd_mesh_fine_tune(const char* msg) {
      defer_return_to_status = true;
      if (ubl.encoder_diff) {
        ubl_encoderPosition = (ubl.encoder_diff > 0) ? 1 : -1;
        ubl.encoder_diff = 0;

        mesh_edit_accumulator += float(ubl_encoderPosition) * 0.005 / 2.0;
        mesh_edit_value = mesh_edit_accumulator;
        encoderPosition = 0;
        lcdDrawUpdate = LCDVIEW_REDRAW_NOW;

        const int32_t rounded = (int32_t)(mesh_edit_value * 1000.0);
        mesh_edit_value = float(rounded - (rounded % 5L)) / 1000.0;
      }

      if (lcdDrawUpdate)
        lcd_implementation_drawedit(msg, ftostr43sign(mesh_edit_value));
    }

    void _lcd_mesh_edit_NOP() {
      defer_return_to_status = true;
    }

    void _lcd_mesh_edit() {
      _lcd_mesh_fine_tune(PSTR("Mesh Editor"));
    }

    float lcd_mesh_edit() {
      lcd_goto_screen(_lcd_mesh_edit_NOP);
      _lcd_mesh_fine_tune(PSTR("Mesh Editor"));
      return mesh_edit_value;
    }

    void lcd_mesh_edit_setup(float initial) {
      mesh_edit_value = mesh_edit_accumulator = initial;
      lcd_goto_screen(_lcd_mesh_edit_NOP);
    }

    void _lcd_z_offset_edit() {
      _lcd_mesh_fine_tune(PSTR("Z-Offset: "));
    }

    float lcd_z_offset_edit() {
      lcd_goto_screen(_lcd_z_offset_edit);
      return mesh_edit_value;
    }

    void lcd_z_offset_edit_setup(float initial) {
      mesh_edit_value = mesh_edit_accumulator = initial;
      lcd_goto_screen(_lcd_z_offset_edit);
    }

  #endif // AUTO_BED_LEVELING_UBL


  /**
   * Watch temperature callbacks
   */
  #if HAS_TEMP_HOTEND
    #if WATCH_HOTENDS
      #define _WATCH_FUNC(N) thermalManager.start_watching_heater(N)
    #else
      #define _WATCH_FUNC(N) NOOP
    #endif
    void watch_temp_callback_E0() { _WATCH_FUNC(0); }
    #if HOTENDS > 1
      void watch_temp_callback_E1() { _WATCH_FUNC(1); }
      #if HOTENDS > 2
        void watch_temp_callback_E2() { _WATCH_FUNC(2); }
        #if HOTENDS > 3
          void watch_temp_callback_E3() { _WATCH_FUNC(3); }
          #if HOTENDS > 4
            void watch_temp_callback_E4() { _WATCH_FUNC(4); }
          #endif // HOTENDS > 4
        #endif // HOTENDS > 3
      #endif // HOTENDS > 2
    #endif // HOTENDS > 1
  #endif // HAS_TEMP_HOTEND

  #if WATCH_THE_BED
    void watch_temp_callback_bed() { thermalManager.start_watching_bed(); }
  #endif

  #if ENABLED(FILAMENT_CHANGE_FEATURE)
    void lcd_enqueue_filament_change() {
      if (!DEBUGGING(DRYRUN) && thermalManager.tooColdToExtrude(active_extruder)) {
        lcd_save_previous_screen();
        lcd_goto_screen(lcd_filament_change_toocold_menu);
        return;
      }
      lcd_filament_change_show_message(FILAMENT_CHANGE_MESSAGE_INIT);
      enqueue_and_echo_commands_P(PSTR("M600"));
    }
  #endif

  /**
   *
   * "Tune" submenu
   *
   */
  void lcd_tune_menu() {
    START_MENU();

    //
    // ^ Main
    //
    MENU_BACK(MSG_MAIN);

    //
    // Speed:
    //
    MENU_ITEM_EDIT(int3, MSG_SPEED, &feedrate_percentage, 10, 999);

    // Manual bed leveling, Bed Z:
    #if ENABLED(MESH_BED_LEVELING) && ENABLED(LCD_BED_LEVELING)
      MENU_ITEM_EDIT(float43, MSG_BED_Z, &mbl.z_offset, -1, 1);
    #endif

    //
    // Nozzle:
    // Nozzle [1-4]:
    //
    #if HOTENDS == 1
      MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_NOZZLE, &thermalManager.target_temperature[0], 0, HEATER_0_MAXTEMP - 15, watch_temp_callback_E0);
    #else //HOTENDS > 1
      MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_NOZZLE MSG_N1, &thermalManager.target_temperature[0], 0, HEATER_0_MAXTEMP - 15, watch_temp_callback_E0);
      MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_NOZZLE MSG_N2, &thermalManager.target_temperature[1], 0, HEATER_1_MAXTEMP - 15, watch_temp_callback_E1);
      #if HOTENDS > 2
        MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_NOZZLE MSG_N3, &thermalManager.target_temperature[2], 0, HEATER_2_MAXTEMP - 15, watch_temp_callback_E2);
        #if HOTENDS > 3
          MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_NOZZLE MSG_N4, &thermalManager.target_temperature[3], 0, HEATER_3_MAXTEMP - 15, watch_temp_callback_E3);
          #if HOTENDS > 4
            MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_NOZZLE MSG_N5, &thermalManager.target_temperature[4], 0, HEATER_4_MAXTEMP - 15, watch_temp_callback_E4);
          #endif // HOTENDS > 4
        #endif // HOTENDS > 3
      #endif // HOTENDS > 2
    #endif // HOTENDS > 1

    //
    // Bed:
    //
    #if WATCH_THE_BED
      MENU_MULTIPLIER_ITEM_EDIT_CALLBACK(int3, MSG_BED, &thermalManager.target_temperature_bed, 0, BED_MAXTEMP - 15, watch_temp_callback_bed);
    #endif

    //
    // Fan Speed:
    //
    #if FAN_COUNT > 0
      #if HAS_FAN0
        #if FAN_COUNT > 1
          #define MSG_1ST_FAN_SPEED MSG_FAN_SPEED " 1"
        #else
          #define MSG_1ST_FAN_SPEED MSG_FAN_SPEED
        #endif
        MENU_MULTIPLIER_ITEM_EDIT(int3, MSG_1ST_FAN_SPEED, &fanSpeeds[0], 0, 255);
      #endif
      #if HAS_FAN1
        MENU_MULTIPLIER_ITEM_EDIT(int3, MSG_FAN_SPEED " 2", &fanSpeeds[1], 0, 255);
      #endif
      #if HAS_FAN2
        MENU_MULTIPLIER_ITEM_EDIT(int3, MSG_FAN_SPEED " 3", &fanSpeeds[2], 0, 255);
      #endif
    #endif // FAN_COUNT > 0

    //
    // Flow:
    // Flow [1-5]:
    //
    #if EXTRUDERS == 1
      MENU_ITEM_EDIT(int3, MSG_FLOW, &flow_percentage[0], 10, 999);
    #else // EXTRUDERS > 1
      MENU_ITEM_EDIT(int3, MSG_FLOW, &flow_percentage[active_extruder], 10, 999);
      MENU_ITEM_EDIT(int3, MSG_FLOW MSG_N1, &flow_percentage[0], 10, 999);
      MENU_ITEM_EDIT(int3, MSG_FLOW MSG_N2, &flow_percentage[1], 10, 999);
      #if EXTRUDERS > 2
        MENU_ITEM_EDIT(int3, MSG_FLOW MSG_N3, &flow_percentage[2], 10, 999);
        #if EXTRUDERS > 3
          MENU_ITEM_EDIT(int3, MSG_FLOW MSG_N4, &flow_percentage[3], 10, 999);
          #if EXTRUDERS > 4
            MENU_ITEM_EDIT(int3, MSG_FLOW MSG_N5, &flow_percentage[4], 10, 999);
          #endif // EXTRUDERS > 4
        #endif // EXTRUDERS > 3
      #endif // EXTRUDERS > 2
    #endif // EXTRUDERS > 1

    //
    // Babystep X:
    // Babystep Y:
    // Babystep Z:
    //
    #if ENABLED(BABYSTEPPING)
      #if ENABLED(BABYSTEP_XY)
        MENU_ITEM(submenu, MSG_BABYSTEP_X, lcd_babystep_x);
        MENU_ITEM(submenu, MSG_BABYSTEP_Y, lcd_babystep_y);
      #endif
      #if ENABLED(BABYSTEP_ZPROBE_OFFSET)
        MENU_ITEM(submenu, MSG_ZPROBE_ZOFFSET, lcd_babystep_zoffset);
      #else
        MENU_ITEM(submenu, MSG_BABYSTEP_Z, lcd_babystep_z);
      #endif
    #endif

    //
    // Change filament
    //
    #if ENABLED(FILAMENT_CHANGE_FEATURE)
      if (!thermalManager.tooColdToExtrude(active_extruder))
        MENU_ITEM(function, MSG_FILAMENTCHANGE, lcd_enqueue_filament_change);
    #endif

    END_MENU();
  }

  /**
   *
   * "Driver current control" submenu items
   *
   */
  #if ENABLED(DAC_STEPPER_CURRENT)
    void dac_driver_getValues() { LOOP_XYZE(i) driverPercent[i] = dac_current_get_percent((AxisEnum)i); }

    void dac_driver_commit() { dac_current_set_percents(driverPercent); }

    void dac_driver_eeprom_write() { dac_commit_eeprom(); }

    void lcd_dac_menu() {
      dac_driver_getValues();
      START_MENU();
      MENU_BACK(MSG_CONTROL);
      MENU_ITEM_EDIT_CALLBACK(int3, MSG_X " " MSG_DAC_PERCENT, &driverPercent[X_AXIS], 0, 100, dac_driver_commit);
      MENU_ITEM_EDIT_CALLBACK(int3, MSG_Y " " MSG_DAC_PERCENT, &driverPercent[Y_AXIS], 0, 100, dac_driver_commit);
      MENU_ITEM_EDIT_CALLBACK(int3, MSG_Z " " MSG_DAC_PERCENT, &driverPercent[Z_AXIS], 0, 100, dac_driver_commit);
      MENU_ITEM_EDIT_CALLBACK(int3, MSG_E " " MSG_DAC_PERCENT, &driverPercent[E_AXIS], 0, 100, dac_driver_commit);
      MENU_ITEM(function, MSG_DAC_EEPROM_WRITE, dac_driver_eeprom_write);
      END_MENU();
    }
  #endif

  constexpr int heater_maxtemp[HOTENDS] = ARRAY_BY_HOTENDS(HEATER_0_MAXTEMP, HEATER_1_MAXTEMP, HEATER_2_MAXTEMP, HEATER_3_MAXTEMP, HEATER_4_MAXTEMP);

  /**
   *
   * "Prepare" submenu items
   *
   */
  void _lcd_preheat(int endnum, const float temph, const float tempb, const int fan) {
    if (temph > 0) thermalManager.setTargetHotend(min(heater_maxtemp[endnum], temph), endnum);
    #if TEMP_SENSOR_BED != 0
      if (tempb >= 0) thermalManager.setTargetBed(tempb);
    #else
      UNUSED(tempb);
    #endif
    #if FAN_COUNT > 0
      #if FAN_COUNT > 1
        fanSpeeds[active_extruder < FAN_COUNT ? active_extruder : 0] = fan;
      #else
        fanSpeeds[0] = fan;
      #endif
    #else
      UNUSED(fan);
    #endif
    lcd_return_to_status();
  }

  #if TEMP_SENSOR_0 != 0
    void lcd_preheat_m1_e0_only() { _lcd_preheat(0, lcd_preheat_hotend_temp[0], -1, lcd_preheat_fan_speed[0]); }
    void lcd_preheat_m2_e0_only() { _lcd_preheat(0, lcd_preheat_hotend_temp[1], -1, lcd_preheat_fan_speed[1]); }
    #if TEMP_SENSOR_BED != 0
      void lcd_preheat_m1_e0() { _lcd_preheat(0, lcd_preheat_hotend_temp[0], lcd_preheat_bed_temp[0], lcd_preheat_fan_speed[0]); }
      void lcd_preheat_m2_e0() { _lcd_preheat(0, lcd_preheat_hotend_temp[1], lcd_preheat_bed_temp[1], lcd_preheat_fan_speed[1]); }
    #endif
  #endif

  #if HOTENDS > 1
    void lcd_preheat_m1_e1_only() { _lcd_preheat(1, lcd_preheat_hotend_temp[0], -1, lcd_preheat_fan_speed[0]); }
    void lcd_preheat_m2_e1_only() { _lcd_preheat(1, lcd_preheat_hotend_temp[1], -1, lcd_preheat_fan_speed[1]); }
    #if TEMP_SENSOR_BED != 0
      void lcd_preheat_m1_e1() { _lcd_preheat(1, lcd_preheat_hotend_temp[0], lcd_preheat_bed_temp[0], lcd_preheat_fan_speed[0]); }
      void lcd_preheat_m2_e1() { _lcd_preheat(1, lcd_preheat_hotend_temp[1], lcd_preheat_bed_temp[1], lcd_preheat_fan_speed[1]); }
    #endif
    #if HOTENDS > 2
      void lcd_preheat_m1_e2_only() { _lcd_preheat(2, lcd_preheat_hotend_temp[0], -1, lcd_preheat_fan_speed[0]); }
      void lcd_preheat_m2_e2_only() { _lcd_preheat(2, lcd_preheat_hotend_temp[1], -1, lcd_preheat_fan_speed[1]); }
      #if TEMP_SENSOR_BED != 0
        void lcd_preheat_m1_e2() { _lcd_preheat(2, lcd_preheat_hotend_temp[0], lcd_preheat_bed_temp[0], lcd_preheat_fan_speed[0]); }
        void lcd_preheat_m2_e2() { _lcd_preheat(2, lcd_preheat_hotend_temp[1], lcd_preheat_bed_temp[1], lcd_preheat_fan_speed[1]); }
      #endif
      #if HOTENDS > 3
        void lcd_preheat_m1_e3_only() { _lcd_preheat(3, lcd_preheat_hotend_temp[0], -1, lcd_preheat_fan_speed[0]); }
        void lcd_preheat_m2_e3_only() { _lcd_preheat(3, lcd_preheat_hotend_temp[1], -1, lcd_preheat_fan_speed[1]); }
        #if TEMP_SENSOR_BED != 0
          void lcd_preheat_m1_e3() { _lcd_preheat(3, lcd_preheat_hotend_temp[0], lcd_preheat_bed_temp[0], lcd_preheat_fan_speed[0]); }
          void lcd_preheat_m2_e3() { _lcd_preheat(3, lcd_preheat_hotend_temp[1], lcd_preheat_bed_temp[1], lcd_preheat_fan_speed[1]); }
        #endif
        #if HOTENDS > 4
          void lcd_preheat_m1_e4_only() { _lcd_preheat(4, lcd_preheat_hotend_temp[0], -1, lcd_preheat_fan_speed[0]); }
          void lcd_preheat_m2_e4_only() { _lcd_preheat(4, lcd_preheat_hotend_temp[1], -1, lcd_preheat_fan_speed[1]); }
          #if TEMP_SENSOR_BED != 0
            void lcd_preheat_m1_e4() { _lcd_preheat(4, lcd_preheat_hotend_temp[0], lcd_preheat_bed_temp[0], lcd_preheat_fan_speed[0]); }
            void lcd_preheat_m2_e4() { _lcd_preheat(4, lcd_preheat_hotend_temp[1], lcd_preheat_bed_temp[1], lcd_preheat_fan_speed[1]); }
          #endif
        #endif // HOTENDS > 4
      #endif // HOTENDS > 3
    #endif // HOTENDS > 2

    void lcd_preheat_m1_all() {
      #if HOTENDS > 1
        thermalManager.setTargetHotend(lcd_preheat_hotend_temp[0], 1);
        #if HOTENDS > 2
          thermalManager.setTargetHotend(lcd_preheat_hotend_temp[0], 2);
          #if HOTENDS > 3
            thermalManager.setTargetHotend(lcd_preheat_hotend_temp[0], 3);
            #if HOTENDS > 4
              thermalManager.setTargetHotend(lcd_preheat_hotend_temp[0], 4);
            #endif // HOTENDS > 4
          #endif // HOTENDS > 3
        #endif // HOTENDS > 2
      #endif // HOTENDS > 1
      #if TEMP_SENSOR_BED != 0
        lcd_preheat_m1_e0();
      #else
        lcd_preheat_m1_e0_only();
      #endif
    }
    void lcd_preheat_m2_all() {
      #if HOTENDS > 1
        thermalManager.setTargetHotend(lcd_preheat_hotend_temp[1], 1);
        #if HOTENDS > 2
          thermalManager.setTargetHotend(lcd_preheat_hotend_temp[1], 2);
          #if HOTENDS > 3
            thermalManager.setTargetHotend(lcd_preheat_hotend_temp[1], 3);
            #if HOTENDS > 4
              thermalManager.setTargetHotend(lcd_preheat_hotend_temp[1], 4);
            #endif // HOTENDS > 4
          #endif // HOTENDS > 3
        #endif // HOTENDS > 2
      #endif // HOTENDS > 1
      #if TEMP_SENSOR_BED != 0
        lcd_preheat_m2_e0();
      #else
        lcd_preheat_m2_e0_only();
      #endif
    }

  #endif // HOTENDS > 1

  #if TEMP_SENSOR_BED != 0
    void lcd_preheat_m1_bedonly() { _lcd_preheat(0, 0, lcd_preheat_bed_temp[0], lcd_preheat_fan_speed[0]); }
    void lcd_preheat_m2_bedonly() { _lcd_preheat(0, 0, lcd_preheat_bed_temp[1], lcd_preheat_fan_speed[1]); }
  #endif

  #if TEMP_SENSOR_0 != 0 && (TEMP_SENSOR_1 != 0 || TEMP_SENSOR_2 != 0 || TEMP_SENSOR_3 != 0 || TEMP_SENSOR_BED != 0)

    void lcd_preheat_m1_menu() {
      START_MENU();
      MENU_BACK(MSG_PREPARE);
      #if HOTENDS == 1
        #if TEMP_SENSOR_BED != 0
          MENU_ITEM(function, MSG_PREHEAT_1, lcd_preheat_m1_e0);
          MENU_ITEM(function, MSG_PREHEAT_1_END, lcd_preheat_m1_e0_only);
        #else
          MENU_ITEM(function, MSG_PREHEAT_1, lcd_preheat_m1_e0_only);
        #endif
      #else
        #if TEMP_SENSOR_BED != 0
          MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H1, lcd_preheat_m1_e0);
          MENU_ITEM(function, MSG_PREHEAT_1_END " " MSG_E1, lcd_preheat_m1_e0_only);
          MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H2, lcd_preheat_m1_e1);
          MENU_ITEM(function, MSG_PREHEAT_1_END " " MSG_E2, lcd_preheat_m1_e1_only);
        #else
          MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H1, lcd_preheat_m1_e0_only);
          MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H2, lcd_preheat_m1_e1_only);
        #endif
        #if HOTENDS > 2
          #if TEMP_SENSOR_BED != 0
            MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H3, lcd_preheat_m1_e2);
            MENU_ITEM(function, MSG_PREHEAT_1_END " " MSG_E3, lcd_preheat_m1_e2_only);
          #else
            MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H3, lcd_preheat_m1_e2_only);
          #endif
          #if HOTENDS > 3
            #if TEMP_SENSOR_BED != 0
              MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H4, lcd_preheat_m1_e3);
              MENU_ITEM(function, MSG_PREHEAT_1_END " " MSG_E4, lcd_preheat_m1_e3_only);
            #else
              MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H4, lcd_preheat_m1_e3_only);
            #endif
            #if HOTENDS > 4
              #if TEMP_SENSOR_BED != 0
                MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H5, lcd_preheat_m1_e4);
                MENU_ITEM(function, MSG_PREHEAT_1_END " " MSG_E5, lcd_preheat_m1_e4_only);
              #else
                MENU_ITEM(function, MSG_PREHEAT_1_N MSG_H5, lcd_preheat_m1_e4_only);
              #endif
            #endif // HOTENDS > 4
          #endif // HOTENDS > 3
        #endif // HOTENDS > 2
        MENU_ITEM(function, MSG_PREHEAT_1_ALL, lcd_preheat_m1_all);
      #endif // HOTENDS > 1
      #if TEMP_SENSOR_BED != 0
        MENU_ITEM(function, MSG_PREHEAT_1_BEDONLY, lcd_preheat_m1_bedonly);
      #endif
      END_MENU();
    }

    void lcd_preheat_m2_menu() {
      START_MENU();
      MENU_BACK(MSG_PREPARE);
      #if HOTENDS == 1
        #if TEMP_SENSOR_BED != 0
          MENU_ITEM(function, MSG_PREHEAT_2, lcd_preheat_m2_e0);
          MENU_ITEM(function, MSG_PREHEAT_2_END, lcd_preheat_m2_e0_only);
        #else
          MENU_ITEM(function, MSG_PREHEAT_2, lcd_preheat_m2_e0_only);
        #endif
      #else
        #if TEMP_SENSOR_BED != 0
          MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H1, lcd_preheat_m2_e0);
          MENU_ITEM(function, MSG_PREHEAT_2_END " " MSG_E1, lcd_preheat_m2_e0_only);
          MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H2, lcd_preheat_m2_e1);
          MENU_ITEM(function, MSG_PREHEAT_2_END " " MSG_E2, lcd_preheat_m2_e1_only);
        #else
          MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H1, lcd_preheat_m2_e0_only);
          MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H2, lcd_preheat_m2_e1_only);
        #endif
        #if HOTENDS > 2
          #if TEMP_SENSOR_BED != 0
            MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H3, lcd_preheat_m2_e2);
            MENU_ITEM(function, MSG_PREHEAT_2_END " " MSG_E3, lcd_preheat_m2_e2_only);
          #else
            MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H3, lcd_preheat_m2_e2_only);
          #endif
          #if HOTENDS > 3
            #if TEMP_SENSOR_BED != 0
              MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H4, lcd_preheat_m2_e3);
              MENU_ITEM(function, MSG_PREHEAT_2_END " " MSG_E4, lcd_preheat_m2_e3_only);
            #else
              MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H4, lcd_preheat_m2_e3_only);
            #endif
            #if HOTENDS > 4
              #if TEMP_SENSOR_BED != 0
                MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H5, lcd_preheat_m2_e4);
                MENU_ITEM(function, MSG_PREHEAT_2_END " " MSG_E5, lcd_preheat_m2_e4_only);
              #else
                MENU_ITEM(function, MSG_PREHEAT_2_N MSG_H5, lcd_preheat_m2_e4_only);
              #endif
            #endif // HOTENDS > 4
          #endif // HOTENDS > 3
        #endif // HOTENDS > 2
        MENU_ITEM(function, MSG_PREHEAT_2_ALL, lcd_preheat_m2_all);
      #endif // HOTENDS > 1
      #if TEMP_SENSOR_BED != 0
        MENU_ITEM(function, MSG_PREHEAT_2_BEDONLY, lcd_preheat_m2_bedonly);
      #endif
      END_MENU();
    }

  #endif // TEMP_SENSOR_0 && (TEMP_SENSOR_1 || TEMP_SENSOR_2 || TEMP_SENSOR_3 || TEMP_SENSOR_BED)

  void lcd_cooldown() {
    #if FAN_COUNT > 0
      for (uint8_t i = 0; i < FAN_COUNT; i++) fanSpeeds[i] = 0;
    #endif
    thermalManager.disable_all_heaters();
    lcd_return_to_status();
  }

  #if ENABLED(SDSUPPORT) && ENABLED(MENU_ADDAUTOSTART)

    void lcd_autostart_sd() {
      card.autostart_index = 0;
      card.setroot();
      card.checkautostart(true);
    }

  #endif

  #if ENABLED(LCD_BED_LEVELING)

    /**
     *
     * "Prepare" > "Level Bed" handlers
     *
     */

    static uint8_t manual_probe_index;

    #if ENABLED(PROBE_MANUALLY)
      extern bool g29_in_progress;
    #endif

    // LCD probed points are from defaults
    constexpr uint8_t total_probe_points =
      #if ABL_GRID
        (GRID_MAX_POINTS_X) * (GRID_MAX_POINTS_Y)
      #elif ENABLED(AUTO_BED_LEVELING_3POINT)
        int(3)
      #elif ENABLED(AUTO_BED_LEVELING_UBL)
        (GRID_MAX_POINTS_X) * (GRID_MAX_POINTS_Y)
      #elif ENABLED(MESH_BED_LEVELING)
        (GRID_MAX_POINTS_X) * (GRID_MAX_POINTS_Y)
      #endif
    ;

    #if ENABLED(MESH_BED_LEVELING)

      // Utility to go to the next mesh point
      inline void _manual_probe_goto_xy(float x, float y) {
        #if MANUAL_PROBE_HEIGHT > 0
          current_position[Z_AXIS] = LOGICAL_Z_POSITION(Z_MIN_POS) + MANUAL_PROBE_HEIGHT;
          line_to_current(Z_AXIS);
        #endif
        current_position[X_AXIS] = LOGICAL_X_POSITION(x);
        current_position[Y_AXIS] = LOGICAL_Y_POSITION(y);
        planner.buffer_line_kinematic(current_position, MMM_TO_MMS(XY_PROBE_SPEED), active_extruder);
        #if MANUAL_PROBE_HEIGHT > 0
          current_position[Z_AXIS] = LOGICAL_Z_POSITION(Z_MIN_POS) + 0.2;
          line_to_current(Z_AXIS);
        #endif
        lcd_synchronize();
      }

    #endif // MESH_BED_LEVELING

    #if ENABLED(MESH_BED_LEVELING) || ENABLED(PROBE_MANUALLY)
      void _lcd_level_goto_next_point();
    #endif

    void _lcd_level_bed_done() {
      if (lcdDrawUpdate) lcd_implementation_drawedit(PSTR(MSG_LEVEL_BED_DONE));
      lcdDrawUpdate = LCDVIEW_KEEP_REDRAWING;
    }

    /**
     * Step 6: Display "Next point: 1 / 9" while waiting for move to finish
     */
    void _lcd_level_bed_moving() {
      if (lcdDrawUpdate) {
        char msg[10];
        sprintf_P(msg, PSTR("%i / %u"), (int)(manual_probe_index + 1), total_probe_points);
        lcd_implementation_drawedit(PSTR(MSG_LEVEL_BED_NEXT_POINT), msg);
      }
      lcdDrawUpdate = LCDVIEW_KEEP_REDRAWING;
    }

    /**
     * Step 7: Get the Z coordinate, click goes to the next point or exits
     */
    void _lcd_level_bed_get_z() {
      ENCODER_DIRECTION_NORMAL();

      // Encoder wheel adjusts the Z position
      if (encoderPosition) {
        refresh_cmd_timeout();
        current_position[Z_AXIS] += float((int32_t)encoderPosition) * (MBL_Z_STEP);
        NOLESS(current_position[Z_AXIS], -(LCD_PROBE_Z_RANGE) * 0.5);
        NOMORE(current_position[Z_AXIS],  (LCD_PROBE_Z_RANGE) * 0.5);
        line_to_current(Z_AXIS);
        lcdDrawUpdate = LCDVIEW_KEEP_REDRAWING;
        encoderPosition = 0;
      }

      if (lcd_clicked) {

        // Use a hook to set the probe point z
        // (zigzag arranges in XY order)
        #if ENABLED(AUTO_BED_LEVELING_UBL)

          // UBL set-z handling goes here

        #elif ENABLED(PROBE_MANUALLY)

          // G29 helpfully records Z and goes to the next
          // point (or beeps if done)
          enqueue_and_echo_commands_P(PSTR("G29"));
          manual_probe_index++;

        #elif ENABLED(MESH_BED_LEVELING)

          mbl.set_zigzag_z(manual_probe_index++, current_position[Z_AXIS]);

        #endif

        // If done...
        if (manual_probe_index == total_probe_points) {

          // Say "Done!"
          lcd_goto_screen(_lcd_level_bed_done);

          // Raise Z to the "manual probe height"
          #if MANUAL_PROBE_HEIGHT > 0
            current_position[Z_AXIS] = LOGICAL_Z_POSITION(Z_MIN_POS) + MANUAL_PROBE_HEIGHT;
            line_to_current(Z_AXIS);
            lcd_synchronize();
          #endif

          // Enable leveling, if needed
          #if ENABLED(MESH_BED_LEVELING)

            lcd_synchronize();
            mbl.set_has_mesh(true);
            mesh_probing_done();

          #elif ENABLED(AUTO_BED_LEVELING_UBL)

            // UBL enable goes here

          #elif ENABLED(PROBE_MANUALLY)

            // ABL will be enabled due to "G29".

          #endif

          lcd_return_to_status();
          //LCD_MESSAGEPGM(MSG_LEVEL_BED_DONE);
          lcd_completion_feedback();
        }
        else {

          // Move to the next probe point, if needed
          #if ENABLED(MESH_BED_LEVELING) || ENABLED(PROBE_MANUALLY)

            _lcd_level_goto_next_point();

          #elif ENABLED(AUTO_BED_LEVELING_UBL)

            // UBL goto-next-point goes here

          #endif
        }
      }

      // Update on first display, then only on updates to Z position
      // Show message above on clicks instead
      if (lcdDrawUpdate) {
        const float v = current_position[Z_AXIS];
        lcd_implementation_drawedit(PSTR(MSG_MOVE_Z), ftostr43sign(v + (v < 0 ? -0.0001 : 0.0001), '+'));
      }
    }

    #if ENABLED(MESH_BED_LEVELING) || ENABLED(PROBE_MANUALLY)

      /**
       * Step 5: Initiate a move to the next point
       */
      void _lcd_level_goto_next_point() {

        // Set the menu to display ahead of blocking call
        lcd_goto_screen(_lcd_level_bed_moving);

        #if ENABLED(MESH_BED_LEVELING)

          int8_t px, py;
          mbl.zigzag(manual_probe_index, px, py);

          // Controls the loop until the move is done
          _manual_probe_goto_xy(
            LOGICAL_X_POSITION(mbl.index_to_xpos[px]),
            LOGICAL_Y_POSITION(mbl.index_to_ypos[py])
          );

        #elif ENABLED(AUTO_BED_LEVELING_UBL)

          // UBL may have its own methodology

        #elif ENABLED(PROBE_MANUALLY)

          // Just wait for the G29 move to complete
          lcd_synchronize();

        #endif

        // After the blocking function returns, change menus
        lcd_goto_screen(_lcd_level_bed_get_z);
      }

    #endif // MESH_BED_LEVELING

    /**
     * Step 4: Display "Click to Begin", wait for click
     *         Move to the first probe position
     */
    void _lcd_level_bed_homing_done() {
      if (lcdDrawUpdate) lcd_implementation_drawedit(PSTR(MSG_LEVEL_BED_WAITING));
      if (lcd_clicked) {
        manual_probe_index = 0;
        #if ENABLED(MESH_BED_LEVELING)
          _lcd_level_goto_next_point();
        #elif ENABLED(AUTO_BED_LEVELING_UBL)
          // UBL click handling should go here
        #elif ENABLED(PROBE_MANUALLY)
          enqueue_and_echo_commands_P(PSTR("G29"));
          _lcd_level_goto_next_point();
        #endif
      }
    }

    /**
     * Step 3: Display "Homing XYZ" - Wait for homing to finish
     */
    void _lcd_level_bed_homing() {
      if (lcdDrawUpdate) lcd_implementation_drawedit(PSTR(MSG_LEVEL_BED_HOMING), NULL);
      if (axis_homed[X_AXIS] && axis_homed[Y_AXIS] && axis_homed[Z_AXIS])
        lcd_goto_screen(_lcd_level_bed_homing_done);
      lcdDrawUpdate = LCDVIEW_KEEP_REDRAWING;
    }

  #endif // LCD_BED_LEVELING

  #if ENABLED(LCD_BED_LEVELING) || HAS_ABL

    /**
     * Step 2: Continue Bed Leveling...
     */
    void _lcd_level_bed_continue() {
      #if ENABLED(LCD_BED_LEVELING)
        defer_return_to_status = true;
        axis_homed[X_AXIS] = axis_homed[Y_AXIS] = axis_homed[Z_AXIS] = false;
        lcd_goto_screen(_lcd_level_bed_homing);
        enqueue_and_echo_commands_P(PSTR("G28"));
      #else
        lcd_return_to_status();
        enqueue_and_echo_commands_P(axis_homed[X_AXIS] && axis_homed[Y_AXIS] ? PSTR("G29") : PSTR("G28\nG29"));
      #endif
    }

    /**
     * Step 1: Bed Level entry-point: "Cancel" or "Level Bed"
     */
    void lcd_level_bed() {
      START_MENU();
      MENU_BACK(MSG_LEVEL_BED_CANCEL);
      MENU_ITEM(submenu, MSG_LEVEL_BED, _lcd_level_bed_continue);
      END_MENU();
    }

  #if ENABLED(AUTO_BED_LEVELING_UBL)

    void _lcd_ubl_level_bed();

    int UBL_STORAGE_SLOT = 0;
    int CUSTOM_BED_TEMP = 50;
    int CUSTOM_HOTEND_TEMP = 190;
    int SIDE_POINTS = 3;
    int UBL_FILLIN_AMOUNT = 5;
    int UBL_HEIGHT_AMOUNT;
    int map_type;

    char UBL_LCD_GCODE [30];

    
    /**
     * UBL Unhomed Error
     */
    void _lcd_ubl_unhomed_error() {
      START_MENU();
      MENU_BACK(MSG_UBL_UNHOMED);
      END_MENU();
    }

    /**
     * UBL Fill-in Amount Mesh Command
     */
    void _lcd_ubl_fillin_amount_cmd() {
      sprintf_P(UBL_LCD_GCODE, PSTR("G29 P3 R C.%i N"), UBL_FILLIN_AMOUNT);
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Mesh Tilting Command
     */
    void _lcd_ubl_mesh_level_cmd() {
      sprintf_P(UBL_LCD_GCODE, PSTR("G29 J%i"), SIDE_POINTS);
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Load Mesh Command
     */
    void _lcd_ubl_load_mesh() {
      sprintf_P(UBL_LCD_GCODE, PSTR("G29 N L%i"), UBL_STORAGE_SLOT);
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Save Mesh Command
     */
    void _lcd_ubl_save_mesh() {
      sprintf_P(UBL_LCD_GCODE, PSTR("G29 N S%i"), UBL_STORAGE_SLOT);
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Edit Custom Mesh Command
     */
    void _lcd_ubl_custom_edit_mesh() {
      if (axis_unhomed_error(true, true, true)) lcd_goto_screen(_lcd_ubl_unhomed_error);
      #if (WATCH_THE_BED)
        sprintf_P(UBL_LCD_GCODE, PSTR("G26 P B%i H%i C O3.5"), CUSTOM_BED_TEMP, CUSTOM_HOTEND_TEMP);
      #else
        sprintf_P(UBL_LCD_GCODE, PSTR("G26 P B0 H%i C O3.5"), CUSTOM_HOTEND_TEMP);
      #endif
      enqueue_and_echo_command(UBL_LCD_GCODE);
      enqueue_and_echo_command("G29 P4 R O");
    }

    /**
     * UBL Validate Custom Mesh Command
     */
    void _lcd_ubl_validate_custom_mesh() {
      if (axis_unhomed_error(true, true, true)) lcd_goto_screen(_lcd_ubl_unhomed_error);
      #if (WATCH_THE_BED)
        sprintf_P(UBL_LCD_GCODE, PSTR("G26 C B%i H%i P"), CUSTOM_BED_TEMP, CUSTOM_HOTEND_TEMP);
      #else
        sprintf_P(UBL_LCD_GCODE, PSTR("G26 C B0 H%i P"), CUSTOM_HOTEND_TEMP);
      #endif
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Build Custom Mesh Command
     */
    void _lcd_ubl_build_custom_mesh() {
      enqueue_and_echo_command("G28");
      #if (WATCH_THE_BED)
      sprintf_P(UBL_LCD_GCODE, PSTR("M190 S%i"), CUSTOM_BED_TEMP);
      enqueue_and_echo_command(UBL_LCD_GCODE);
      #endif
      sprintf_P(UBL_LCD_GCODE, PSTR("M109 S%i"), CUSTOM_HOTEND_TEMP);
      enqueue_and_echo_command(UBL_LCD_GCODE);
      enqueue_and_echo_command("G29 P1");
    }

    /**
     * UBL Custom Mesh submenu
     */
    void _lcd_ubl_custom_mesh() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM_EDIT(int3, MSG_UBL_CUSTOM_HOTEND_TEMP, &CUSTOM_HOTEND_TEMP, EXTRUDE_MINTEMP, (HEATER_0_MAXTEMP - 10));
      #if (WATCH_THE_BED)
      MENU_ITEM_EDIT(int3, MSG_UBL_CUSTOM_BED_TEMP, &CUSTOM_BED_TEMP, BED_MINTEMP, (BED_MAXTEMP - 5));
      #endif
      MENU_ITEM(function, MSG_UBL_BUILD_CUSTOM_MESH, _lcd_ubl_build_custom_mesh);
      END_MENU();
    }

    /**
     * UBL Adjust Mesh Height Command
     */
    void _lcd_ubl_adjust_height_cmd() {
      if (UBL_HEIGHT_AMOUNT < 0) {
        // Convert to positive for the `sprintf_P` string.
        UBL_HEIGHT_AMOUNT = (UBL_HEIGHT_AMOUNT - (UBL_HEIGHT_AMOUNT + UBL_HEIGHT_AMOUNT)); // Convert to positive
        sprintf_P(UBL_LCD_GCODE, PSTR("G29 N Z-.%i"), UBL_HEIGHT_AMOUNT);
        // Convert back to negative to preserve the user setting.
        UBL_HEIGHT_AMOUNT = (UBL_HEIGHT_AMOUNT - (UBL_HEIGHT_AMOUNT + UBL_HEIGHT_AMOUNT)); // Convert back to negative
      }
      else {
        sprintf_P(UBL_LCD_GCODE, PSTR("G29 N Z.%i"), UBL_HEIGHT_AMOUNT);
      }
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Adjust Mesh Height submenu
     */
    void _lcd_ubl_height_adjust_menu() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM_EDIT(int3, MSG_UBL_MESH_HEIGHT_AMOUNT, &UBL_HEIGHT_AMOUNT, -9, 9);
      MENU_ITEM(function, MSG_UBL_MESH_HEIGHT_ADJUST, _lcd_ubl_adjust_height_cmd);
      END_MENU();
    }

    /**
     * UBL Edit Mesh submenu
     */
    void _lcd_ubl_edit_mesh() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      #if (WATCH_THE_BED)
        MENU_ITEM(gcode, MSG_UBL_PLA_EDIT_MESH, PSTR("G28\nG26 P B" STRINGIFY(PREHEAT_1_TEMP_BED)
          " H" STRINGIFY(PREHEAT_1_TEMP_HOTEND) " C O3.5\nG29 P4 R O"));
        MENU_ITEM(gcode, MSG_UBL_ABS_EDIT_MESH, PSTR("G28\nG26 P B" STRINGIFY(PREHEAT_2_TEMP_BED)
          " H" STRINGIFY(PREHEAT_2_TEMP_HOTEND) " C O3.5\nG29 P4 R O"));
      #else
        MENU_ITEM(gcode, MSG_UBL_PLA_EDIT_MESH, PSTR("G28\nG26 P B0 H" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
          " C O3.5\nG29 P4 R O"));
        MENU_ITEM(gcode, MSG_UBL_ABS_EDIT_MESH, PSTR("G28\nG26 P B0 H" STRINGIFY(PREHEAT_2_TEMP_HOTEND)
          " C O3.5\nG29 P4 R O"));
      #endif
      MENU_ITEM(function, MSG_UBL_EDIT_CUSTOM_MESH, _lcd_ubl_custom_edit_mesh);
      MENU_ITEM(submenu, MSG_UBL_MESH_HEIGHT_ADJUST, _lcd_ubl_height_adjust_menu);
      END_MENU();
    }

    /**
     * UBL Validate Mesh submenu
     */
    void _lcd_ubl_validate_mesh() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      #if (WATCH_THE_BED)
        MENU_ITEM(gcode, MSG_UBL_VALIDATE_PLA_MESH, PSTR("G28\nG26 C B" STRINGIFY(PREHEAT_1_TEMP_BED)
          " H" STRINGIFY(PREHEAT_1_TEMP_HOTEND) " P"));
        MENU_ITEM(gcode, MSG_UBL_VALIDATE_ABS_MESH, PSTR("G28\nG26 C B" STRINGIFY(PREHEAT_2_TEMP_BED)
          " H" STRINGIFY(PREHEAT_2_TEMP_HOTEND) " P"));
      #else
        MENU_ITEM(gcode, MSG_UBL_VALIDATE_PLA_MESH, PSTR("G28\nG26 C B0 H" STRINGIFY(PREHEAT_1_TEMP_HOTEND) " P"));
        MENU_ITEM(gcode, MSG_UBL_VALIDATE_ABS_MESH, PSTR("G28\nG26 C B0 H" STRINGIFY(PREHEAT_2_TEMP_HOTEND) " P"));
      #endif
      MENU_ITEM(function, MSG_UBL_VALIDATE_CUSTOM_MESH, _lcd_ubl_validate_custom_mesh);
      END_MENU();
    }

    /**
     * UBL Mesh Leveling submenu
     */
    void _lcd_ubl_mesh_leveling() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM(gcode, MSG_UBL_3POINT_MESH_LEVELING, PSTR("G29 T"));
      STATIC_ITEM(MSG_UBL_GRID_MESH_LEVELING, true);
      MENU_ITEM_EDIT(int3, MSG_UBL_SIDE_POINTS, &SIDE_POINTS, 2, 6);
      MENU_ITEM(function, MSG_UBL_MESH_LEVEL, _lcd_ubl_mesh_level_cmd);
      END_MENU();
    }

    /**
     * UBL Smart Fill-in Command
     */
    void _lcd_ubl_smart_fillin_cmd() {
      sprintf_P(UBL_LCD_GCODE, PSTR("G29 P3 N O%i"), map_type);
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Fill-in Mesh submenu
     */
    void _lcd_ubl_fillin_menu() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM_EDIT(int3, MSG_UBL_FILLIN_AMOUNT, &UBL_FILLIN_AMOUNT, 0, 9);
      MENU_ITEM(function, MSG_UBL_FILLIN_MESH, _lcd_ubl_fillin_amount_cmd);
      MENU_ITEM(function, MSG_UBL_SMART_FILLIN, _lcd_ubl_smart_fillin_cmd);
      END_MENU();
    }

    /**
     * UBL Build Mesh submenu
     */
    void _lcd_ubl_build_mesh() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      #if (WATCH_THE_BED)
        MENU_ITEM(gcode, MSG_UBL_BUILD_PLA_MESH, PSTR("G28\nM190 S" STRINGIFY(PREHEAT_1_TEMP_BED)
          "\nM109 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND) "\nG29 P1\nM104 S0\nM140 S0"));
        MENU_ITEM(gcode, MSG_UBL_BUILD_ABS_MESH, PSTR("G28\nM190 S" STRINGIFY(PREHEAT_1_TEMP_BED)
          "\nM109 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND) "\nG29 P1\nM104 S0\nM140 S0"));
      #else
        MENU_ITEM(gcode, MSG_UBL_BUILD_PLA_MESH, PSTR("G28\nM109 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
          "\nG29 P1\nM104 S0"));
        MENU_ITEM(gcode, MSG_UBL_BUILD_ABS_MESH, PSTR("G28\nM109 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
          "\nG29 P1\nM104 S0"));
      #endif
      MENU_ITEM(submenu, MSG_UBL_BUILD_CUSTOM_MESH, _lcd_ubl_custom_mesh);
      MENU_ITEM(gcode, MSG_UBL_BUILD_COLD_MESH, PSTR("G28\nG29 P1"));
      MENU_ITEM(submenu, MSG_UBL_FILLIN_MENU, _lcd_ubl_fillin_menu);
      MENU_ITEM(gcode, MSG_UBL_CONTINUE_MESH, PSTR("G29 P1 C"));
      END_MENU();
    }

    /**
     * UBL Mesh Storage submenu
     */
    void _lcd_ubl_storage_mesh() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM_EDIT(int3, MSG_UBL_STORAGE_SLOT, &UBL_STORAGE_SLOT, 0, 9);
      MENU_ITEM(function, MSG_UBL_LOAD_MESH, _lcd_ubl_load_mesh);
      MENU_ITEM(function, MSG_UBL_SAVE_MESH, _lcd_ubl_save_mesh);
      END_MENU();
    }

    /**
     * UBL Output map Command
     */
    void _lcd_ubl_output_map_cmd() {
      sprintf_P(UBL_LCD_GCODE, PSTR("G29 N O%i"), map_type);
      enqueue_and_echo_command(UBL_LCD_GCODE);
    }

    /**
     * UBL Output map submenu
     */
    void _lcd_ubl_output_map() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM_EDIT(int3, MSG_UBL_MAP_TYPE, &map_type, 0, 1);
      if (map_type == 0) MENU_ITEM(function, MSG_UBL_OUTPUT_MAP_HOST, _lcd_ubl_output_map_cmd);
      if (map_type == 1) MENU_ITEM(function, MSG_UBL_OUTPUT_MAP_CSV, _lcd_ubl_output_map_cmd);
      END_MENU();
    }

    /**
     * UBL Tools submenu
     */
    void _lcd_ubl_tools_menu() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM(submenu, MSG_UBL_BUILD_MESH_MENU, _lcd_ubl_build_mesh);
      MENU_ITEM(submenu, MSG_UBL_VALIDATE_MESH_MENU, _lcd_ubl_validate_mesh);
      MENU_ITEM(submenu, MSG_UBL_EDIT_MESH_MENU, _lcd_ubl_edit_mesh);
      MENU_ITEM(submenu, MSG_UBL_MESH_LEVELING, _lcd_ubl_mesh_leveling);
      END_MENU();
    }

    /**
     * UBL System submenu
     * 
     *  Prepare
     * - Unified Bed Leveling
     *   - Activate UBL
     *   - Deativate UBL
     *   - Mesh Storage
     *       Memory Slot:
     *       Load Bed Mesh
     *       Save Bed Mesh
     *   - Output Map
     *       Map Type:
     *       Output Bed Mesh Host / Output Bed Mesh CSV
     *   - UBL Tools
     *     - Build Mesh
     *         Build PLA Mesh
     *         Build ABS Mesh
     *       - Build Custom Mesh
     *           Hotend Temp:
     *           Bed Temp:
     *           Build Custom Mesh
     *       - Build Cold Mesh
     *       - Fill-in NANs
     *           Fill-in Mesh
     *           Smart Fill-in
     *         Continue Bed Mesh
     *     - Validate Mesh
     *         PLA Mesh Validation
     *         ABS Mesh Validation
     *       - Custom Mesh Validation
     *           Hotend Temp:
     *           Bed Temp:
     *           Validate Mesh
     *     - Edit Mesh
     *         Edit PLA Mesh
     *         Edit ABS Mesh
     *       - Edit Custom Mesh
     *           Hotend Temp:
     *           Bed Temp:
     *           Edit Mesh
     *       - Adjust Mesh Height
     *           Height Amount:
     *           Adjust Mesh Height
     *     - Mesh Leveling
     *         3-Point Mesh Leveling
     *       - Grid Mesh Leveling
     *           Side points:
     *           Level Mesh
     */

    void _lcd_ubl_level_bed() {
      START_MENU();
      MENU_BACK(MSG_UBL_LEVEL_BED);
      MENU_ITEM(gcode, MSG_UBL_ACTIVATE_MESH, PSTR("G29 A N"));
      MENU_ITEM(gcode, MSG_UBL_DEACTIVATE_MESH, PSTR("G29 D N"));
      MENU_ITEM(submenu, MSG_UBL_STORAGE_MESH_MENU, _lcd_ubl_storage_mesh);
      MENU_ITEM(submenu, MSG_UBL_OUTPUT_MAP, _lcd_ubl_output_map);
      MENU_ITEM(submenu, MSG_UBL_TOOLS, _lcd_ubl_tools_menu);
      MENU_ITEM(gcode, MSG_UBL_INFO_UBL, PSTR("G29 W N"));
      END_MENU();
    }
  #endif

  #endif // LCD_BED_LEVELING || HAS_ABL

  /**
   *
   * "Prepare" submenu
   *
   */

  void lcd_prepare_menu() {
    START_MENU();

    //
    // ^ Main
    //
    MENU_BACK(MSG_MAIN);

    //
    // Move Axis
    //
    #if ENABLED(DELTA)
      if (axis_homed[Z_AXIS])
    #endif
        MENU_ITEM(submenu, MSG_MOVE_AXIS, lcd_move_menu);

    //
    // Auto Home
    //
    MENU_ITEM(gcode, MSG_AUTO_HOME, PSTR("G28"));
    #if ENABLED(INDIVIDUAL_AXIS_HOMING_MENU)
      MENU_ITEM(gcode, MSG_AUTO_HOME_X, PSTR("G28 X"));
      MENU_ITEM(gcode, MSG_AUTO_HOME_Y, PSTR("G28 Y"));
      MENU_ITEM(gcode, MSG_AUTO_HOME_Z, PSTR("G28 Z"));
    #endif

    //
    // Level Bed
    //
    #if ENABLED(LCD_BED_LEVELING) || HAS_ABL

      #if ENABLED(PROBE_MANUALLY)
        if (!g29_in_progress)
      #endif
      #if ENABLED(AUTO_BED_LEVELING_UBL)
        MENU_ITEM(submenu, MSG_UBL_LEVEL_BED, _lcd_ubl_level_bed);
      #else
        MENU_ITEM(submenu, MSG_LEVEL_BED, lcd_level_bed);
      #endif

    #endif

    #if HAS_M206_COMMAND
      //
      // Set Home Offsets
      //
      MENU_ITEM(function, MSG_SET_HOME_OFFSETS, lcd_set_home_offsets);
      //MENU_ITEM(gcode, MSG_SET_ORIGIN, PSTR("G92 X0 Y0 Z0"));
    #endif

    //
    // Disable Steppers
    //
    MENU_ITEM(gcode, MSG_DISABLE_STEPPERS, PSTR("M84"));

    //
    // Preheat PLA
    // Preheat ABS
    //
    #if TEMP_SENSOR_0 != 0

      //
      // Change filament
      //
      #if ENABLED(FILAMENT_CHANGE_FEATURE)
        if (!thermalManager.tooColdToExtrude(active_extruder))
          MENU_ITEM(function, MSG_FILAMENTCHANGE, lcd_enqueue_filament_change);
      #endif

      //
      // Cooldown
      //
      bool has_heat = false;
      HOTEND_LOOP() if (thermalManager.target_temperature[HOTEND_INDEX]) { has_heat = true; break; }
      #if HAS_TEMP_BED
        if (thermalManager.target_temperature_bed) has_heat = true;
      #endif
      if (has_heat) MENU_ITEM(function, MSG_COOLDOWN, lcd_cooldown);

      //
      // Preheat for Material 1 and 2
      //
      #if TEMP_SENSOR_1 != 0 || TEMP_SENSOR_2 != 0 || TEMP_SENSOR_3 != 0 || TEMP_SENSOR_BED != 0
        MENU_ITEM(submenu, MSG_PREHEAT_1, lcd_preheat_m1_menu);
        MENU_ITEM(submenu, MSG_PREHEAT_2, lcd_preheat_m2_menu);
      #else
        MENU_ITEM(function, MSG_PREHEAT_1, lcd_preheat_m1_e0_only);
        MENU_ITEM(function, MSG_PREHEAT_2, lcd_preheat_m2_e0_only);
      #endif

    #endif // TEMP_SENSOR_0 != 0

    //
    // BLTouch Self-Test and Reset
    //
    #if ENABLED(BLTOUCH)
      MENU_ITEM(gcode, MSG_BLTOUCH_SELFTEST, PSTR("M280 P" STRINGIFY(Z_ENDSTOP_SERVO_NR) " S" STRINGIFY(BLTOUCH_SELFTEST)));
      if (!endstops.z_probe_enabled && TEST_BLTOUCH())
        MENU_ITEM(gcode, MSG_BLTOUCH_RESET, PSTR("M280 P" STRINGIFY(Z_ENDSTOP_SERVO_NR) " S" STRINGIFY(BLTOUCH_RESET)));
    #endif

    //
    // Switch power on/off
    //
    #if HAS_POWER_SWITCH
      if (powersupply)
        MENU_ITEM(gcode, MSG_SWITCH_PS_OFF, PSTR("M81"));
      else
        MENU_ITEM(gcode, MSG_SWITCH_PS_ON, PSTR("M80"));
    #endif

    //
    // Autostart
    //
    #if ENABLED(SDSUPPORT) && ENABLED(MENU_ADDAUTOSTART)
      MENU_ITEM(function, MSG_AUTOSTART, lcd_autostart_sd);
    #endif

    END_MENU();
  }

  float move_menu_scale;

  #if ENABLED(DELTA_CALIBRATION_MENU)

    void lcd_move_z();
    void lcd_delta_calibrate_menu();

    void _lcd_calibrate_homing() {
      if (lcdDrawUpdate) lcd_implementation_drawmenu_static(LCD_HEIGHT >= 4 ? 1 : 0, PSTR(MSG_LEVEL_BED_HOMING));
      lcdDrawUpdate = LCDVIEW_KEEP_REDRAWING;
      if (axis_homed[X_AXIS] && axis_homed[Y_AXIS] && axis_homed[Z_AXIS])
        lcd_goto_previous_menu();
    }

    void _lcd_delta_calibrate_home() {
      enqueue_and_echo_commands_P(PSTR("G28"));
      lcd_goto_screen(_lcd_calibrate_homing);
    }

    // Move directly to the tower position with uninterpolated moves
    // If we used interpolated moves it would cause this to become re-entrant
    void _goto_tower_pos(const float &a) {
      current_position[Z_AXIS] = max(Z_HOMING_HEIGHT, Z_CLEARANCE_BETWEEN_PROBES) + (DELTA_PRINTABLE_RADIUS) / 5;
      line_to_current(Z_AXIS);

      current_position[X_AXIS] = a < 0 ? LOGICAL_X_POSITION(X_HOME_POS) : cos(RADIANS(a)) * delta_calibration_radius;
      current_position[Y_AXIS] = a < 0 ? LOGICAL_Y_POSITION(Y_HOME_POS) : sin(RADIANS(a)) * delta_calibration_radius;
      line_to_current(Z_AXIS);

      current_position[Z_AXIS] = 4.0;
      line_to_current(Z_AXIS);

      lcd_synchronize();

      move_menu_scale = 0.1;
      lcd_goto_screen(lcd_move_z);
    }

    void _goto_tower_x() { _goto_tower_pos(210); }
    void _goto_tower_y() { _goto_tower_pos(330); }
    void _goto_tower_z() { _goto_tower_pos(90); }
    void _goto_center()  { _goto_tower_pos(-1); }

    void lcd_delta_calibrate_menu() {
      START_MENU();
      MENU_BACK(MSG_MAIN);
      #if ENABLED(DELTA_AUTO_CALIBRATION)
        MENU_ITEM(gcode, MSG_DELTA_AUTO_CALIBRATE, PSTR("G33"));
        MENU_ITEM(gcode, MSG_DELTA_HEIGHT_CALIBRATE, PSTR("G33 P1 A"));
      #endif
      MENU_ITEM(submenu, MSG_AUTO_HOME, _lcd_delta_calibrate_home);
      if (axis_homed[Z_AXIS]) {
        MENU_ITEM(submenu, MSG_DELTA_CALIBRATE_X, _goto_tower_x);
        MENU_ITEM(submenu, MSG_DELTA_CALIBRATE_Y, _goto_tower_y);
        MENU_ITEM(submenu, MSG_DELTA_CALIBRATE_Z, _goto_tower_z);
        MENU_ITEM(submenu, MSG_DELTA_CALIBRATE_CENTER, _goto_center);
      }
      END_MENU();
    }

  #endif // DELTA_CALIBRATION_MENU

  /**
   * If the most recent manual move hasn't been fed to the planner yet,
   * and the planner can accept one, send immediately
   */
  inline void manage_manual_move() {
    if (manual_move_axis != (int8_t)NO_AXIS && ELAPSED(millis(), manual_move_start_time) && !planner.is_full()) {
      planner.buffer_line_kinematic(current_position, MMM_TO_MMS(manual_feedrate_mm_m[manual_move_axis]), manual_move_e_index);
      manual_move_axis = (int8_t)NO_AXIS;
    }
  }

  /**
   * Set a flag that lcd_update() should start a move
   * to "current_position" after a short delay.
   */
  inline void manual_move_to_current(AxisEnum axis
    #if E_MANUAL > 1
      , int8_t eindex=-1
    #endif
  ) {
    #if E_MANUAL > 1
      if (axis == E_AXIS) manual_move_e_index = eindex >= 0 ? eindex : active_extruder;
    #endif
    manual_move_start_time = millis() + (move_menu_scale < 0.99 ? 0UL : 250UL); // delay for bigger moves
    manual_move_axis = (int8_t)axis;
  }

  /**
   *
   * "Prepare" > "Move Axis" submenu
   *
   */

  void _lcd_move_xyz(const char* name, AxisEnum axis) {
    if (lcd_clicked) { return lcd_goto_previous_menu(); }
    ENCODER_DIRECTION_NORMAL();
    if (encoderPosition) {
      refresh_cmd_timeout();

      float min = current_position[axis] - 1000,
            max = current_position[axis] + 1000;

      #if HAS_SOFTWARE_ENDSTOPS
        // Limit to software endstops, if enabled
        if (soft_endstops_enabled) {
          #if ENABLED(MIN_SOFTWARE_ENDSTOPS)
            min = soft_endstop_min[axis];
          #endif
          #if ENABLED(MAX_SOFTWARE_ENDSTOPS)
            max = soft_endstop_max[axis];
          #endif
        }
      #endif

      // Get the new position
      current_position[axis] += float((int32_t)encoderPosition) * move_menu_scale;

      // Delta limits XY based on the current offset from center
      // This assumes the center is 0,0
      #if ENABLED(DELTA)
        if (axis != Z_AXIS) {
          max = sqrt(sq((float)(DELTA_PRINTABLE_RADIUS)) - sq(current_position[Y_AXIS - axis]));
          min = -max;
        }
      #endif

      // Limit only when trying to move towards the limit
      if ((int32_t)encoderPosition < 0) NOLESS(current_position[axis], min);
      if ((int32_t)encoderPosition > 0) NOMORE(current_position[axis], max);

      manual_move_to_current(axis);

      encoderPosition = 0;
      lcdDrawUpdate = LCDVIEW_REDRAW_NOW;
    }
    if (lcdDrawUpdate) lcd_implementation_drawedit(name, ftostr41sign(current_position[axis]));
  }
  void lcd_move_x() { _lcd_move_xyz(PSTR(MSG_MOVE_X), X_AXIS); }
  void lcd_move_y() { _lcd_move_xyz(PSTR(MSG_MOVE_Y), Y_AXIS); }
  void lcd_move_z() { _lcd_move_xyz(PSTR(MSG_MOVE_Z), Z_AXIS); }
  void _lcd_move_e(
    #if E_MANUAL > 1
      int8_t eindex=-1
    #endif
  ) {
    if (lcd_clicked) { return lcd_goto_previous_menu(); }
    ENCODER_DIRECTION_NORMAL();
    if (encoderPosition) {
      current_position[E_AXIS] += float((int32_t)encoderPosition) * move_menu_scale;
      encoderPosition = 0;
      manual_move_to_current(E_AXIS
        #if E_MANUAL > 1
          , eindex
        #endif
      );
      lcdDrawUpdate = LCDVIEW_REDRAW_NOW;
    }
    if (lcdDrawUpdate) {
      PGM_P pos_label;
      #if E_MANUAL == 1
        pos_label = PSTR(MSG_MOVE_E);
      #else
        switch (eindex) {
          default: pos_label = PSTR(MSG_MOVE_E MSG_MOVE_E1); break;
          case 1: pos_label = PSTR(MSG_MOVE_E MSG_MOVE_E2); break;
          #if E_MANUAL > 2
            case 2: pos_label = PSTR(MSG_MOVE_E MSG_MOVE_E3); break;
            #if E_MANUAL > 3
              case 3: pos_label = PSTR(MSG_MOVE_E MSG_MOVE_E4); break;
              #if E_MANUAL > 4
                case 4: pos_label = PSTR(MSG_MOVE_E MSG_MOVE_E5); break;
              #endif // E_MANUAL > 4
            #endif // E_MANUAL > 3
          #endif // E_MANUAL > 2
        }
      #endif // E_MANUAL > 1
      lcd_implementation_drawedit(pos_label, ftostr41sign(current_position[E_AXIS]));
    }
  }

  void lcd_move_e() { _lcd_move_e(); }
  #if E_MANUAL > 1
    void lcd_move_e0() { _lcd_move_e(0); }
    void lcd_move_e1() { _lcd_move_e(1); }
    #if E_MANUAL > 2
      void lcd_move_e2() { _lcd_move_e(2); }
      #if E_MANUAL > 3
        void lcd_move_e3() { _lcd_move_e(3); }
        #if E_MANUAL > 4
          void lcd_move_e4() { _lcd_move_e(4); }
        #endif // E_MANUAL > 4
      #endif // E_MANUAL > 3
    #endif // E_MANUAL > 2
  #endif // E_MANUAL > 1

  /**
   *
   * "Prepare" > "Move Xmm" > "Move XYZ" submenu
   *
   */

  screenFunc_t _manual_move_func_ptr;

  void lcd_move_menu_10mm() { move_menu_scale = 10.0; lcd_goto_screen(_manual_move_func_ptr); }
  void lcd_move_menu_1mm()  { move_menu_scale =  1.0; lcd_goto_screen(_manual_move_func_ptr); }
  void lcd_move_menu_01mm() { move_menu_scale =  0.1; lcd_goto_screen(_manual_move_func_ptr); }

  void _lcd_move_distance_menu(AxisEnum axis, screenFunc_t func) {
    _manual_move_func_ptr = func;
    START_MENU();
    if (LCD_HEIGHT >= 4) {
      switch(axis) {
        case X_AXIS:
          STATIC_ITEM(MSG_MOVE_X, true, true); break;
        case Y_AXIS:
          STATIC_ITEM(MSG_MOVE_Y, true, true); break;
        case Z_AXIS:
          STATIC_ITEM(MSG_MOVE_Z, true, true); break;
        default:
          STATIC_ITEM(MSG_MOVE_E, true, true); break;
      }
    }
    MENU_BACK(MSG_MOVE_AXIS);
    MENU_ITEM(submenu, MSG_MOVE_10MM, lcd_move_menu_10mm);
    MENU_ITEM(submenu, MSG_MOVE_1MM, lcd_move_menu_1mm);
    MENU_ITEM(submenu, MSG_MOVE_01MM, lcd_move_menu_01mm);
    END_MENU();
  }
  void lcd_move_get_x_amount()        { _lcd_move_distance_menu(X_AXIS, lcd_move_x); }
  void lcd_move_get_y_amount()        { _lcd_move_distance_menu(Y_AXIS, lcd_move_y); }
  void lcd_move_get_z_amount()        { _lcd_move_distance_menu(Z_AXIS, lcd_move_z); }
  void lcd_move_get_e_amount()        { _lcd_move_distance_menu(E_AXIS, lcd_move_e); }
  #if E_MANUAL > 1
    void lcd_move_get_e0_amount()     { _lcd_move_distance_menu(E_AXIS, lcd_move_e0); }
    void lcd_move_get_e1_amount()     { _lcd_move_distance_menu(E_AXIS, lcd_move_e1); }
    #if E_MANUAL > 2
      void lcd_move_get_e2_amount()   { _lcd_move_distance_menu(E_AXIS, lcd_move_e2); }
      #if E_MANUAL > 3
        void lcd_move_get_e3_amount() { _lcd_move_distance_menu(E_AXIS, lcd_move_e3); }
        #if E_MANUAL > 4
          void lcd_move_get_e4_amount() { _lcd_move_distance_menu(E_AXIS, lcd_move_e4); }
        #endif // E_MANUAL > 4
      #endif // E_MANUAL > 3
    #endif // E_MANUAL > 2
  #endif // E_MANUAL > 1

  /**
   *
   * "Prepare" > "Move Axis" submenu
   *
   */

  #if IS_KINEMATIC
    #define _MOVE_XYZ_ALLOWED (axis_homed[X_AXIS] && axis_homed[Y_AXIS] && axis_homed[Z_AXIS])
    #if ENABLED(DELTA)
      #define _MOVE_XY_ALLOWED (current_position[Z_AXIS] <= delta_clip_start_height)
      void lcd_lower_z_to_clip_height() {
        current_position[Z_AXIS] = delta_clip_start_height;
        line_to_current(Z_AXIS);
        lcd_synchronize();
      }
    #else
      #define _MOVE_XY_ALLOWED true
    #endif
  #else
    #define _MOVE_XYZ_ALLOWED true
    #define _MOVE_XY_ALLOWED true
  #endif

  void lcd_move_menu() {
    START_MENU();
    MENU_BACK(MSG_PREPARE);

    if (_MOVE_XYZ_ALLOWED) {
      if (_MOVE_XY_ALLOWED) {
        MENU_ITEM(submenu, MSG_MOVE_X, lcd_move_get_x_amount);
        MENU_ITEM(submenu, MSG_MOVE_Y, lcd_move_get_y_amount);
      }
      #if ENABLED(DELTA)
        else
          MENU_ITEM(function, MSG_FREE_XY, lcd_lower_z_to_clip_height);
      #endif

      MENU_ITEM(submenu, MSG_MOVE_Z, lcd_move_get_z_amount);
    }
    else
      MENU_ITEM(gcode, MSG_AUTO_HOME, PSTR("G28"));

    #if ENABLED(SWITCHING_EXTRUDER)
      if (active_extruder)
        MENU_ITEM(gcode, MSG_SELECT " " MSG_E1, PSTR("T0"));
      else
        MENU_ITEM(gcode, MSG_SELECT " " MSG_E2, PSTR("T1"));
    #endif

    MENU_ITEM(submenu, MSG_MOVE_E, lcd_move_get_e_amount);
    #if E_MANUAL > 1
      MENU_ITEM(submenu, MSG_MOVE_E MSG_MOVE_E1, lcd_move_get_e0_amount);
      MENU_ITEM(submenu, MSG_MOVE_E MSG_MOVE_E2, lcd_move_get_e1_amount);
      #if E_MANUAL > 2
        MENU_ITEM(submenu, MSG_MOVE_E MSG_MOVE_E3, lcd_move_get_e2_amount);
        #if E_MANUAL > 3
          MENU_ITEM(submenu, MSG_MOVE_E MSG_MOVE_E4, lcd_move_get_e3_amount);
          #if E_MANUAL > 4
            MENU_ITEM(submenu, MSG_MOVE_E MSG_MOVE_E5, lcd_move_get_e4_amount);
          #endif // E_MANUAL > 4
        #endif // E_MANUAL > 3
      #endif // E_MANUAL > 2
    #endif // E_MANUAL > 1

    END_MENU();
  }

  /**
   *
   * "Control" submenu
   *
   */

  #if ENABLED(EEPROM_SETTINGS)
    static void lcd_store_settings()   { lcd_completion_feedback(settings.save()); }
    static void lcd_load_settings()    { lcd_completion_feedback(settings.load()); }
  #endif

  static void lcd_factory_settings() {
    settings.reset();
    lcd_completion_feedback();
  }

  void lcd_control_menu() {
    START_MENU();
    MENU_BACK(MSG_MAIN);
    MENU_ITEM(submenu, MSG_TEMPERATURE, lcd_control_temperature_menu);
    MENU_ITEM(submenu, MSG_MOTION, lcd_control_motion_menu);
    MENU_ITEM(subme