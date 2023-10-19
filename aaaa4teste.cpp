#include <iostream>
#include <iomanip>
using namespace std;

int somaDeMenores(int);

string bissexto(int);

void binario(int);

string validacao(string);

float juros(float , float , int);

void ordem (int , int[]);

int main()
{
    int n , ano;
    float investimento , taxa;
    string senha;
    cin >> n;
    cout << somaDeMenores(n) << endl;
    cin >> ano;
    cout << bissexto(ano) << endl;
    cin >> n;
    binario(n);
    cin >> senha;
    cout << validacao(senha) << endl;
    cout << "insira o valor do investimento, o valor da taxa de juros e o numero de anos" << endl;
    cin >> investimento >> taxa >> ano;
    cout << "o valor final sera de R$ " << juros(investimento , taxa , ano) << endl;
    cout << "insira o tamanho de um vetor:";
    int N;
    cin >> N;
    int inteiros[N];
    cout << endl << "insira os numeros inteiros para serem ordenados em ordem crescente:" << endl;
    for (int i = 0; i < N; i++){
        cin >> inteiros[i];
    }
    ordem(N , inteiros);
}

int somaDeMenores(int n)
{
    int soma = 0;
    while(n > 0){
        soma += n;
        n--;
    }
    return soma;
}

string bissexto(int ano)
{
    string aaa;
    if(ano % 100 == 0){
    aaa = "true";
    }
    else{
        if(ano % 4 == 0){
            aaa = "true";
        }
        else{
            aaa = "false";
        }
    }
    return aaa;
}

void binario(int n)
{
    string numero;
    while (n > 0){
        numero += to_string(n % 2);
        n /= 2;
    }
    int i = numero.length();
    while (i >= 0){
        cout << numero[i];
        i--;
    }
    cout << endl;
}


string validacao(string senha)
{
    int i , j , x , y , z , numeroDeLetras = 0;
    string resultado = "senha valida" , numeros = "1234567890" , letrasMaiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXIZ" , letrasMinusculas = "abcdefghijklmnopqrstuvwxyz";
    while (senha[numeroDeLetras] != '\0'){
        numeroDeLetras += 1;
    }
    if (numeroDeLetras < 8){
        resultado = "senha invalida";
        return resultado;
    }
        x = y = z = 0;
        for (i = 0; i < numeroDeLetras; i++){
            for (j = 0; j < 10; j++){
                if (senha[i] == numeros[j]){
                    x += 1;
                }
            }
            for (j = 0; j < 26; j++){
                if (senha[i] == letrasMaiusculas[j]){
                    y += 1;
                }
                if (senha[i] == letrasMinusculas[j]){
                    z += 1;
                }
            }
        
    }
    if (x == 0 || z == 0 || y == 0){
        resultado = "senha invalida";
    }
    return resultado;
}

float juros (float investimento , float taxa , int ano)
{
    int i;
    for (i = 0; i < ano; i++){
        investimento = (investimento * (taxa / 100)) + investimento;
    }
    return investimento;
}

void ordem(int N , int inteiros[])
{
    int k,  aux , i;
    for (i = 0; i < N - 1; i++){
        for (k = 0; k < N - i - 1; k++){
            if (inteiros[i] > inteiros[k]){
                aux = inteiros[i];
                inteiros[i] = inteiros[k];
                inteiros[k] = aux;
            }
        }
    }
    cout << N << endl;
    for (i = 0; i < N; i++){
        cout << inteiros[i] << setw(2);
    }
    cout << endl;
}