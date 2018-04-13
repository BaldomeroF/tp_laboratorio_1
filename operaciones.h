#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

/** 
 * \brief  Realiza la operacion de sumar
 *
 * \param a float
 * \param b float
 * \return float suma de a y b
 *
 */
float sumar(float a, float b);

/** 
 * \brief  Realiza la operacion de restar.
 *
 * \param a float
 * \param b float
 * \return float resta de a y b
 *
 */
float restar(float a, float b);

/** 
 * \brief  Realiza la operacion de dividir
 *
 * \param a float
 * \param b float
 * \return float cociente de a y b
 *
 */
float dividir(float a, float b);

/** 
 * \brief  Realiza la operacion de multiplicar
 *
 * \param a float
 * \param b float
 * \return float producto de a y b
 *
 */
float multiplicar(float a, float b);

/**
 * \brief Realiza la operacion factorial
 * 
 * \param a float
 * 
 * return float factorial de a o 0 si a no es entero
 * 
 */
int factorial(float a);

#endif // OPERACIONES_H_INCLUDED