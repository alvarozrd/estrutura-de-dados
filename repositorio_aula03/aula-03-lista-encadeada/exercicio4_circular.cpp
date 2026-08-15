// ============================================================
// Exercicio 4 - Lista circular
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Objetivo: fechar o ciclo, fazendo o ultimo no apontar de volta
// para o primeiro, e percorrer dando exatamente uma volta.
//
// Saida esperada:
// 10 20 30
//
// Compile com:  g++ exercicio4_circular.cpp -o exercicio4 && ./exercicio4
// ============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {

    No* primeiro = new No;
    primeiro->valor = 10;

    No* segundo = new No;
    segundo->valor = 20;

    No* terceiro = new No;
    terceiro->valor = 30;

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;
    terceiro->proximo = primeiro;

    No* atual = primeiro;

    do {
        cout << atual->valor << " ";
        atual = atual->proximo;
    } while (atual != primeiro);

    return 0;
}   