#include <stdio.h>
#include <time.h>
#include <math.h>
 

int algoritmoDemorado ( int n ) {
int soma = 0;
for ( int i = 0; i < n ; i ++) {
    for ( int j = 0; j < n ; j ++) {
        for ( int k = 0; k < n ; k ++) {
            for ( int l = 0; l < n ; l ++) {
             soma = i + j + k + l ;
           }
        } 
    }
}
  return soma ;
}

int main(){
    int x;
    
    clock_t start = clock();
    printf("Informe um numero inteiro para verificar o tempo de execucao: ");
    scanf("%d",&x);

    algoritmoDemorado(x);

    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo foi de %f seg. para a excutar o numero %d\n", cpu_time_used,x);
    
}

