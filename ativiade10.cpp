#include <iostream>
#include <iomanip>
using namespace std;

/*EXERCICIO A
void inserir(int *&vetor, int n) {
    vetor = new int[n];
    for (int i = 0; i < n; ++i) {
        vetor[i] = i;
    }
}

void apresentar(int *vetor, int n) {
    cout << "Conteudo do vetor: ";
    for (int i = 0; i < n; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    int *vetor = nullptr;  
    int n = 6;  
    inserir(vetor, n);
    apresentar(vetor, n);
    delete[] vetor;
}
*/
/*EXERCICIO B
void inserir(int *&vetor, int n) {
    vetor = new int[n];
    int *p = vetor;
    for (int i = 0; i < n; ++i) {
        *p = i;
        p++;
    }
}

void apresentar(int *vetor, int n) {
    cout << "Conteúdo do vetor: ";
    int *p = vetor;
    for (int i = 0; i < n; ++i) {
        cout << *p << " ";
        p++;
    }
    
    cout << endl;
}

int main() {
    int *vetor = nullptr;  
    int n = 6;  
    inserir(vetor, n);
    apresentar(vetor, n);
    delete[] vetor;

    return 0;
}
*/
/*EXERCICIO C
void ler(float *&y, int x) {
    y = new float[x];
    for (int i = 0; i < x; ++i) {
        cout << "insira a nota do aluno " << i + 1 << ": ";
        cin >> y[i];
    }
}

void imprimir(float *y, int x) {
    float soma = 0.0;
    for (int i = 0; i < x; ++i) {
        soma += y[i];
    }

    float media = (x > 0) ? soma / x : 0.0;

    cout << "Media das y: " << media << endl;
}

int main() {
    int x;
    cout << "insira a quantidade de alunos na turma: ";
    cin >> x;
    float *y = nullptr;
    ler(y, x);
    imprimir(y, x);
    delete[] y;
}
*/
/*EXERCICIO D
void ler(float *&y, int x) {
    y = new float[x];
    float *p = y;
    for (int i = 0; i < x; ++i) {
        cout << "insira a nota do aluno " << i + 1 << ": ";
        cin >> *p;
        p++;
    }
}

void imprimir(float *y, int x) {
    float *p = y;
    float soma = 0.0;
    for (int i = 0; i < x; ++i) {
        soma += *p;
        p++;
    }
    float media = (x > 0) ? soma / x : 0.0;
    cout << "Media das y: " << media << endl;
}

int main() {
    int x;
    cout << "insira a quantidade de alunos na turma: ";
    cin >> x;
    float *y = nullptr;  
    ler(y, x);
    imprimir(y, x);
    delete[] y;
}
*/
//EXECICIO E
struct Aluno {
    string nome;
    string serie;
    float nota;
};
void lerAlunosECalcularMedia(Aluno *&alunos, int x) {
    alunos = new Aluno[x];
    Aluno *p = alunos;
    for (int i = 0; i < x; ++i) {
        cout << "insira o nome do aluno " << i + 1 << ": ";
        cin >> p->nome;
        cout << "insira a serie do aluno " << i + 1 << ": ";
        cin >> p->serie;
        cout << "insira a nota do aluno " << i + 1 << ": ";
        cin >> p->nota;
        p++;
    }
}
void imprimirMedia(Aluno *alunos, int x) {
    Aluno *p = alunos;
    float soma = 0.0;
    for (int i = 0; i < x; ++i) {
        soma += p->nota;
        p++;
    }
    float media = (x > 0) ? soma / x : 0.0;
    cout << "Media das notas da turma: " << setprecision(2) << fixed << media << endl;
}
int main() {
    int x;
    cout << "insira a quantidade de alunos na turma: ";
    cin >> x;
    Aluno *alunos = nullptr;
    lerAlunosECalcularMedia(alunos, x);
    imprimirMedia(alunos, x);
    delete[] alunos;
}