#include <stdio.h>
#define TAM 10

//Método heap:

void heap(int *vetor, int inicio, int fim){
    int pai = vetor[inicio];
    int filho = (inicio * 2) + 1;
    while(filho <= fim){
        if(filho < fim){
            if(vetor[filho] < vetor[filho + 1]){
                filho = filho + 1;
            }
        }
        if(pai < vetor[filho]){
            vetor[inicio] = vetor[filho];
            inicio = filho;
            filho = (2 * inicio) + 1;
        }else{
            filho = fim + 1;
        }
    }
    vetor[inicio] = pai;
}

//Função que implementa o heap sort:

void heap_sort(int *vetor){
    int aux, meio = (TAM - 1) / 2;
    for(int i = meio; i >= 0; i--){
        heap(vetor, i, TAM - 1);
    }
    for(int j = TAM - 1; j >= 1; j--){
        aux = vetor[0];
        vetor[0] = vetor[j];
        vetor[j] = aux;
        heap(vetor, 0, j - 1);
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
    heap_sort(vetor);
    printf("\nVetor ordenado:\n\n");
    imprime_vetor(vetor);
    return 0;
}
