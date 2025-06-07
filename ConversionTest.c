#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

int main(void) {
    const double EPS = 1e-6; /* Un error minimo para verificar los resultados con double */

    assert(fabs(Celsius(32.0) - 0.0) < EPS);
    assert(fabs(Celsius(212.0) - 100.0) < EPS);

    assert(fabs(Fahrenheit(0.0) - 32.0) < EPS);
    assert(fabs(Fahrenheit(100.0) - 212.0) < EPS);

    printf("TODO BIEN\n");
    return 0;
}