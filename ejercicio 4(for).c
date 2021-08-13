#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1=0, I=0, Fact=1;

    printf("Escribe un numero para calcular su factorial\n");
    scanf("%d", &Num1);
   


    for (I=Num1;I>1;I--){
    Fact=Fact*I;
}
    printf("El factorial de %d = %d\n", Num1, Fact);
}
