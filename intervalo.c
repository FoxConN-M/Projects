#include <stdio.h>
 
int main() {
 
    int d, x; // Declarando as variáveis que serão usadas
    int den = 0;
    int fora = 0;

    scanf("%d", &d);

    // Loop para ler e acrescentar ao contador os numeros

    for (int i = 0; i < d; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            den++;

        } else{

            fora++;
        }
        
    }

    // Imprimindo o total dos contadores

    printf("%d in\n", den);
    printf("%d out\n", fora);
    
 
    return 0;
}