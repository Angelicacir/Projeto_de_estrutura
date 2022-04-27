#include <iostream>

using namespace std;

typedef struct aluno{
    int id;
    char *nome;
    float nota;
}*Aluno;

Aluno criarAluno(int a, char* b, unsigned short c){
    Aluno A =(Aluno) malloc(sizeof(struct aluno));
    A->id = a;
    A->nome = b;
    A->nota = c;
    return A;
}

void modificarNota(Aluno A, float novaNota){
    A->nota = novaNota;
}