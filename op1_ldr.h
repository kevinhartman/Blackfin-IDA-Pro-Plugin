/*
   Rigol firmware loader v0.2 for IDA Pro
   
   Copyright (c) 2011 by TomasVlad.

   Based on parts of libopcodes (Free Software Foundation, Inc.) and
   Simple Python Byte Code Module (Chris Eagle <cseagle@gmail.com>)

   Some minor changes from Andreas Schuler <andreas at schulerdev.de>
   
   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2 of the License, or (at your option) 
   any later version.
   
   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
   FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for 
   more details.
   
   You should have received a copy of the GNU General Public License along with 
   this program; if not, write to the Free Software Foundation, Inc., 59 Temple 
   Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef __OP1_LDR_H__
#define __OP1_LDR_H__

struct op1_hdr {
	uint16  flags;
	uchar	checksum;
	uchar   magic;
};

struct ldr_hdr {
	uint32   addr;
	uint32   size;
	uint16   flags;
};

/*
 *  Bit defitions for ldr_hdr_flags
 */

#define _ZEROFILL     0x0001
#define _RESVECT      0x0002
#define _INIT         0x0008
#define _IGNORE       0x0010
#define _FINAL        0x8000


#endif
