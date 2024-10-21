#include <stdio.h>

 
int main() {

    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("NULL");
        } else if (n > 0 && n % 2 == 0){
            printf("EVEN POSITIVE\n");
        } else if (n > 0 && n % 2 != 0){
            printf("ODD POSITIVE\n");
        } else if (n < 0 && n % 2 == 0){
            printf("EVEN NEGATIVE\n");
        } else if (n < 0 && n % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
        

    }
 
    return 0;
}