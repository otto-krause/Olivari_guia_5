#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int I=0, Num1=0, Num2=0;
    printf("Ingrese el menor numero ");
    scanf("%d",&Num1);
    printf("Ingrese el mayor numero ");
    scanf("%d",&Num2);

    for (I=Num1+1;I<Num2;I++)
    {
        printf("%d\t", I);
    }
}
