#pragma once
#include <cstdint>

class BitSeq;

class BitSlice{
    size_t _offset;
    size_t _size;
    uint16_t _value;
public:
    BitSlice() : _offset{0}, _size{0}, _value{0} {}
    BitSlice(size_t offset, size_t size, uint16_t value) : _offset{offset}, _size{size}, _value{value} {} 
    operator uint16_t() const { return _value; }
    friend class BitSeq;
};