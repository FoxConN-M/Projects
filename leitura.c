#include <stdio.h>
 
int main() {
    
while (1)
{
    int n, a, b, c, d, e;

    scanf("%d", &n);

    if (n == 0)
    {
        break;
    }

    for (int i = 0; i < n; i++){

        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        int respostas[5] = {a, b, c, d, e};
        int alternativa = -1;
        int marcadas = 0;

        for (int j = 0; j < 5; j++)
        {
            if (respostas[j] <= 127)
            {
                marcadas++;
                alternativa = j;
            }


            
        }
        
        if (marcadas == 1)
        {
            printf("%c\n", 'A' + alternativa);
        }
        else{
            printf("*\n");
        }

        
        
    }
    
}

 
    return 0;
}