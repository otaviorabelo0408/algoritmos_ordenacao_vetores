#include <stdio.h>
#define TAM 10

//Função que implementa o sheel sort:

void shell_sort(int *vet, int tam){
    int aux = 1, aux_2, aux_3;
    while(aux < tam){
        aux = (3 * aux) + 1;
    }
    while(aux > 1){
        aux = aux / 3;
        for(int i = aux; i < tam; i++){
            aux_2 = vet[i];
            aux_3 = i - aux;
            while(aux_3 >= 0 && aux_2 < vet[aux_3]){
                vet[aux_3 + aux] = vet[aux_3];
                aux_3 = aux_3 - aux;
            }
            vet[aux_3 + aux] = aux_2;
        }
    }
}

//Função que imprime o vetor:

void imprime_vetor(int *vet, int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

//Função principal:

int main(void){
    int vetor[TAM] = {1000, - 12, 10, 12, - 9, 13, 152, - 20, 135, 0};
    printf("Vetor desordenado:\n\n");
    imprime_vetor(vetor, TAM);
    shell_sort(vetor, TAM);
    printf("Vetor ordenado:\n\n");
    imprime_vetor(vetor, TAM);
    return 0;
}
