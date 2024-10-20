#include <stdio.h>
 
int main() {
 
    int contador = 0;
    double num;
    double soma = 0;
    double media;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &num);

        if (num > 0){
            contador++;
            soma = soma + num;
        }
    }

    media = soma / contador;

    printf("%d valores positivos\n", contador);
    printf("%.1lf\n", media);

 
    return 0;
}