#include "point.h"

#ifndef TENSORLIB_MANIFOLD_H
#define TENSORLIB_MANIFOLD_H

typedef struct {
    int d; // dim
    // boolean function defining whether
    // the given point is on the manifold
    int (*ispoint)(struct point *);
} Manifold;

Manifold *makeUnitSphere(int);

#endif //TENSORLIB_MANIFOLD_H