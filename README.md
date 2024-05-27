# Metal Info

## Installation

```bash
pip install git+https://github.com/abetlen/metal_info.git
```

## Usage

```python
from metal_info import recommended_max_vram, physical_memory, current_allocated_size

print(recommended_max_vram())
print(physical_memory())
print(current_allocated_size())
```
