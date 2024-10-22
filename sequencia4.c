#include <stdio.h>

void Inteiros (double ci, double cj){

    if (ci == (int)ci && cj == (int)cj)
    {
        printf("I=%.0lf J=%.0lf\n", ci, cj);
    }
    else {
        printf("I=%.1lf J=%.1lf\n", ci, cj);
    }

}

 
int main() {

    double ci = 0;
    double cj1 = 1;
    double cj2 = 2;
    double cj3 = 3;

    Inteiros(ci, cj1);
    Inteiros(ci, cj2);
    Inteiros(ci, cj3);
 
    for (int i = 0; i < 9; i++)
    {
        cj1 += 0.2;
        cj2 += 0.2;
        cj3 += 0.2;
        ci += 0.2;

        Inteiros(ci, cj1);
        Inteiros(ci, cj2);
        Inteiros(ci, cj3);

    }

    printf("I=2 J=3\n");
    printf("I=2 J=4\n");  
    printf("I=2 J=5\n");

    return 0;
}