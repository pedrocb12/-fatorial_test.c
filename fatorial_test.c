#include <stdio.h>
#include "fatorial.h"

int main() {
    int erros = 0;

    if (fatorial(0) != 1) { printf("Erro: fatorial(0)\n"); erros++; }
    if (fatorial(1) != 1) { printf("Erro: fatorial(1)\n"); erros++; }
    if (fatorial(5) != 120) { printf("Erro: fatorial(5)\n"); erros++; }
    if (fatorial(10) != 3628800) { printf("Erro: fatorial(10)\n"); erros++; }

    if (erros == 0) {
        printf("✅ Todos os testes passaram!\n");
        return 0;
    } else {
        printf("❌ %d testes falharam.\n", erros);
        return 1;
    }
}
