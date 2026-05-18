#include <cstdint>

struct BitSlice{
    size_t _offset;
    size_t _size;
    uint16_t _value;
public:
    BitSlice(size_t offset, size_t size, uint16_t value) : _offset{0}, _size{0}, _value{0} {}
    BitSlice(size_t offset, size_t size, uint16_t value) : _offset{offset}, _size{size}, _value{value} {} 
};