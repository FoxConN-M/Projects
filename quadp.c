#include <stdio.h>

void pares(int num){

    for(int i=1; i <= num; i++){
        if (i%2 == 0)
        {
            int quad = i * i;
            printf("%d^2 = %d\n", i, quad);
        }
        

    }

}

 
int main() {

    int num;
    scanf("%d", &num);
    
    pares(num);
 
    return 0;
}