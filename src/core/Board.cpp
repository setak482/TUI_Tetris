#include "core/Board.h"
#include "core/const.h"
#include <algorithm>
#include <iostream>

void Board::init(){
    std::fill(_state.begin(), _state.end(), LINE_EMPTY);
    _state[height] = LINE_FULL;
}

void Board::console_log(){
    for(int i = 0; i <= height; i++){
        std::cout << i << " ) \t" << _state[i] << std::endl;
        if(i==__STANDBY__) std::cout << "============STANDBY============" << std::endl; 
    }
}