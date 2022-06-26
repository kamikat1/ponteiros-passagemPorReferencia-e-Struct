#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char modelo[8];
    int ano;
    int consumo;
} veiculo;

int main(){

    veiculo carro[2];
    int menorConsumo;
    int indiceCarro;


    for(int i=0; i<2; i++){
        printf("%do carro:\n", i+1);
        printf("modelo:\n");
        scanf("%s", &carro[i].modelo);
        printf("ano:\n");
        scanf("%d", &carro[i].ano);
        printf("consumo:\n");
        scanf("%d", &carro[i].consumo);
    }

    menorConsumo = carro[1].consumo;

    for(int i=0; i<2; i++){
        if (carro[0].consumo < carro[i].consumo) menorConsumo = carro[i].consumo;
        indiceCarro = i;
    }

    printf("%s %d", carro[indiceCarro].modelo, carro[indiceCarro].ano);
}
