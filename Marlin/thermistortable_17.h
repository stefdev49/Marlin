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

// 17 is 100K thermistor - Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma.Fr - MKS_Base - version (measured/tested/approved)
const short temptable_17[][2] PROGMEM = {
   {16*OVERSAMPLENR,309},
   {18*OVERSAMPLENR,307},
   {20*OVERSAMPLENR,300},
   {22*OVERSAMPLENR,293},
   {26*OVERSAMPLENR,284},
   {29*OVERSAMPLENR,272},
   {33*OVERSAMPLENR,266},
   {36*OVERSAMPLENR,260},
   {42*OVERSAMPLENR,252},
   {46*OVERSAMPLENR,247},
   {48*OVERSAMPLENR,244},
   {51*OVERSAMPLENR,241},
   {62*OVERSAMPLENR,231},
   {73*OVERSAMPLENR,222},
   {78*OVERSAMPLENR,219},
   {87*OVERSAMPLENR,212},
   {98*OVERSAMPLENR,207},
   {109*OVERSAMPLENR,201},
   {118*OVERSAMPLENR,197},
   {131*OVERSAMPLENR,191},
   {145*OVERSAMPLENR,186},
   {160*OVERSAMPLENR,181},
   {177*OVERSAMPLENR,175},
   {203*OVERSAMPLENR,169},
   {222*OVERSAMPLENR,164},
   {256*OVERSAMPLENR,156},
   {283*OVERSAMPLENR,151},
   {312*OVERSAMPLENR,145},
   {343*OVERSAMPLENR,140},
   {377*OVERSAMPLENR,131},
   {413*OVERSAMPLENR,125},
   {454*OVERSAMPLENR,119},
   {496*OVERSAMPLENR,113},
   {537*OVERSAMPLENR,108},
   {578*OVERSAMPLENR,102},
   {619*OVERSAMPLENR,97},
   {658*OVERSAMPLENR,92},
   {695*OVERSAMPLENR,87},
   {735*OVERSAMPLENR,81},
   {773*OVERSAMPLENR,75},
   {808*OVERSAMPLENR,70},
   {844*OVERSAMPLENR,64},
   {868*OVERSAMPLENR,59},
   {892*OVERSAMPLENR,54},
   {914*OVERSAMPLENR,49},
   {935*OVERSAMPLENR,42},
   {951*OVERSAMPLENR,38},
   {967*OVERSAMPLENR,32},
    {975*OVERSAMPLENR,28},
    {1000*OVERSAMPLENR,20},
    {1010*OVERSAMPLENR,10},
    {1024*OVERSAMPLENR,-273} // for safety
};
