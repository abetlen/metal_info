#ifndef METAL_INFO_H
#define METAL_INFO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

uint64_t recommendedMaxVRAM();
uint64_t physicalMemory();
uint64_t currentAllocatedSize();

#ifdef __cplusplus
}
#endif

#endif // METAL_INFO_H