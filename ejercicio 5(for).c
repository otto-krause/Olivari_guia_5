#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bas=0, exp=0, resultado=0, I=0;
    resultado=1;
    printf("Introduzca un numero de base: ");
    scanf("%d", &bas);
    printf("Introduzca un numero de exponente: ");
    scanf("%d", &exp);

for (I=1;I<=exp;I++){
    resultado=resultado*bas;
}

    printf("El numero es: \n%d\n", resultado);

}
