#include <stdio.h>
 
int main() {
 
    int i, g, inter, gremio, emp, cont, n;
        
    inter = 0;
    gremio = 0;
    emp = 0;
    cont = 0;

    while (1)
    {
        scanf("%d %d", &i, &g);

        if (i > g){
            inter++;
            cont++;
        } else if (g > i){
            gremio++;
            cont++;
        } else if (i == g){
            emp++;
            cont++;
        }

        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &n);
        } while (n != 1 && n != 2);
        
        if (n == 2)
        {
            break;            
        }
        

    }
    
    printf("%d grenais\n", cont);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", emp);

    if (inter > gremio)
    {
        printf("Inter venceu mais\n");
    } else if (gremio > inter){
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    
 
    return 0;
}