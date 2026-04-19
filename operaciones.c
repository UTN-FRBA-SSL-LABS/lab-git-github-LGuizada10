#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* La implementacion de esta funcion retorna el producto de a y b  */

int multiplicar(int a, int b) { 
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

/* ── dividir ──────────────────────────────────────────────────────────────── */

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}