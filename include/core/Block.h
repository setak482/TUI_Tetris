#include "./core/const.h"

class Block{
    Block_Type _type;
    int _rotation;
    int _x, _y;

    void rotate_by(int delta) { _rotation += (_rotation + delta + 4) % 4; }
public:
    Block(Block_Type type, int x, int y)
        : _type{type}, _rotation{0}, _x{x}, _y{y} {}
    
    uint16_t shape() const{
        return TEROMINO[static_cast<int>(_type)][_rotation];
    }

    void move(int dx, int dy);
    void rotate_cw() { rotate_by(1); }
    void rotate_ccw() { rotate_by(-1); }
};