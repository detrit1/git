#include <iostream>
#include <iomanip>
using namespace std;

void exercicio1();

void exercicio2();

int exercicio3(int *p , int *q)
{
    int soma;
    *p = 2 * (*p);
    *q = 2 * (*q);
    soma = *p + *q;
    return soma;
}

int exercicio4(int* , string);

string exercicio5(int , string);

int main ()
{
    int x , y , resultado;
    int *p = 0;
    string vogais, palavra;
    exercicio1();
    exercicio2();
    cout << "insira 2 valores para obter a soma do dobro deles: " << endl;
    cin >> x >> y;
    resultado = exercicio3(&x , &y);
    cout << "a soma do dobro eh: " << resultado << endl;
    cout << "insira o tamanho da palavra em caracteres: ";
    cin >> x;
    p = &x;
    cout << endl << "insira uma palavra para uma contagem de vogais: ";
    cin >> vogais;
    cout << "o numero de vogais nessa palavra eh: " << exercicio4(p , vogais) << endl;
    cout << "insira uma palavra para inverte-la e o tamanho dela em caracteres: ";
    cin >> palavra >> x;
    cout << "palavrinha invertida: " << exercicio5(x , palavra);
}

void exercicio1()
{
    int a , b , soma;
    int *troca;
    cin >> a >> b;
    soma = a + b;
    troca = &soma;
    a = *troca - a;
    b = *troca - b;
    cout << a << endl << b << endl << endl;
}

void exercicio2()
{
    int t , i;
    cout << "informe o tamanho do vetor: ";
    cin >> t;
    cout << endl;
    int x[t];
    cout << "informe os elementos do vetor: " << endl;
    for (i = 0; i < t; i++){
        cin >> x[i];
    }
    int *p = &i;
    i = 0;
    while (*p < t){
        cout << x[*p] << endl;
        i += 1;
    }
}

int exercicio4(int *p , string vogais)
{
    int x;
    string teste = "aeiouAEIOU";
    x = *p;
    *p = 0;
    for (int i = 0; i < x; i++){
        for (int k = 0; k < 10; k++){
            if (vogais[i] == teste[k]){
                *p += 1;
            }
        }
    }
    return *p;
}

string exercicio5(int x , string palavra)
{
    string inverter;
    int *i = 0 , k = 0;
    i = &k; 
    inverter = palavra;
    while(*i < x){
        palavra[*i] = inverter[x - 1 - *i];
        k += 1;
    }
    return palavra;
}