#include <stdio.h>
#define TAM 10

//Função que implementa o bubble sort:

void bubble_sort(int *vet, int tam){
    int aux;
    for(int i = 1; i < tam;i++){
        for(int j = 0; j < (tam - 1); j++){
            if(vet[j] > vet[j + 1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
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
    int vetor[TAM] = {1000, -12, 10, 12, -9, 13, 152, -20, 135, 0};
    printf("Vetor desordenado:\n\n");
    imprime_vetor(vetor, TAM);
    bubble_sort(vetor, TAM);
    printf("\nVetor ordenado:\n\n");
    imprime_vetor(vetor, TAM);
    return 0;
}
