#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

//1. EXTRACT
// CÓDIGO ANTES DE REFATORAR:
/*
void frequenciaEnotas(double faltas, double num_aulas, double nota1, double nota2,  double nota3)
{
    double totalNota = nota1 + nota2 + nota3;
    double mediaNota = totalNota/3;
    cout << "a nota media do aluno eh: " << mediaNota << " ";
    double freq, freqAux;
    freqAux = (faltas/num_aulas)*100;
    freq = 100 - freqAux;
    cout << "e a frequencia dele eh: " << freq << "%" << endl;
    if(freq >= 75 && mediaNota >= 7){
        cout << "O ALUNO PASSOU!!!!" << endl;
    }
    else{
        cout << "ele nao passou, sera que o prof da um pontinho extra? ;-;" << endl;
    }
}
*/

//2. RENAME: está no int main

double notaMedia(double nota1, double nota2, double nota3)
{
    double soma = nota1+nota2+nota3 , media;
    media = soma/3;
    return media;
}

double freq(double faltas, double num_aulas)
{
    double freq, freqAux;
    freqAux = (faltas/num_aulas)*100;
    freq = 100 - freqAux;
    return freq;
}

//3. 
double calcularPrecoFinal(double original_price, double discount_percentage, double additional_tax_percentage) {
    double discount_amount = original_price * (discount_percentage / 100.0);
    double discounted_price = original_price - discount_amount;
    double additional_tax_amount = discounted_price * (additional_tax_percentage / 100.0);
    double final_price = discounted_price + additional_tax_amount;
    return final_price;
}

//4.
double calcularAreaDoCirculo(double radius) {
    return PI * radius * radius;
}

//5.
void verificarMuitoQuente(int temperature) {
    if (temperature > 100) {
        std::cout << "Muito quente!";
    }
}
void verificarAgradavel(int temperature) {
    if (temperature > 70 && temperature <= 100) {
        std::cout << "Clima agradável.";
    }
}

void verificarFresco(int temperature) {
    if (temperature > 50 && temperature <= 70) {
        std::cout << "Fresco.";
    }
}

void verificarMuitoFrio(int temperature) {
    if (temperature <= 50) {
        std::cout << "Muito frio!";
    }
}

int main()
{
    double nota1, nota2, nota3;
    double faltas, num_aulas;
    cout << "insira as 3 notas do aluno em sequencia: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    cout << "agora insira o numero de faltas do aluno e o total de aulas para calcular a presenca: ";
    cin >> faltas >> num_aulas;/* // EXTRACT:
    frequenciaEnotas(faltas, num_aulas, nota1, nota2, nota3);
    */
    double frequencia;
    frequencia = freq(faltas, num_aulas);
    double nota;
    nota = notaMedia(nota1, nota2, nota3);
    cout << "a nota do aluno eh: " << frequencia << " e a frequencia dele eh: " << frequencia << "%" << endl;
    if(frequencia >= 75 && nota >= 7){
        cout << "O ALUNO PASSOU!!!" << endl;
    }
    else{
        cout << "o aluno nao passou, sera q o professor da uma notinha extra?;-;" << endl;
    }
    //2. RENAME:
    double principal_amount = 1000.0;
    double interest_rate = 0.05;
    double time_period = 2.0;

    double compound_interest = principal_amount * pow(1 + interest_rate, time_period);

    cout << "O montante eh: " << compound_interest << endl;

    //3.
    double original_price = 100.0;
    double discount_percentage = 10.0;
    double additional_tax_percentage = 5.0;
    double final_price = calcularPrecoFinal(original_price, discount_percentage, additional_tax_percentage);
    cout << "O preço final do produto com desconto e taxas adicionais eh: " << final_price << endl;

//4.
    double radius = 5.0;

    double area = calcularAreaDoCirculo(radius);

    std::cout << "A área do círculo eh: " << area << std::endl;

//5.
    int temperature = 75;
    verificarMuitoQuente(temperature);
    verificarAgradavel(temperature);
    verificarFresco(temperature);
    verificarMuitoFrio(temperature);


    return 0;
}