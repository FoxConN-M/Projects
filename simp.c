#include <stdio.h>

void impares(int n1, int n2){

    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    int soma = 0;

    for (int i = n1+=1; i < n2; i++)
    {
        if (i%2 != 0)
        {
            soma += i;
        }
    
    }

    printf("%d\n", soma);

}

 
int main() {

    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    impares(n1, n2);
 
    return 0;
}