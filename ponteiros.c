#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Insira o numero de elementos:\n");
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));

    if (array == NULL){
        printf("Erro na alocacao de memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        printf("Digite o numero do elemento %d: ", i +1);
        scanf("%d", &array[i]);
    }

    printf("Os elementos do array sao:\n");

    for (int i = 0; i < n; i++){
        printf("%d, ", array[i]);
    }

    printf("\n");

    free(array);
    
    return 0;

}