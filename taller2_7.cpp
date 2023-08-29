#include <stdio.h>
int main ()
{
    int i;
    float num,acu;
    printf("Ingrese un numero");
    scanf("%f",&num);
    acu=0;
    for (i=0;i=num;i++)
    {
    acu=num*(num-i);
    }
    printf("El factorial de %f es %f",num,acu);
}