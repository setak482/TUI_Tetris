#include "./core/const.h"

class Block{
    Block_Type _type;
    int8_t _rotate;
    int8_t _x;
    int8_t _y;
public:
    Block(Block_Type type, int8_t init_x, int8_t init_y)
        : _type{type}, _rotate{0}, _x{init_x}, _y{init_y} {}
    
    uint16_t mask() const{
        return TEROMINO[static_cast<int>(_type)][_rotate];
    }
};