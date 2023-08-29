 #include <stdio.h>
float calculadora(float a1,float a2,int num);
int main ()
{

        int act,num,si;
        float a1, a2, resf;
        while (si!=2)
        {
        printf("Ponga los dos datos\n");
        scanf("%f",&a1);
        scanf("%f",&a2);
        printf ("elije una operacion\n");
        printf("suma=1 \n");
        printf("resta=2 \n");
        printf("multiplicacion=3 \n");
        printf("division=4 \n");
        scanf("%d",&num);
        resf=calculadora(a1,a2,num);
        printf("Quieres hacer otra operacion [1=seguir][2=salir=]?\n");
        scanf("%d",&si);
        }
        printf("gracias");
        return 0;
       
        }


float calculadora(float a1, float a2, int num)
{
    float res;
    switch (num)
    {
        case 1:
            res=a1+a2;
            printf ("La suma es=%f\n",res);
        break;
        case 2:
            res=a1-a2;
            printf ("La resta es=%f\n",res);
        break;
        case 3:
            res=a1*a2;
            printf ("La multiplicacion es=%f\n",res);
        break;
        case 4:
            res=a1/a2;
            printf("La division es=%f",res);
        break;
        default:
            printf("No elegiste ninguna opcion valida\n");
    }
    return 0;   
}