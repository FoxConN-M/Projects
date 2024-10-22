#include <stdio.h>
 
int main() {

    int ci = 1;
    int cj = 60;

    printf("I=%d J=%d\n", ci, cj);
 
    for (int i = 0; i < 12; i++)
    {
        ci += 3;
        cj -= 5;
        printf("I=%d J=%d\n", ci, cj);
    }

    
    
 
    return 0;
}