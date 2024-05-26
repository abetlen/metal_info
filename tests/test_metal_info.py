import metal_info as m

def test_metal():
    assert m.recommended_max_vram() > 0
    assert m.physical_memory() > 0
    assert m.current_allocated_size() >= 0
