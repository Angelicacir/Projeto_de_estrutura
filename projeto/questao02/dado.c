#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float medialterativa(float v[], int n){
    float soma =0;
    for(size_t i=0; i<n; i++)
    {
        soma+= v[i];
    }
    return soma /n; 
}
float mediaRecursiva(float v[], int n){
if (n == 1){
    return v[0];
} else {
 return (v[n-1] + (n-1)*mediaRecursiva (v,n-1))/n;
}
}
float* gerador (size_t n, int seed) {
    srand (seed);
    float * res = malloc(n*sizeof (int));
    for(size_t i=0; i<n; i++){
        res[i] = rand() % 1000;
    }
    return res;
}
int main (){
    size_t n=1000;
    float *aleatorios = gerador(n, time(NULL));
    float resRecursiva = mediaRecursiva(aleatorios,n);
    float resalterativa = mediaalterativa(aleatorios,n);
    printf(" A media recursiva eh %f\n",resRecursiva);
    printf("A media iterativa eh %f\n", resalterativa);
}