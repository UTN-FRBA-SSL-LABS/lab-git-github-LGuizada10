#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion. ─────────────────────── */
// Implementar la función multiplicar que reciba dos enteros y retorne su producto.
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
