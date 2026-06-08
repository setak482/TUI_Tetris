#include "core/const.h"
#include "core/Board.h"
#include <iostream>
using namespace std;

int main(){
    BitSeq i = LINE_EMPTY;
    cout << i.to_string() << endl;

    BitSeq j = LINE_FULL;
    cout << (i+=j(4, 3)).to_string() << endl;
    BitSeq k = 0;
    cout << (i+=j(8, 3)).to_string() << endl << endl;

    Board _board;
    _board.init();
    _board.console_log();
}