#include <stdio.h>

int main() {
    int n1, n2, n3;
    float media;

    //Solicita os três números
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    //Calcula a média
    media = (n1 + n2 + n3) / 3.0;

    //Exibe o resultado
    printf("A media e: %.1f.\n", media);

    return 0;
}