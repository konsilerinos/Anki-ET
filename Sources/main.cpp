#include "decisionforanki.h"
#include <iostream>

int main() {

    std::locale::global(std::locale("")); // utf-8 for fstream

    DecisionForAnki ForAnki;
    bool loopStatus = true;

    ForAnki.Invitation();

    while (loopStatus) {

        loopStatus = ForAnki.PerfomOperation();
    }

    return 0;
}
