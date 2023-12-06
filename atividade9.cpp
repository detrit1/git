#include <iostream>
#include <iomanip>

using namespace std;

void incrementar() {
    static int v = 0;

    v++;

    cout << "Valor da variavel estatica: " << v << endl;
}

void incrementar2() {
    register int vr = 0;
    vr++;
    cout << "Valor da variavel de registro: " << vr << endl;
}


int main()
{
    int *p , *q;
    int x , y;
    //EXERCICIO 1
    p = &x;
    cout << p << endl;
    p++;
    cout << p << endl;
    p = p - 2;
    cout << p << endl;
    //EXERCICIO 2
    q = &y;
    *q = 10;
    cout << *q << endl;
    const int c = 5;
    *q = *q + c;
    cout << *q << endl;
    //EXERCICIO 3
    *q = *q - c;
    cout << *q << endl;
    //EXERCICIO 4
    *p = 4;
    *q = 10;
    x = *q - *p;
    cout << x << endl;
    //EXERCICIO 5
    cin >> x;
    p = &x;
    cin >> y;
    q = &y;
    cout << *p << endl << *q << endl;
    if (*p == *q){
        cout << "os ponteiros sao iguais" << endl;
    }
    else{
        cout << "os ponteiros sao diferentes" << endl;
    }
    //EXERCICIO 6
    cin >> x;
    for (int i = 0; i < x; i++){
    incrementar();
    }

        ///o exercicio 7 esta nos outros arquivos

    //EXERCICIO 8
    cin >> x;
    for (int i = 0; i < x; i++){
    incrementar2();
    }
    //EXERCICIO 9
    int array[] = {1, 2, 3, 4, 5};
    *p = 0;
    p = &array[0];
    for (int i = 0; i < 5; ++i) {
        cout << "Elemento " << i << ": " << *(p + i) << endl;
    }
    //EXERCICIO 10
    p = &x;
    q = &y;
    if (p > q) {
        cout << "A variavel x esta em um endereco de memoria mais alto." << endl;
    } else if (p < q) {
        cout << "A variavel y esta em um endereco de memoria mais alto." << endl;
    } else {
        cout << "Os endereços de memoria sao iguais." << endl;
    }
}

