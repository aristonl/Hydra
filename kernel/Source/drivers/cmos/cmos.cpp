//========= Copyright N11 Software, All rights reserved. ============//
//
// File: cmos.cpp
// Purpose: CMOS related functions
// Maintainer: aristonl
//
//===================================================================//

#include <sys/io.h>
#include <drivers/cmos/cmos.h>

unsigned char getRegister(int reg) {
      outb(cmosAddress, reg);
      return inb(cmosData);
}
