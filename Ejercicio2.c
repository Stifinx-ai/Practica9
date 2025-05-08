//utilizando una lista capturar las 5 calificaciones de un alumno e imrpimir el promedio


#include <stdio.h>

void main()
{
    int list[5];
    int i, calif = 0;
    float promedio;

    for (i=0; i<5; i++)
    {
        printf ("calificación %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    
    for (i=0; i<5; i++)
    {
        calif = calif + list[i];
    }
    
    promedio = calif / 5;
    printf("promedio es: %f\n", promedio);
}
