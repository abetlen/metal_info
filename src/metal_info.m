#include <Metal/Metal.h>

uint64_t recommendedMaxVRAM() {
  id<MTLDevice> device = MTLCreateSystemDefaultDevice();
  uint64_t result = device.recommendedMaxWorkingSetSize;
  CFRelease(device);
  return result;
}

uint64_t physicalMemory() {
  return [[NSProcessInfo processInfo] physicalMemory];
}

uint64_t currentAllocatedSize() {
  id<MTLDevice> device = MTLCreateSystemDefaultDevice();
  uint64_t result = device.currentAllocatedSize;
  CFRelease(device);
  return result;
}
