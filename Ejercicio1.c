//Avila Flores Ahmed
//Practica 9 Arreglos unidimensionales Ejercicio 1

//Dado una lista con 5 enteros imprimir la lista

#include <stdio.h>

void main()
{
    int list[5] = {228, 854, 789, 741, 985};
    int i; 
    
    printf("los numeros de la lista son: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", list[i]);
    }
    
    printf("\n");
}
