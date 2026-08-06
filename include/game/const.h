#include <cstdint>

constexpr uint16_t LINE_EMPTY = 0xE007;  // 1110 0000 0000 0111
constexpr uint16_t LINE_FULL = 0xFFFF;   // 1111 1111 1111 1111

inline constexpr uint16_t TETROMINO[7][4] = {
    // 0: I (Cyan)
    { 0x0F00, 0x2222, 0x00F0, 0x4444 }, // 0000 1111 0000 0000
    
    // 1: J (Blue)
    { 0x8E00, 0x6440, 0x0E20, 0x2260 }, // 1000 1110 0000 0000
    
    // 2: L (Orange)
    { 0x2E00, 0x4460, 0x0E80, 0xC440 }, 
    
    // 3: O (Yellow)
    { 0x6600, 0x6600, 0x6600, 0x6600 }, // 0110 0110 0000 0000
    
    // 4: S (Green)
    { 0x6C00, 0x4620, 0x06C0, 0x8C40 }, 
    
    // 5: T (Purple)
    { 0x4E00, 0x4640, 0x0E40, 0x2620 }, // 0100 1110 0000 0000
    
    // 6: Z (Red)
    { 0xC600, 0x2640, 0x0C60, 0x4C80 }  
};

enum class Block_Type : int { I=0, J, L, O, S, T, Z };