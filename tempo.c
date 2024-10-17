#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int i, f, res;

    scanf("%d %d", &i, &f);

    if (i == f){
        printf("O JOGO DUROU 24 HORA(S)\n");
        return 0;
    }

    res = f - i;

    if (res < 0){
        res = res + 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", res);
    return 0;
}

