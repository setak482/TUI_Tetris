#include <cstdint>

// BitSeq의 단일비트 프록시
class BitUnit{
    uint8_t _idx;
    bool _value;
public:
    BitUnit() : _idx{0}, _value{0} {}
    BitUnit(size_t idx, bool value) : _idx{idx}, _value{value} {}
    operator bool() const{ return (_value!=0); }
};