#include <stdio.h>
#define TASA_DESCUENTO 0.1
int main()
{
float pro,des,fin;
pro=20;
des=TASA_DESCUENTO*pro;
fin=des-pro;
printf("Precio final=%f",fin);
return 0;
}