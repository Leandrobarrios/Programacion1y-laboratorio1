#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    int num1;
    int num2;
    int resultado_suma;
    int resultado_resta;
    float division;
    int multiplicacion;
    int resultado_factorial;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                scanf("%d", &num1);
                printf("el numero 1 es : %d\n", num1);
                break;
            case 2:
                scanf("%d",&num2);
                printf("el numero 2 es: %d\n", num2);
                break;
            case 3:
                resultado_suma=suma(num1,num2);
                printf("la suma de los numeros es :%d\n",resultado_suma);
                break;
            case 4:
                resultado_resta=resta(num1,num2);
                printf("la resta da como resultado %d\n",resultado_resta);
                break;
            case 5:
                division=num1/num2;
                printf("la division de los numeros da: %f\n", division);
                break;
            case 6:
                multiplicacion=num1*num2;
                printf("la multiplicacion de los numeros da :%d\n",multiplicacion);
                break;
            case 7:
                resultado_factorial=factorial(num1);
                printf("el factorial es : %d\n", resultado_factorial);
                break;
            case 8:
                resultado_suma=suma(num1,num2);
                printf("la suma de los numeros es :%d\n",resultado_suma);
                resultado_resta=resta(num1,num2);
                printf("la resta da como resultado %d\n",resultado_resta);
                division=num1/num2;
                printf("la division de los numeros da: %f\n", division);
                multiplicacion=num1*num2;
                printf("la multiplicacion de los numeros da :%d\n",multiplicacion);
                resultado_factorial=factorial(num1);
                printf("el factorial es : %d\n", resultado_factorial);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}


