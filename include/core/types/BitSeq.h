#pragma once
#include "core/types/BitUnit.h"
#include "core/types/BitSlice.h"
#include <iostream>
#include <string>

class BitSeq{
    uint16_t _value;
public:
    BitSeq(uint16_t v=0) : _value{v} {}

    // 인덱스 참조
    BitUnit operator[](size_t idx);
    bool operator[](size_t idx) const;
    BitSlice operator()(size_t offset, size_t size);

    // Getter/Setter
    operator uint16_t() const;

    BitSeq& operator=(uint16_t val);

    // 기초연산

    BitSeq& operator=(const BitUnit unit);
    BitSeq& operator=(const BitSlice slice);

    BitSeq& operator&(const BitSlice slice);

    // 디버깅용
    std::string to_string() const;
    friend std::ostream &operator<<(std::ostream &os, const BitSeq &b);
};

inline BitSeq operator "" _b16(unsigned long long v) {
    return BitSeq(static_cast<uint16_t>(v));
}