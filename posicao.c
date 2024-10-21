#include <stdio.h>
 
int main() {
 
    int n[10];
    int maior = 0;
    int cont = -1;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &n[i]);

        if (n[i] > maior)
        {
            maior = n[i];
            cont = i;
        }
        
    }

    if (cont != -1)
    {
        printf("%d\n", maior);
        printf("%d\n", cont);
    }
    
 
    return 0;
}