#include "core/types/BitSeq.h"
using namespace std;

// Getter

BitUnit BitSeq::operator[](size_t idx) { return BitUnit(idx,(_value & (1 << idx))!=0); }
bool BitSeq::operator[](size_t idx) const{ return (_value & (1 << idx))!=0; }

BitSlice BitSeq::operator()(size_t offset, size_t size) { 
    uint16_t mask = (1 << size) - 1;
    int shift = 16 - offset - size;
    uint16_t value = (_value >> shift) & mask;
    
    return BitSlice(offset, size, value);
}
BitSeq::operator uint16_t() const{ return _value; }

// 대입연산 오버로딩

BitSeq& BitSeq::operator=(uint16_t val){ 
    _value = val; 
    return *this;
}

BitSeq& BitSeq::operator=(const int val){
    _value = static_cast<uint16_t>(val);
    return *this;
}

BitSeq& BitSeq::operator+=(const BitUnit unit){
    int i = 15-unit._idx;
    uint16_t mask = 1 << i;

    _value = (_value & ~mask) | (unit._value << i);
    return *this;
}

BitSeq& BitSeq::operator+=(const BitSlice slice) {
    int shift = 15 - slice._offset - slice._size;
    uint16_t mask = ((1 << slice._size) - 1) << shift;
    _value = (_value & ~mask) | (slice._value << shift);
    
    return *this;
}

// 디버깅용

string BitSeq::to_string() const{
    string tmp;
    for(int i = 15; i >= 0; i--) tmp += ((*this)[i] ? "O" : "X");
    return tmp;
}

ostream& operator<<(std::ostream& os, const BitSeq &b){
    os << b.to_string();
    return os;
}