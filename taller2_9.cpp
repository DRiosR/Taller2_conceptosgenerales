#include <stdio.h>
int esPrimo(int numero) 
{
if (numero <= 1) 
    {
        return 0; // Los números menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= numero; i++) 
    {
        if (numero % i == 0) 
        {
            return 0; // Si el número es divisible por algún i, no es primo
        }
    }
}
int main()
{
    int num;
    int esPrimo(int num);
    printf ("Ingresa un numero\n");
    scanf("%d",&num);

    if(esPrimo(num))
    {
        printf("SI es primo");
    }
    else 
    {
        printf("NO es primo");
    }

    
}