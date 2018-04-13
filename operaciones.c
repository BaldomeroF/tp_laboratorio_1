#include "operaciones.h"

float sumar(float a, float b) 
{
    return a + b;
}

float restar(float a, float b)
{
    return a - b;
}

float dividir(float a, float b)
{
    return a / b;
}

float multiplicar(float a, float b)
{
    return a * b;
}

int factorial(float a)
{
    int fact = 1;
    int numeroEntero = (int)a;

    if(a - numeroEntero == 0) 
    {
        for(int i = 1; i <= a; i++)
            fact = fact * i;
        return fact;
    }
    
    return 0;
}