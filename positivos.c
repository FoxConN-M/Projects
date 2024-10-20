#include <stdio.h>
 
int main() {
 
    int contador = 0;
    double num;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &num);

        if (num > 0){
            contador++;
            
        }
    }

    printf("%d valores positivos\n", contador);
 
    return 0;
}