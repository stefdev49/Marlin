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

// 16 is 100K thermistor - Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma.Fr version (measured/tested/approved)
const short temptable_16[][2] PROGMEM = {
     {5*OVERSAMPLENR,320},
     {6*OVERSAMPLENR,310},
     {7*OVERSAMPLENR,300},
     {8*OVERSAMPLENR,295},
     {10*OVERSAMPLENR,285},
     {11*OVERSAMPLENR,280},
     {12*OVERSAMPLENR,275},
     {16*OVERSAMPLENR,265},
     {20*OVERSAMPLENR,254},
     {22*OVERSAMPLENR,250},
     {29*OVERSAMPLENR,240},
     {36*OVERSAMPLENR,230},
     {45*OVERSAMPLENR,222},
     {48*OVERSAMPLENR,215},
     {52*OVERSAMPLENR,208},
     {72*OVERSAMPLENR,202},
     {75*OVERSAMPLENR,196},
     {86*OVERSAMPLENR,192},
     {89*OVERSAMPLENR,188},
     {106*OVERSAMPLENR,182},
     {120*OVERSAMPLENR,174},
     {131*OVERSAMPLENR,170},
     {143*OVERSAMPLENR,166},
     {152*OVERSAMPLENR,162},
     {168*OVERSAMPLENR,158},
     {184*OVERSAMPLENR,153},
     {203*OVERSAMPLENR,150},
     {221*OVERSAMPLENR,145},
     {240*OVERSAMPLENR,143},
     {288*OVERSAMPLENR,134},
     {343*OVERSAMPLENR,125},
     {404*OVERSAMPLENR,116},
     {479*OVERSAMPLENR,107},
     {553*OVERSAMPLENR,98},
     {629*OVERSAMPLENR,89},
     {710*OVERSAMPLENR,78},
     {781*OVERSAMPLENR,69},
     {844*OVERSAMPLENR,60},
     {892*OVERSAMPLENR,50},
     {932*OVERSAMPLENR,41},
     {970*OVERSAMPLENR,29},
     {1000*OVERSAMPLENR,20},
     {1010*OVERSAMPLENR,10},
     {1024*OVERSAMPLENR,-273} // for safety
};
