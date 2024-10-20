#include <stdio.h>

void pares(int num){

    for(int i=1; i <= num; i++){
        if (i%2 != 0)
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