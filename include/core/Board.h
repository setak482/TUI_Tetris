#include <vector>
#include "core/types/BitSeq.h"

class Board{
    std::vector<BitSeq> _state;
    int width;
    int height;
public:
    Board(int h=24) : width{10}, height{h} { _state.resize(h); }

    void init();
    void push_block();
};