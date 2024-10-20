#include <stdio.h>

void impares(int num){

    int cont;
    int i = num;

    while (cont < 6)
    {
        if (i%2 != 0)
        {
            printf("%d\n", i);
            cont++;
        }
    i++;
    
    }

}

 
int main() {

    int num;
    scanf("%d", &num);
    
    impares(num);
 
    return 0;
}