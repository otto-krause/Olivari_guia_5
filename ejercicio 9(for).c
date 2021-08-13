#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mayora=0, menora=0, I=0, sueldo=0, cantidad=0, exacto=0;
printf("Ingrese la cantidad de personas a tomar en cuenta: ");
        scanf("%d", &cantidad);
        for(I=0;I<cantidad;I++) {
             printf("Introduzca el sueldo de la persona nro%d (sin signo): ", I+1);
             scanf("%d", &sueldo);
             if(sueldo>2000)
             {
                  mayora+=+1;
             }
             else
             if (sueldo<2000)
             {
                  menora+=+1;
             }
             else
                  exacto+=+1;
        }
       
    printf("La cantidad de personas que cobran mas de 2000 pesos son: %d\n", mayora);
    printf("La cantidad de personas que cobran menos de 2000 pesos son: %d\n", menora);
    printf("La cantidad de personas que cobran 2000 pesos exactos son: %d\n", exacto);

}
