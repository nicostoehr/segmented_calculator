#include "rest_op.h"

#define BASIS 5

int rest(int i) {
    return i % BASIS;
}

int rest_add(int i, int j) {
    return (i + j) % BASIS;
}

int basis() {
    return BASIS;
}

