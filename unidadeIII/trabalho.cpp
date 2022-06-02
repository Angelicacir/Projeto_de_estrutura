#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    FILE *arquivo = fopen("ar9152.tsp", "r");
    int c;
    float la;
    float lg;
    int N = 9152;
    double cidLa[N];
    double cidLg[N];

    double *grafo, *grafo_aux;
    grafo = (double*)malloc(N*N*sizeof(double));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            grafo[i*N + j] = 0.;
        }
    }
    grafo_aux = (double*)malloc(N*N*sizeof(double));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            grafo_aux[i*N + j] = 0.;
        }
    }
    

    int k=0;
    float media = 0, dis_total = 0, dis_total2 = 0;
    while (!feof(arquivo)){
        fscanf(arquivo, "%d %f %f", &c, &la, &lg);
        cidLa[k] = la;
        cidLg[k] = lg;
        k++;
    }
    fclose(arquivo);

    float maior=0, menor=sqrt(pow(cidLa[1], 2) + pow(cidLg[0] - cidLg[1], 2));
    int pMaiorI = 0, pMaiorJ = 1, pMenorI = 0, pMenorJ = 1, cont = 0;
        
    for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            grafo[i*N + j] = sqrt(pow(cidLa[i] - cidLa[j], 2) + pow(cidLg[i] - cidLg[j], 2));
            if(grafo[i*N + j] != 0){
                cont++;
               
                dis_total += grafo[i*N + j];
            }
            if(grafo[i*N + j] > maior){
                maior = grafo[i*N + j];
                pMaiorI = i;
                pMaiorJ = j;
            }
            if(grafo[i*N + j] < menor && grafo[i*N+j] != 0){
                menor = grafo[i*N + j];
                pMenorI = i;
                pMenorJ = j;
            }
        }
    }

    float cont2 = 0, dis_totalCont = (dis_total*80)/100;
    for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            grafo_aux[i*N + j] = sqrt(pow(cidLa[i] - cidLa[j], 2) + pow(cidLg[i] - cidLg[j], 2));
            if(grafo_aux[i*N + j] != 0){
                dis_total2 += grafo[i*N + j];
            }
            if(dis_total2 <= dis_totalCont){
                cont2=j+1;
            }
        }
    }
    
    float dist_Maior = sqrt(pow(cidLa[pMaiorI] - cidLa[pMaiorJ], 2) + pow(cidLg[pMaiorI] - cidLg[pMaiorJ], 2));
    float dist_Menor = sqrt(pow(cidLa[pMenorI] - cidLa[pMenorJ], 2) + pow(cidLg[pMenorI] - cidLg[pMenorJ], 2));
    media = (float) dis_total/(float) cont;
    printf("menor distancia total: %f \n", dist_Menor);
    printf( "maior distancia total: %f \n", dist_Maior);
    printf("media da distancia total: %f \n", media);
    printf("distancia total do percurso: %f \n", dis_total);
    printf("Numero de cidades para percorrer 80%% do trajeto: %2.f \n", cont2);

}