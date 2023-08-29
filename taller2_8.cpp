#include<stdio.h>
int main ()
{
    int i;
    float cali[10],prom,acu;
    for (i=1;i<=10;i++)
    {
        printf("ingrese la califiacion %d=",i);
        scanf("%f",&cali[i]);
        acu=acu+cali[i];
        
    }
    for (i=1;i<=10;i++)
    {
        printf("califiacion%d=%f\n",i,cali[i]);
        
    }
    prom=acu/10;
    printf("El promedio es %f",prom);
    for (i=1;i<=10;i++)
    {
         std::lesscali[i];
        
    }
    return 0;
}