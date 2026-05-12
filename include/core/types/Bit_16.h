#pragma once
#include <cstdint>
#include <iostream>
#include <string>

class Bit_16{
    uint16_t _value;
public:
    Bit_16(uint16_t v=0) : _value{v} {}

    // 인덱스 참조
    inline bool operator[](size_t idx) const;

    // Getter/Setter
    operator uint16_t() const;

    Bit_16& operator=(uint16_t val);
    Bit_16& operator=(int val);

    // 문자열
    std::string to_string() const;
    friend std::ostream &operator<<(std::ostream &os, const Bit_16 &b);
};

inline Bit_16 operator "" _b16(unsigned long long v) {
    return Bit_16(static_cast<uint16_t>(v));
}