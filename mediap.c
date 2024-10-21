#include <stdio.h>
 
int main() {
 
    int n;
    double a, b, c;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        double med;

        med = ((a * 2) + (b * 3) + (c * 5)) / 10;

        printf("%.1lf\n", med);
    }
    
 
    return 0;
}