#include <stdio.h>

//função para trocar os numeros do maior para o menor

void sort(double array[], int size){
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size -i -1; j++)
        {
            if (array[j]<array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    


}


int main(){
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

//declarando array para fazer o sort

    double array[] = {A, B, C};
    int size = sizeof(array)/sizeof(array[0]);

//chamando a função com os numeros trocados

    sort(array, size);

//os finalmentes

    if (array[0] >= array[1] + array[2])
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    
    else if ((array[0]*array[0]) == (array[1]*array[1])+(array[2]*array[2]))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    
    else if ((array[0]*array[0]) > (array[1]*array[1])+(array[2]*array[2]))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    
    else if ((array[0]*array[0]) < (array[1]*array[1])+(array[2]*array[2]))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (array[0] == array[1] && array[1] == array[2] && array[2] == array[0])
    {
        printf("TRIANGULO EQUILATERO\n");
    } else if (array[0] == array[1] || array[1] == array[2])
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
