#include <stdio.h>
#include <stdlib.h>

int main()
{
    int venta=0, vendedores=0, dias=0, I=0, promedio=0, total_ventas=0, suma=0, mayor=0;
printf("Ingrese el numero de vendedores ");
        scanf("%d", &vendedores);
printf("Ingrese la cantidad de dias trabajados ");
        scanf("%d", &dias);
            for (I=0;I<vendedores;I++) {
            printf("  El vendedor %d vendio diariamente: ",I+1);
            scanf("%d", &venta);
            total_ventas=venta*dias;
            suma=suma+total_ventas;
            printf("  El vendedor %d vendio en total: \n  %d\n", I+1, total_ventas);
            if (mayor<venta)
            mayor=venta;
            }
        promedio=suma/vendedores;
        printf("El promedio de ventas es de: \n%d\n", promedio);
        printf("El vendedor que mas vendio fue el que vendio: \n%d\n", mayor);

}
