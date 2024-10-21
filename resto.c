#include <stdio.h>

void pares(int num){

    for(int i=1; i <= 1000; i++){
        if (i % num == 2)
        {
            printf("%d\n", i);
        }
        

    }

}

 
int main() {

    int num;
    scanf("%d", &num);
    
    pares(num);
 
    return 0;
}