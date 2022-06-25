#include <stdio.h>
#include <stdlib.h>

typedef struct date {
    char nome[10];
    int idade;
    float altura;
    float peso;
} person;

int main(){
   person data[100];

   printf("Digite os dados de 100 pessoas: \n");

   for(int i=0; i<2; i++){
        printf("Nome: ");
        scanf("%s", &data[i].nome);
        printf("Idade: ");
        scanf("%d", &data[i].idade);
        printf("Altura: ");
        scanf("%f", &data[i].altura);
        printf("Peso: ");
        scanf("%f", &data[i].peso);
   }


    for(int i=0; i<2; i++){
        if( data[i].idade < 18 && data[i].peso > 70){
            printf("%s\n", data[i].nome);
        }
    }

}
