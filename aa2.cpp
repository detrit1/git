#include <iostream>
using namespace std;

string multiploDe4(int x)
{
    if(x % 4 == 0){
        return "e multiplo de 4";
    }
    else{
        return "nao e multiplo de 4";
    }
}


string parOuImpar(int y)
{
    if(y % 2 == 0){
        return "e par";
    }
    else{
        return "e impar";
    }
}


int somaDeIntervalo(int maior, int menor)
{
    int soma = 0, i;
    for(i = menor; i <= maior; i++){
        soma = soma + i;
    }
    return soma;
}


float esfera(float r)
{
    float v;
    v = (4 * 3,14 * r * r * r) / 3;
    return v;
}


int fatorial(int x)
{
    int f = 1, i;
    for(i = 1; i <= x; i++){
        f = f * i;
    }
    return f;
}


int potencia(int base, int expoente)
{
    int i , x = 1;
    for(i = 1; i <= expoente; i++){
        x = x * base;
    }    
    return x;
}


int main()
{
    int x , menor , maior, y , r , base , expoente;
    cin >> x;
    cout << multiploDe4(x) << endl;
    cin >> y;
    cout << parOuImpar(y) << endl;
    cin >> menor >> maior;
    cout << somaDeIntervalo(maior, menor) << endl;
    cin >> r;
    cout << esfera(r) << endl;
    cin >> x;
    cout << fatorial(x) << endl;
    cin >> base >> expoente;
    cout << potencia(base , expoente) << endl;
}