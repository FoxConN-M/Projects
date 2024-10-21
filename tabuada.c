#include <stdio.h>
 
int main() {
 
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        int tab = i * n;
        printf("%d x %d = %d\n", i, n, tab);
    }
    
 
    return 0;
}