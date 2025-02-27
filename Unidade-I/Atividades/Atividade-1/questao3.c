#include <stdio.h>

int main() {
    //Declaração do vetor 
    int vetor[] = {1, 7, 3, 9, 2, 8, 10, 4};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numero, i;
    int indice = -1; 

    //Solicita o número 
    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &numero);

    //Realiza a busca pelo número
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            indice = i;
            break;  
        }
    }

    // Exibe o resultado
    if (indice != -1) {
        printf("Elemento encontrado: indice %d.\n", indice);
    } else {
        printf("Elemento não encontrado: indice -1.\n");
    }

    return 0;
}