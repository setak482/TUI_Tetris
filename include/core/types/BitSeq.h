#pragma once
#include <cstdint>
#include <iostream>
#include <string>

class BitSeq{
    uint16_t _value;
public:
    BitSeq(uint16_t v=0) : _value{v} {}

    // 인덱스 참조
    inline bool operator[](size_t idx) const;

    // Getter/Setter
    operator uint16_t() const;

    BitSeq& operator=(uint16_t val);
    BitSeq& operator=(int val);

    // 문자열
    std::string to_string() const;
    friend std::ostream &operator<<(std::ostream &os, const BitSeq &b);
};

inline BitSeq operator "" _b16(unsigned long long v) {
    return BitSeq(static_cast<uint16_t>(v));
}