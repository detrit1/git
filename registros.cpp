#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};
/*
int main() {
    Aluno aluno1;
    aluno1.nome = "Jean";
    aluno1.idade = 20000;
    aluno1.nota = 10;

    cout << "Nome do aluno: " << aluno1.nome << endl;
    cout << "Idade do aluno: " << aluno1.idade << endl;
    cout << "Nota do aluno: " << aluno1.nota << endl;

}
*/

/*
int main() {
    Aluno alunos[3];

    alunos[0].nome = "Jean";
    alunos[0].idade = 20000;
    alunos[0].nota = 8.5;

    alunos[1].nome = "O Breno";
    alunos[1].idade = 44;
    alunos[1].nota = 2;

    alunos[2].nome = "Jaum";
    alunos[2].idade = 12;
    alunos[2].nota = 7.9;

    for (int i = 0; i < 3; ++i) {
        cout << "Informacoes do Aluno: " << endl;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Idade: " << alunos[i].idade << endl;
        cout << "Nota: " << alunos[i].nota << endl;
    }

}
*/
/*
int main() {
    Aluno aluno1;
    aluno1.nome = "Jaum";
    aluno1.idade = 12;
    aluno1.nota = 7.9;

    Aluno *ponteiroAluno = &aluno1;

    cout << "Informacoes do Aluno antes da modificacao:" << endl;
    cout << "Nome: " << ponteiroAluno->nome << endl;
    cout << "Idade: " << ponteiroAluno->idade << endl;
    cout << "Nota: " << ponteiroAluno->nota << endl;

    ponteiroAluno->nome = "Jaum Biava";
    ponteiroAluno->idade = 13;
    ponteiroAluno->nota = 2.9;

    cout << end << "Informacoes do Aluno depois da modificacao:" << endl;
    cout << "Nome: " << aluno1.nome << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Nota: " << aluno1.nota << endl;

}
*/

struct Curso {
    Aluno estudante;
};

int main() {
    Curso curso1;
    cout << "insira o nome, a idade e a nota do aluno: " << endl;
    cin >> curso1.estudante.nome;
    cin >> curso1.estudante.idade;
    cin >> curso1.estudante.nota;

    cout << "Informacoes do Estudante no Curso:" << endl;
    cout << "Nome: " << curso1.estudante.nome << endl;
    cout << "Idade: " << curso1.estudante.idade << endl;
    cout << "Nota: " << curso1.estudante.nota << endl;

}