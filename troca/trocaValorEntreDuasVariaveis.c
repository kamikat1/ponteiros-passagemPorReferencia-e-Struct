//modulo que troca valor entre duas variaveis ponteiros 

#include <stdio.h>
#include <stdlib.h>

void trocaValor (int* a, int* b);

int main()

{   int num1=2, num2=4;
    trocaValor (&num1,&num2);
    printf("%d %d", num1, num2);
    return 0;
}

void ordemCrescente (int* a, int* b){
    int aux=0;
    
    aux = *a;
    *a = *b;
    *b = aux;
}
