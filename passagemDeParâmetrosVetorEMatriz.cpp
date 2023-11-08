#include <iostream>
#include <iomanip>
using namespace std;

void ordem(int* , int*);

void decimal(double*);

bool has_zero(int[] , int);

int maiorValor(int , int[]);

int media(int , int[]);

int positivos(int [] , int);

int vetores(int , int[]);

void maiorEmenor(int[] , int*);

int main()
{
    int x , y , a[INT16_MAX];
    double b;
    /*
    cout << "insira dois numeros inteiros para serem ordenados em ordem crescente: " << endl;
    cin >> x >> y;
    ordem(&x , &y);
    cout << "agora, insira um numero decimal para ter sua parte inteira separada do resto: " << endl;
    cin >> b;
    decimal(&b); 
    cout << "insira o tamanho de um vetor: ";
    cin >> y;
    cout << "algora, digite os elementos do vetor: " << endl;
    for (x = 0; x < y; x++){
        cin >> a[x];
    }
    cout << has_zero(a, y);
    cout << "agora, insira o tamanho de um vetor e complete-o: ";
    cin >> x;
    for (y = 0; y < x; y++){
        cin >> a[y];
    }
    cout << "o maior valor deste vetor eh: " << maiorValor(x , a) << endl << endl;
    cout << "insira o tamanho de um vetor e preeencha-o com elementos para obter a media destes: ";
    cin >> x;
    for(y = 0; y < x; y++){
        cin >> a[y];
    }
    cout << "o valor medio destes inteiros eh: " << media(x , a) << endl;
    cout << "insira o tamanho do vetor e complete-o com valores inteiros negativos e positivos; ";
    cin >> x;
    for(y = 0; y < x; y++){
        cin >> a[y];
    }
    cout << "o numero de elementos positivos inseridos no vetor eh: " << positivos(a , x) << endl;
    cout << "insira o tamanho de um vetor: ";
    cin >> x;
    y = 0;
    cout << "insira seu vetor: " << endl;
    for (int i = 0; i < x; i++){
        cin >> a[i];
    }
    cout << "Seu vetor eh: ";
    for(y = 0; y < x; y++){
        cout << vetores(y , a) << ' ';
    }
    */
    cout << endl << "insira o tamanho do vetor: ";
    cin >> x;
    cout << "agora, preencha-o de numeros inteiros:" << endl;
    for(y = 0; y < x; y++){
        cin >> a[y];
    }
    maiorEmenor(a , &x);
    cout << endl;

}

void ordem(int *x , int *y)
{
    int aux;
    if(*x > *y){
        aux = *x;
        *x = *y;
        *y = aux;
    }
    cout << "a ordem eh: " << *x << " , " << *y << endl;
}

void decimal(double *b)
{
    int i = 0;
    double d = 0;
    i = *b;
    d = *b - i;
    cout << "a parte inteira eh " << i << " e a parte decimal eh " << d << endl;
}
/*
bool has_zero(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++){
        if (a[i] == 0){                       <<<< nessa função, caso o 0 não seja o primeiro a ser analizado, sempre dará false
            return true;
        }
        else{
            return false;
    }
    }
}
*/

bool has_zero(int a[], int n) 
{
    int i , x; //////adiciona-se uma variável de contagem
    for (i = 0; i < n; i++){
        if (a[i] == 0){
            x += 1;  //////////e a cadda no vetor, soma-se 1 à ela
        }
        if (x != 0){
            return true; /////////então, caso essa variável seja maior que 0, ela teve algum número somado, então há 0 e retorna true
        }
        else{
            return false; ///////// caso contrário, retorna false
        }
    }
}

int maiorValor(int x , int a[])
{
    int maior = INT16_MIN;
    for(int i = 0; i < x; i++){
        if(a[i] > maior){
            maior = a[i];
        }
    }
    return maior;
}

int media(int x , int a[])
{
    int soma = 0, media = 0;
    for(int i = 0; i < x; i++){
        soma += a[i];
    }
    media = soma / x;
    return media;
}

int positivos(int a[] , int x)
{
    int i , contagem = 0;
    for(i = 0; i < x; i++){
        if(a[i] > 0){
            contagem++;
        }
    }
    return contagem;
}

int vetores(int y , int a[])
{
    return a[y];
}

void maiorEmenor(int a[] , int *x)
{
    int menor = INT16_MAX , maior = INT16_MIN;
    for(int i = 0; i < *x; i++){
        if(a[i] < menor){
            menor = a[i];
        }
        if(a[i] > maior){
            maior = a[i];
        }
    }
    cout << "o maior numero eh " << maior << " e o menor eh " << menor << endl;
}


////Questão 6: a linha 16 imprime *ss, que na função, é inicializado como 0 e soma i conforme i (inicializado como b) é divisível por a, até que i se iguale a c.

////Questão 7: a linha 19 decide se o numero tem a caracteristica ou nao, tal que existe caso o quadrado da soma do resto da divisão deste por 100 e o resultado dessa divisão seja
////igual ao numero;

////Questão 8: imprime quantos divisores um numero tem.

////Questão 1: a linha 16 imprime s, que na função, é inicializado como 0 e soma i conforme i (inicializado como b) é divisível por a, até que i se iguale a c.

////Questão 2: a linha 19 decide se o numero tem a caracteristica ou nao, tal que existe caso o quadrado da soma do resto da divisão deste por 100 e o resultado dessa divisão seja
////igual ao numero;

////Questão 3: a linha 16 imprime s, que na função, é inicializado como 0 e soma i conforme i (inicializado como b) é divisível por a, até que i se iguale a c.