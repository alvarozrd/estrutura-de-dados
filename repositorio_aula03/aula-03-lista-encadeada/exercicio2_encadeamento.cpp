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
    terceiro->proximo = nullptr;

    No *atual = primeiro;

    while(atual != nullptr) {
        cout << atual->valor << "\n";
        atual = atual->proximo;
    }
    delete primeiro;
    return 0;
}