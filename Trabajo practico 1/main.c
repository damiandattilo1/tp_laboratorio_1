#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
#include "alumnoD.h"
// Trabajo práctico N1 2020



int main()
{
    int opcion;  //opcion seleccionada por el usuario

    //variables conteniendo los valores de los operandos
    int x;
    int y;
    //variables conteniendo los resultados de las operaciones
    int sumar;
    int restar;
    int multiplicar;
    float dividir;
    int factorialX;
    int factorialY;
    //flags certificando que el usuario no esquive las opciones
    int ingreso1 =0;
    int ingreso2 =0;
    int calculo =0;




        do  //repite el menu y el ingreso de datos mientras el usuario lo requiera
        {
            fflush(stdin);
            opcion=menu(); //llama a la funcion menu
            fflush(stdin); //limpia el buffer
            system("cls");
            switch(opcion)
            {
            case 1: //ingresa y valida el primer operando
                utn_getNumero(&x, "\nIngrese primer operando: ", "ERROR: No es una opcion valida\n", -100, 100,3);
                ingreso1=1;
                break;
            case 2: //ingresa y valida el segundo operando
                utn_getNumero(&y, "\nIngrese segundo operando: ", "ERROR: No es una opcion valida\n", -100, 100,3);
                ingreso2=1;
                break;
            case 3: //hace los calculos, validando que el usuario no se haya salteado opciones
            {
                if(!ingreso1 || !ingreso2)
                {
                    printf("ERROR, debe ingresar los dos valores");
                }
                else
                {
                    calcular(x, y, &sumar, &restar, &multiplicar, &dividir, &factorialX, &factorialY);
                    calculo=1;
                }
                break;
            }
            case 4: //imprime los resultados
            {
                if(!ingreso1 || !ingreso2 || !calculo)
                {
                    printf("ERROR Debe ingresar y calcular");
                }
                else
                {
                    imprimir(sumar, restar, multiplicar, dividir, factorialX, factorialY);
                }
                break;
            }
            case 5:  //sale del programa
                break;
            default:
                printf("\nNo es una opcion valida");  //mensaje de error si el usuario ha ingresado alguna opcion invalida
            }
        }while(opcion!=5);
    return 0;
}


