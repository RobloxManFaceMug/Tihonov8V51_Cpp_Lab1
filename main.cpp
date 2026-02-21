#include <iostream>
#include "SuitReverse"
#include "SuitCheck"
#include "SuitCountAtt"
#include "IsInvisible"

int main() {
    int suit = 0b01011;      //слева на право: невидимость, беззвучие, подавление инфракрасного, подавление радиоволн, энергосбережение
    rever(suit, 2);
    checking(suit, 0);
    CountAtt(suit);
    StealthGirl(suit);
}
