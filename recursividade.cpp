#include <iostream>
using namespace std;

int soma(int n)
{
    if(n == 0){
        return 0;
    }
    else{
        return n + soma(n - 1);
    }
}

int pot(int n, int m)
{
    if(n == 1 || m == 1){
        return n;
    }
    else{
        return n * pot(n , m - 1);
    }
}

/*int teste(int x[], int n){
    if (n == 0){
        return 0;
    }
    if (x[n-1] > 10){
        return x[n-1] + teste(x, n-1);                    essa função soma apenas os elementos do vetor que forem maiores que 10
    }
    else{
        return teste(x, n-1);
    }
}
*/

int soma (int v[] , int n)
{
    if (n == 1){
        return v[0];
    }
    else{
        return v[n - 1] + soma (v , n - 1);
    }
}

int somaA(int n)
{
    if (n == 0){
        return 0;
    }
    else{
        return n + somaA(n - 1);
    }
}

int potencia(int n, int m)
{
    if(n == 1 || m == 1){
        return n;
    }
    else{
        return n * potencia(n , m - 1);
    }
}
/*
int teste2(int n){
    if (n < 10){
        return n;
    }                                                    essa função soma o módulo de um número por 10 com o resultado inteiro de sua divisão por 10
    else{
        return n%10 + teste2(n/10);
    }
}
*/

void regua(int n, int comp) {
    if (n == 0) {
        return;
    }
    regua(n - 1, comp);
    for (int i = 0; i < n; i++) {
        cout << "-";
    }
    cout << endl;
    regua(n - 1, comp);
}

/*
int mult (int m , int n , int i) {
    int r=0;
        if(i <= n){
            r += m;
            mult(m, n , i);
        }
        else{
            return r;
        }
}

int mult(int n, int m)
{
    if(n == 1 || m == 1){
        return n;
    }
    else{
        return n * mult(n , m - 1);
    }
}

int func (int n) {
 if (n == 0){                            essa função realiza a somatória de todos os números desde o 1 até o n. Exemplo: se n = 5, então a função retorna 1+2+3+4+5 = 15.
 return(0);}
 return(n + func(n - 1));
}
*/

int func(int n)
{
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}


int main()
{
    int n , m , x[5] , ord, comp;
    /*cin >> n;
    cout << soma(n) << endl;
    cin >> n >> m;
    cout << pot(n , m) << endl;
    for(m = 0; m < 5; m++){
        cin >> x[m];
    }
    cin >> n;
    cout << teste(x , n);
    cin >> n;
    int v[n];
    for (m = 0; m < n; m++){
        cin >> v[m];
    }
    cout << soma (v , n) << endl;
    cin >> n;
    cout << somaA(n) << endl;
    cin >> n >> m;
    cout << potencia(n , m) << endl;
    cin >> n >> comp;
    regua(n, comp);
    cin >> n;
    m = 2;
    cout << mult(n , m);*/
    cin >> n;
    cout << func(n);
}


