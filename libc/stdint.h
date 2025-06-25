#ifndef STDINT_H
#define STDINT_H

typedef long long int64;
typedef unsigned long long uint64;

typedef unsigned int uint32;
typedef int int32;

typedef signed short int16;
typedef unsigned short uint16;

typedef signed char int8;
typedef unsigned char uint8;

#define low_16(address) (uint16)((address) & 0xFFFF)
#define high_16(address) (uint16)(((adress) >> 16) & 0xFFFF)

#endif

