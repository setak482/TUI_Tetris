#include "core/types/BitSeq.h"
#include "core/const.h"
#include <iostream>
using namespace std;

int main(){
    BitSeq i = LINE_EMPTY;
    cout << i.to_string() << endl;

    BitSeq j = LINE_FULL;
    cout << (i+=j(3, 8)).to_string();
}