/*Faça um programa que receba quatro valores e chame um módulo para coloca-los
em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

void ordemCrescente (float v[], int tam);

int main()

{   int tam=4;
    float v[tam];
    for (int i=0; i<tam; i++) v[i]=rand();
    ordemCrescente(v, 4);
    for(int i=0; i<tam; i++){
        printf("%.0f ", v[i]);
    }
    return 0;
}

void ordemCrescente (float v[], int tam){
    int aux=0;
    for (int i=0; i<tam; i++){
        for (int i=0; i<tam-1; i++){
            if(v[i]>v[i+1]){
                aux = v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }

}
