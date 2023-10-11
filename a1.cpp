#include <iostream>
using namespace std;

void multiploDe4()
{
    int x;
    cin >> x;
    if(x % 4 == 0){
        cout << "e multiplo de 4" << endl;
    }
    else{
        cout << "nao e multiplo de 4" << endl;
    }
}
void parOuImpar()
{
    int y;
    cin >> y;
    if(y % 2 == 0){
        cout << "e par" << endl;
    }
    else{
        cout << "e impar" << endl;
    }
}
void somaDeIntervalo()
{
    int i, menor, maior, soma = 0;
    cin >> menor >> maior;
    for(i = menor; i <= maior; i++){
        soma = soma + i;
    }
    cout << soma << endl;
}
void esfera()
{
    float r, v;
    cin >> r;
    v = (4 * 3,14 * r * r * r) / 3;
    cout << v << endl;
}
void fatorial()
{
    float x , f = 1, i;
    cin >> x;
    for(i = 1; i <= x; i++){
        f = f * i;
    }
    cout << f << endl;
}
void potencia()
{
    int base, expoente, x = 1, i;
    for(i = 1; i <= expoente; i++){
        x = x * base;
    }    
    cout << x << endl;
}

int main()
{
    multiploDe4();
    parOuImpar();
    somaDeIntervalo();
    esfera();
    fatorial();
    potencia();
}