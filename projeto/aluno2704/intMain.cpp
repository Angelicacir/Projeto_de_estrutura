#include <iostream>
#include <stack>
#include "aluno.cpp"

using namespace std;

typedef struct node {
    Aluno A;
    struct node* esq;
    struct node* dir;
}*No;

typedef No noRaiz;

noRaiz criarArvore();
int inserir(noRaiz, Aluno);
int inserirEmLote(noRaiz, noRaiz);
int remover(noRaiz, Aluno a);
Aluno buscar(noRaiz, Aluno a);
void deletarArvore(noRaiz);

//Recursivo
void preordemRec(noRaiz);
void inordemRec(noRaiz);
void posordemRec(noRaiz);
void nivelRec(noRaiz);

//Iterativo
void preordemIter(noRaiz);
void inordemIter(noRaiz);
void posordemIter(noRaiz);
void nivelIter(noRaiz);

int altura(noRaiz);
int alturaDoNo(noRaiz);
void valoresEntre(int idA, int idB);

int tempoDeBusca();
int tempoDeRemocao();
int tempoDeInsercao();


void inordemIter(noRaiz n){…
[22:27, 27/04/2022] Angelo Ufersa: RODOU
[22:27, 27/04/2022] Angelo Ufersa: Mas aconteceu nada
[22:32, 27/04/2022] Angelo Ufersa: #include <iostream>
#include <stack>
#include "aluno.cpp"

using namespace std;

typedef struct node {
    Aluno A;
    struct node* esq;
    struct node* dir;
}*No;

typedef No noRaiz;

noRaiz criarArvore();
int inserir(noRaiz, Aluno);
int inserirEmLote(noRaiz, noRaiz);
int remover(noRaiz, Aluno a);
Aluno buscar(noRaiz, Aluno a);
void deletarArvore(noRaiz);

//Recursivo
void preordemRec(noRaiz);
void inordemRec(noRaiz);
void posordemRec(noRaiz);
void nivelRec(noRaiz);

//Iterativo
void preordemIter(noRaiz);
void inordemIter(noRaiz);
void posordemIter(noRaiz);
void nivelIter(noRaiz);

int altura(noRaiz);
int alturaDoNo(noRaiz);
void valoresEntre(int idA, int idB);

int tempoDeBusca();
int tempoDeRemocao();
int tempoDeInsercao();


void inordemIter(noRaiz n){
    stack<No> elements;
    No auxNo = n;
    while (auxNo != nullptr || !elements.empty()){
        while(auxNo != nullptr){
            elements.push(auxNo);
            auxNo = auxNo -> esq;
        }
        auxNo = elements.top();
        elements.pop();
        cout << auxNo -> A->id << endl;
        auxNo = auxNo -> dir;
    }

}

int main( ){
    Aluno K = criarAluno(10, "Kennedy Lopes\0", 9.);
    No raiz = (node*)malloc(sizeof(struct node));
    raiz->esq = 0;
    raiz->dir = 0;
    raiz->A = K;
}