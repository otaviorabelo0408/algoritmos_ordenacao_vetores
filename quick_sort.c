#include <stdio.h>
#define TAM 10

//Função que implementa o quick sort:

void quick_sort(int *vetor, int tam){
    int i, j, aux, troca;
    if(tam < 2){
        return;
    }else{
        aux = vetor[tam / 2];
    }
    for(i = 0, j = tam - 1;; i++, j--){
        while(vetor[i] < aux){
            i++;
        }
        while(aux < vetor[j]){
            j--;
        }
        if(i >= j){
            break;
        }else{
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam - i);
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
    quick_sort(vetor, TAM);
    printf("\nVetor ordenado:\n\n");
    imprime_vetor(vetor);
    return 0;
}
