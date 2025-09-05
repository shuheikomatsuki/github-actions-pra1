#include <stdio.h>
#include "sample.h"



int main() {
    int a = 5;
    int b = 3;

    if (addCorrect(a, b) != 8) {
        return 1;
    }
    // if (addWrong(a, b) != 8) {
    //     return 1;
    // }
    if (subCorrect(a, b) != 2) {
        return 1;
    }
    // if (subWrong(a, b) != 2) {
    //     return 1;
    // }

    return 0;
}