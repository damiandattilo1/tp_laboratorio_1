
/** \brief imprime el menu y deja seleccionar la opcion de operacion
 *
 * \return la opcion seleccionada
 *
 */

int menu ();

/** \brief hace los calculos requeridos
 *
 * \param 1er operando
 * \param 2do operando
 * \param  puntero a la variable que contendrá el resultado de la funcion suma en el main
 * \param  puntero a la variable que contendrá el resultado de la funcion resta en el main
 * \param  puntero a la variable que contendrá el resultado de la funcion multiplicacion en el main
 * \param  puntero a la variable que contendrá el resultado de la funcion division en el main
 * \param  puntero a la variable que contendrá el resultado de la funcion factorial en el main, para el primer operando
 * \param  puntero a la variable que contendrá el resultado de la funcion factorial en el main, para el segundo operando
 *
 */

void calcular (int x, int y, int *s, int *r, int *m, float *d, int *fx, int *fy);
/** \brief suma dos enteros
 *
 * \param  operando 1
 * \param  operando 2
 * \return la suma de los dos operandos
 *
 */


int suma (int a, int b);

/** \brief resta dos enteros
 *
 * \param  operando 1
 * \param  operando 2
 * \return la resta de los dos operandos
 *
 */

int resta (int a, int b);

/** \brief multiplica dos enteros
 *
 * \param  operando 1
 * \param  operando 2
 * \return la multiplicacion de los dos operandos
 *
 */

int multiplicacion (int a, int b);

/** \brief divide dos enteros
 *
 * \param  operando 1
 * \param  operando 2
 * \return la division de los dos operandos
 *
 */

float dividir (float a, float b);

/** \brief calcula el factorial de un numero entero
 *
 * \param  operando
 * \return el vectorial del operando
 *
 */

int factorial (int a);

/** \brief imprime todos los resultados
 *
 * \param  resultado de la suma
 * \param  resultado de la resta
 * \param  resultado de la multiplicacion
 * \param  resultado de la division
 * \param  resultado del factorial del primer operando
 * \param  resultado del factorial del segundo operando
 *
 */

void imprimir(int sumar, int restar, int multiplicar, float dividir, int factorialX, int factorialY);
