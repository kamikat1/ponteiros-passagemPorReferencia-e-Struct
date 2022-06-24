#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pti;
    int i = 10;
    pti = &i;

    printf("%d\n", pti); //imprime o conteudo da variavel pt1, que esta guardando o endereço de i, 6422036
    printf("%d\n", *pti); //imprime para onde o ponteiro pti esta apontando, no caso para a variavel i, que esta guardando 10, então imprime 10
    printf("%d\n", &i); //endereço de memoria de onde esta a variavel i: 6422036
    printf("%d\n", &pti); //endereço de memoria da variavel pti
    printf("%d\n", &*pti); //endereço de memoria de onde *pti está apontando

    *pti=20;
    printf("%d\n", *pti); //como o ponteiro pti ta acessando a variavel i, isso muda o valor de i pra 20
    printf("%d", i); 
}

