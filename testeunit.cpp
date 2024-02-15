#include <iostream>
#include <cassert>

using namespace std;

int somaElementosPares(int tamanho, int vetor[]) {
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] % 2 == 0) {
            soma += vetor[i];
        }
    }
    return soma;
}

void testSomaElementosPares() {
    int vetor1[] = {};
    assert(somaElementosPares(0, vetor1) == 0);

    int vetor2[] = {1, 3, 5, 7};
    assert(somaElementosPares(4, vetor2) == 0);

    int vetor3[] = {2, 4, 6, 8};
    assert(somaElementosPares(4, vetor3) == 20);

    int vetor4[] = {1, 2, 3, 4, 5, 6};
    assert(somaElementosPares(6, vetor4) == 12);

    cout << "Todos os testes passaram com sucesso!" << endl;
}

int main() {
    testSomaElementosPares();
    return 0;
}