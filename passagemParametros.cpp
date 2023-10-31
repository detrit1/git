#include <iostream>
#include <iomanip>
using namespace std;

int multp(int , int);

int multpRef(int* , int*);

int soma10(int);

int soma10Ref(int*);

int sub5(int);

int sub5Ref(int*);

void inversao(int , int[]);

void MAIUSCULOREF(char *palavraMinuscula , int x){
    int i , j , k = 0;
    for (i = 0; i < x; i++){
        k = 0;
        for (j = 65; j < 90; j++){
            if(palavraMinuscula[i] == j){
                k++;
                break;
            }
        }
        if(k == 1){
            continue;
        }
        palavraMinuscula[i] = palavraMinuscula[i] - 32;
    }
    for(i = 0; i < x; i++){
        cout << palavraMinuscula[i];
    }
}

int main()
{
    int x , i , y;
    char palavraMinuscula[INT16_MAX];
    cin >> x >> y;
    cout << "o resultado da multiplicacao eh: " << multp(x , y) << endl;
    cin >> x >> y;
    cout << "o resultado da multiplicacao eh: " << multpRef(&x , &y) << endl;
    cin >> x;
    cout << "esse numero somado a 10 eh: " << soma10(x) << endl;
    cin >> x;
    cout << "esse numero somado a 10 eh: " << soma10Ref(&x) << endl;
    cin >> y;
    cout << "esse numero subtraido a 5 eh: " << sub5(y) << endl;
    cin >> y;
    cout << "esse numero subtraido a 5 eh: " << sub5Ref(&y) << endl;
    
    int N;
    cout << "insira o tamanho de um vetor : ";
    cin >> N;
    int v[N];
    cout << "insira um vetor para ser invertido (insira um elemento e tecle enter para o proximo): " << endl;
    for (int i = 0; i < N; i++){
    cin >> v[i];
    }
    cout << "esse vetor invertido eh: ";
    inversao(N , v);
    cout << endl;
    cout << "insira o tamanho de uma palavra para ser convertida para letras maiusculas: ";
    cin >> x;
    cout << endl << "insira uma palavra para tornar suas letras minusculas em maiusculas (de enter entre cada caractere): ";
     for (i = 0; i < x; i++){
        cin >> palavraMinuscula[i];
    }
    cout << "essa palavra em maiusculo eh: ";
    MAIUSCULOREF(palavraMinuscula, x);


}

int multp(int x , int y)
{
    return x * y;
}

int multpRef(int *x , int *y)
{
    return *x * *y;
}

int soma10(int x)
{
    return x + 10;
}

int soma10Ref(int *x)
{
    return *x + 10;
}

int sub5(int y)
{
    return y - 5;
}

int sub5Ref(int *y)
{
    return *y - 5;
}

void inversao(int N , int v[]){
    int i , inv[N];
    for (i = 0; i < N; i++){
        inv[i] = v[N - 1 - i];
        cout << inv[i];
    }
}

