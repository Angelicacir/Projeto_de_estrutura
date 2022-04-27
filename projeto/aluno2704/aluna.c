#include <iostream>
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


void inordemIter(noRaiz){
    stack<No*> stack;
    No* auxNo = noRaiz; elements;
    while (auxNo != NULL || !elements.empty()){
        while(auxNo != NULL){
            elements.push(auxNo);
            auxNo = auxNo -> esq;
        }
        cout << elements.top() -> id << endl;
        auxNo = elements.top() -> dir;
        elements.pop();
    }

}

int main( ){
    Aluno K = criarAluno(10, "Kennedy Lopes\0", 9.);
    No raiz = malloc(sizeof(struct node));
    raiz->esq = 0;
    raiz->dir = 0;
    raiz->A = K;
}