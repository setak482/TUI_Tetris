#include <cstdint>

constexpr uint16_t LINE_EMPTY = 57351;  // 1110 0000 0000 0111
constexpr uint16_t LINE_FULL = 65535;   // 1111 1111 1111 1111
enum Block_Type{ I, O, T, J, L, S, Z };