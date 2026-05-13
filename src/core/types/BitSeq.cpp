#include "core/types/BitSeq.h"
using namespace std;

bool BitSeq::operator[](size_t idx) const{ return (_value & (1 << idx))!=0; }

BitSeq::operator uint16_t() const{ return _value; }

BitSeq& BitSeq::operator=(uint16_t val){ 
    _value = val; 
    return *this;
}

BitSeq& BitSeq::operator=(const int val){
    _value = static_cast<uint16_t>(val);
    return *this;
}

string BitSeq::to_string() const{
    string tmp;
    for(int i = 15; i >= 0; i--) tmp += ((*this)[i] ? "■" : "□");
    return tmp;
}

ostream& operator<<(std::ostream& os, const BitSeq &b){
    os << b.to_string();
    return os;
}