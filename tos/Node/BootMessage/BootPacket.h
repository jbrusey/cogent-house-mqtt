/* BootPacket.h

   Copyright (c) 2011 Coventry University

   This File is part of Cogent-House

   Cogent-House is free software: you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   Cogent-House is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see
   <http://www.gnu.org/licenses/>.



*/

#ifndef _BOOT_PACKET_H
#define _BOOT_PACKET_H

typedef nx_struct BootMsg {
  nx_uint8_t version[14];
} BootMsg;

#define make_string(x) make_string1(x)
#define make_string1(x) #x

#endif
