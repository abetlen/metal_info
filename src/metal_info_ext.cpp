#include <nanobind/nanobind.h>
#include "metal_info.h"

namespace nb = nanobind;

using namespace nb::literals;

NB_MODULE(metal_info_ext, m) {
    m.def("recommended_max_vram", &recommendedMaxVRAM, "Returns the recommended maximum VRAM");
    m.def("physical_memory", &physicalMemory, "Returns the physical memory");
    m.def("current_allocated_size", &currentAllocatedSize, "Returns the current allocated size");
}