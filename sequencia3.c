#include <stdio.h>
 
int main() {

    int ci = 1;
    int cj = 7;
 
    for (int i = 0; i < 5; i++)
    {
        printf("I=%d J=%d\n", ci, cj);
        cj--;
        printf("I=%d J=%d\n", ci, cj);
        cj--;
        printf("I=%d J=%d\n", ci, cj);
        cj += 4;
        ci += 2;
    }


    return 0;
}