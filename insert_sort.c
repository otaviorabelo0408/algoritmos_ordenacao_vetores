#include <stdio.h>
#define TAM 10

//Função que implementa o insert sort:

void insert_sort(int *vet, int tam){
    int aux, proximo;
    for(int i = 1; i < tam; i++){
        proximo = i;
        while(proximo != 0 && vet[proximo] < vet[proximo - 1]){
            aux = vet[proximo];
            vet[proximo] = vet[proximo - 1];
            vet[proximo - 1] = aux;
            proximo--;
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
    insert_sort(vetor, TAM);
    printf("\nVetor ordenado:\n\n");
    imprime_vetor(vetor, TAM);
    return 0;
}
