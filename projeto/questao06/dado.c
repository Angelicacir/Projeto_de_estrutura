#include <stdio.h>
#include <stdlib.h>

void trocar(int v[], int ini, int end){
    int aux;
    if(ini < end){
        aux = v[ini];
        v[ini] = v[end];
        v[end] = aux;
        trocar(v, ini + 1, end - 1);
    }
}

void imprimir(int v[], int tam){
    if(tam == 1)
        printf("%d, ", v[tam - 1]);
    else{
        imprimir(v, tam - 1);
        printf("%d, ", v[tam - 1]);
    }
}

int main () {

    int vet[10] = {0,25,1,45,8,67,70,87,90,100};

    imprimir(vet, 10);
    trocar(vet, 0, 9); 
    printf("\n");
    imprimir(vet, 10);

    return 0;
}