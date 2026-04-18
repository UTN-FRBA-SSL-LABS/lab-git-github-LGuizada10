#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

<<<<<<< HEAD
/* La implementacion de esta funcion retorna el producto de a y b  */

int multiplicar(int a, int b) { 
=======
/* ── multiplicar — implementar en feature/mi-funcion. ─────────────────────── */
// Implementar la función multiplicar que reciba dos enteros y retorne su producto.
int multiplicar(int a, int b) {
>>>>>>> e332bf9daa0995c44417c214789785ed017879f6
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