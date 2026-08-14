// ============================================================
// Exercicio 1 - Criar o primeiro no
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Objetivo: declarar a struct No e criar um no com o valor 10.
//
// Saida esperada:
// 10
//
// Siga os passos comentados na ordem em que aparecem.
// Compile com:  g++ exercicio1_no.cpp -o exercicio1 && ./exercicio1
// ============================================================

#include <iostream>
using namespace std;

struct No {
    int valor;
    No *ponteiro;
};

int main() {

    No primeiro;
    primeiro.valor = 10; 
    primeiro.ponteiro = nullptr;
    cout << primeiro.valor << endl;
    return 0;
}
