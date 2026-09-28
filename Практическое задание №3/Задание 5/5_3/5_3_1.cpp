#include "clock.h"

int hours(int n) {
    return (n/3600) % 24;
}

int minutes(int n) {
    return (n%3600) / 60;
}

int seconds(int n) {
    return n % 60;
}
