#include <stdio.h>
 
int main() {

    int ci = 1;
 
    for (int i = 0; i < 5; i++)
    {
        printf("I=%d J=7\n", ci);
        printf("I=%d J=6\n", ci);
        printf("I=%d J=5\n", ci);
        ci += 2;
    }

    
    
 
    return 0;
}