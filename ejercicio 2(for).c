#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmro=0, numeros=0, I=0, promedio=0, suma=0, mayor=0, nmro_total=0, prom=0;
printf("Ingrese la cantidad de numeros a tomar en cuenta: ");
        scanf("%d", &numeros);
            for (I=0;I<numeros;I++) {
            printf("  El numero %d es: ",I+1);
            scanf("%d", &nmro);
            if (mayor<nmro)
            mayor=nmro;
            nmro_total=numeros*nmro;
            suma=suma+nmro_total;
            }
        promedio=suma/numeros;
        prom=promedio/numeros;
        printf("El numero promedio es: \n%d\n", prom);
        printf("El numero mas grande es: \n%d\n", mayor);

}
