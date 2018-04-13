#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    float numero1;
    float numero2;
    float resultado;
    int opcion = 0;


    while(opcion != 9)
    {

        printf("1- Ingresar 1er operando (A=%f)\n", numero1);
        printf("2- Ingresar 2do operando (B=%f)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("Ingrese el numero de la opcion que desea:\n");
        scanf("%d",&opcion);

        switch(opcion) 
        {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%f", &numero1);
                break;
            case 2:
                printf("Ingrese un numero: ");
                scanf("%f", &numero2);
                break;
            case 3:
                printf("Resultado de la suma: %f \n", sumar(numero1, numero2));
                break;
            case 4:
                printf("Resultado de la resta: %f \n", restar(numero1, numero2));
                break;
            case 5:
                if(numero2 == 0)
                    printf("Operacion invalida");
                else
                    printf("Resultado de la division: %f \n", dividir(numero1, numero2));
                break;
            case 6:
                printf("Resultado de la multiplicacion: %f \n", multiplicar(numero1, numero2));
                break;
            case 7:
                resultado = factorial(numero1);

                if(resultado != 0)
                    printf("Factorial: %f \n", factorial(numero1));
                else
                    printf("Factorial: Operacion invalida\n");
                break;
            case 8:
                printf("Sumar: %f \n", sumar(numero1, numero2));
                printf("Multiplicar: %f \n", multiplicar(numero1, numero2));
                printf("Restar: %f \n", restar(numero1, numero2));
                if(numero2 == 0)
                    printf("Dividir: Operacion invalida\n");
                else
                    printf("Dividir: %f \n", dividir(numero1, numero2));
                
                resultado = factorial(numero1);

                if(resultado != 0)
                    printf("Factorial: %f \n", factorial(numero1));
                else
                    printf("Factorial: Operacion invalida\n");
                
                break;
            case 9:
                break;
            
        }
    }
        
}