#include <vector>
#include "game/const.h"
#include "core/types/BitSeq.h"

class Board{
    std::vector<BitSeq> _state;
    int _height;
    static constexpr int HIDDEN_ROWS = 3;
public:
    Board(int visible_height=20) : _height{visible_height + 1 + HIDDEN_ROWS} {
        _state.resize(_height);
        init();
    }

    void init(){
        for(int y = 0; y < _height - 1; y++)
            _state[y] = LINE_EMPTY;
        _state[_height - 1] = LINE_FULL;  // 바닥은 완전히 채워진 줄
    }

    void create_block();
};