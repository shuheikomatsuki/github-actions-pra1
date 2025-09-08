#include <stdio.h>
#include "sample.h"



int main() {
    int a = 5;
    int b = 3;

    if (mulCorrect(a, b) != 15) {
        return 1;
    }
    if (mulWrong(a, b) != 15) {
        return 1;
    }

    return 0;
}