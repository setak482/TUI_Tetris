#include "core/types/BitSeq.h"
#include "core/const.h"
#include <iostream>
using namespace std;

int main(){
    BitSeq i = LINE_EMPTY;
    cout << i << endl;

    BitSeq j = LINE_FULL;
    cout << (i+=j(4, 3)) << endl;
    BitSeq k = 0;
    cout << (i+=j(3, 5));
}