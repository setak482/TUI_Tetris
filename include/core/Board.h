#include <vector>
#include "core/types/BitSeq.h"

class Board{
    std::vector<BitSeq> _state;
    int width;
    int height;
    const int __STANDBY__ = 3;
public:
    Board(int h=24) : width{16}, height{h} { _state.resize(h+1); }

    void init();

    void create_block();

    void console_log();
};