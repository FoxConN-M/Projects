#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leds(char c){
    switch (c)
    {
    case '1': return 2;
    case '2': return 5;
    case '3': return 5;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 3;
    case '8': return 7;
    case '9': return 6;
    case '0': return 6; 
    default: return 0;
    }
}


 
int main() {
 
    int n;
    char num[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", num);
    

    int total = 0;

    for (int j = 0; j < strlen(num); j++)
    {
        total += leds(num[j]);
    }

    printf("%d leds\n", total);

    }

 
    return 0;
}