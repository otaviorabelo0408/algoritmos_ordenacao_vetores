#include <stdio.h>
#define TAM 10

//Função que implementa o select sort:

void select_sort(int *vet, int tam){
    int menor, aux;
    for(int j = 0; j < (tam - 1); j++){
        menor = j;
        for(int k = (j + 1); k < tam; k++){
            if(vet[k] < vet[menor]){
                menor = k;
            }
        }
        if(j != menor){
            aux = vet[j];
            vet[j] = vet[menor];
            vet[menor] = aux;
        }
    }
}

//Função que imprime o vetor:

void imprime_vetor(int *vetor, int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

//Função main:

int main(void){
    int vetor[TAM] = {1000, -12, 10, 12, -9, 13, 152, -20, 135, 0};
    printf("Vetor desordenado:\n\n");
    imprime_vetor(vetor, TAM);
    select_sort(vetor, TAM);
    printf("\nVetor ordenado:\n\n");
    imprime_vetor(vetor, TAM);
    return 0;
}
