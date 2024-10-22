#include <stdio.h>
 
int main() {

    while (1)
    {
    int k, n, m, x, y;

    scanf("%d", &k);

    if (k == 0)
    {
        break;
    }
    
    scanf("%d %d", &n, &m);

    for (int i = 0; i < k; i++)
    {
        scanf("%d %d", &x, &y);

        if (x == n || y == m)
        {
            printf("divisa\n");
        }
        
        else if (x > n && y > m)
        {
            printf ("NE\n");
        }
        
        else if (x > n && y < m)
        {
            printf("SE\n");
        }

        else if (x < n && y > m)
        {
            printf("NO\n");
        }
        
        else{
            printf("SO\n");
        }
        
        
    }
    }
    
 
    
    
 
    return 0;
}