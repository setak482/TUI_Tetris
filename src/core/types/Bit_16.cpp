#include "core/types/Bit_16.h"
using namespace std;

bool Bit_16::operator[](size_t idx) const{ return (_value & (1 << idx))!=0; }

Bit_16::operator uint16_t() const{ return _value; }

Bit_16& Bit_16::operator=(uint16_t val){ 
    _value = val; 
    return *this;
}

Bit_16& Bit_16::operator=(const int val){
    _value = static_cast<uint16_t>(val);
    return *this;
}

string Bit_16::to_string() const{
    string tmp;
    for(int i = 15; i >= 0; i--) tmp += ((*this)[i] ? "■" : "□");
    return tmp;
}

ostream& operator<<(std::ostream& os, const Bit_16 &b){
    os << b.to_string();
    return os;
}