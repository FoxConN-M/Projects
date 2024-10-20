#include <stdio.h>
 
int main() {
 
    int positivos = 0;
    int par = 0;
    int negativos = 0;
    int impar = 0;
    int num;

    for (int i = 0; i < 5; i++){
        scanf("%d", &num);

        if (num > 0){
            positivos++;
        }

        if (num % 2 == 0){
            par++;
        }
        
        if (num < 0){
            negativos++;
        }
        
        if (num % 2 != 0){
            impar++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
 
    return 0;
}