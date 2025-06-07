#include <stdio.h>
#include "Conversion.h"

/* Prototipos */                                                          /* puntero a función: Fahrenheit o Celsius*/
void PrintTabla(const char *titulo, double lower, double upper, double step, double (*convFunc)(double), const char *col1, const char *col2);
void PrintFilas(double lower, double upper, double step, double (*convFunc)(double));
void PrintFila(double valor, double imagen);

void PrintTablas(double lower, double upper, double step) {
    PrintTabla("Celsius a Fahrenheit", lower, upper, step, Fahrenheit, "C", "F");
    putchar('\n');
    PrintTabla("Fahrenheit a Celsius", lower, upper, step, Celsius, "F", "C");
}

/* Formato de tabla con puntero a funcion */
void PrintTabla(const char *titulo, double lower, double upper, double step, double (*convFunc)(double), const char *col1, const char *col2) {
    printf("=== %s ===\n", titulo);
    printf("%6s | %6s\n", col1, col2);
    printf("-------+-------\n");
    PrintFilas(lower, upper, step, convFunc);
}

/* Generar filas */
void PrintFilas(double lower, double upper, double step, double (*convFunc)(double)) {
    for (double valor = lower; valor <= upper; valor += step) {
        double res = convFunc(valor);
        PrintFila(valor, res);
    }
}

/* Imprimir fila con 2 columnas */
void PrintFila(double valor, double imagen) {
    printf("%4.2f | %4.2f\n", valor, imagen);
}

int main(void) {
    PrintTablas(0.0, 300.0, 20.0);
    return 0;
}