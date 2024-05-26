try:
    from .metal_info_ext import (
        recommended_max_vram,
        physical_memory,
        current_allocated_size,
    )
except ImportError as e:
    if "undefined symbol" in str(e):
        raise ImportError(
            "Metal symbol not found. Ensure you are running on a Mac with Metal support."
        )
    raise e
