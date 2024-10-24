#include <stdio.h>
 
int main() {
    while (1){
    double nota1, nota2, med, n;

    scanf("%lf", &nota1);

        while (nota1 < 0 || nota1 > 10)
        {
            printf("nota invalida\n");
            scanf("%lf", &nota1);
        }
    scanf("%lf", &nota2);

        while (nota2 < 0 || nota2 > 10)
        {
            printf("nota invalida\n");
            scanf("%lf", &nota2);
        }

    med = (nota1 + nota2) / 2;

    printf("media = %.1lf\n", med);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%lf", &n);

    if (n == 2)
    {
        break;
        
    } else if (n == 1){
        continue;

    } else{
        printf("novo calculo (1-sim 2-nao)\n");
    }
    

    }
    
    
    
 
    return 0;
}