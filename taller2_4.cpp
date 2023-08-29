#include <stdio.h>

int esPrimo(int num) 
{
  if (num <= 1) 
  {
    return 0;
  }

  for (int i = 2; i * i <= num; i++) 
  {
    if (num % i == 0) 
    {
    return 0;
    }
  }
}

int main() 
{
    int limite;
  
    printf("Introduce el limite de numeros\n");
    scanf("%d", &limite);
    printf("Numeros primos hasta %d:\n", limite);
    
    for (int num = 2; num <= limite; num++) 
    {
      if (esPrimo(num)) 
      {
       printf("%d ", num);
      }
    }
    printf("\n");
    return 0;
}
