#include <iostream>

using namespace std;

extern int variavelGlobal;

int main() {
    variavelGlobal = 1234;
    cout << "Novo valor da variável global: " << variavelGlobal << endl;
}