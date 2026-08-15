// ============================================================
// Exercicio 3 - Lista duplamente encadeada
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Objetivo: acrescentar o campo anterior ao no, ligar os tres
// nos nos dois sentidos e percorrer de tras para frente.
//
// Saida esperada:
// 30 20 10
//
// Compile com:  g++ exercicio3_duplamente.cpp -o exercicio3 && ./exercicio3
// ============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No* anterior;
    No* proximo;
};

int main() {

    No* primeiro = new No;
    primeiro->valor = 10;

    No* segundo = new No;
    segundo->valor = 20;

    No* terceiro = new No;
    terceiro->valor = 30;

    primeiro->anterior = nullptr;
    primeiro->proximo = segundo;

    segundo->anterior = primeiro;
    segundo->proximo = terceiro;

    terceiro->anterior = segundo;
    terceiro->proximo = nullptr;

    No* atual = terceiro;

    while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->anterior;
    }

    return 0;
}