#include "zaga.h"

bool clb(int h, int a, int b) {
    if (a >= h) {
        return true;
    }
    if (a <= b) {
        return false;
    }
    return true;
}

int days(int h, int a, int b) {
    int day = 0;
    while (h > 0) {
        day += 1;
        h -= a;
        if (h <= 0) {
            break;
        }
        h += b;
    }
    return day;
}
