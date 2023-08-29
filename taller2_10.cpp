 #include <stdio.h>
 #include <math.h>
float calcularPotencia(float b,float e);
 int main ()
 {
    float b,e,res;
    printf("escribe b\n");
    scanf("%f",&b);
    printf("escribe e\n");
    scanf("%f",&e);
    res=calcularPotencia(b,e);
    return 0;
 }
float calcularPotencia(float b,float e)
{
float res;
res=pow(b,e);
 printf("%f elevado a %f es igual a %f",b,e,res);
return 0;
}