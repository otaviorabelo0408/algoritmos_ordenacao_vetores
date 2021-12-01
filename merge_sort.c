#include <stdio.h>
#define TAM 10

//Método merge:

void merge(int *vetor, int inicio_1, int fim_1, int inicio_2, int fim_2){
    int aux[TAM], i = inicio_1, j = inicio_2, k = 0;
    while(i <= fim_1 && j <= fim_2){
        if(vetor[i] < vetor[j]){
            aux[k++] = vetor[i++];
        }else{
            aux[k++] = vetor[j++];
        }
    }
    while(i <= fim_1){
        aux[k++] = vetor[i++];
    }
    while(j <= fim_2){
        aux[k++] = vetor[j++];
    }
    for(i = inicio_1, j = 0; i <= fim_2; i++, j++){
        vetor[i] = aux[j];
    }
}

//Função que implementa o merge sort:

void merge_sort(int *vetor, int inicio, int fim){
    if(inicio < fim){
        int meio = (inicio + fim) / 2;
        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, meio + 1, fim);
    }
}

//Função que imprime o vetor:

void imprime_vetor(int *vetor){
    for(int i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

//Função principal:

int main(void){
    int vetor[TAM] = {1000, -12, 10, 12, -9, 13, 152, -20, 135, 0};
    printf("Vetor desordenado:\n\n");
    imprime_vetor(vetor);
    merge_sort(vetor, 0, TAM - 1);
    printf("\nVetor ordenado:\n\n");
    imprime_vetor(vetor);
    return 0;
}
