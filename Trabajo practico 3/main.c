#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int opcion = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    if(listaEmpleados == NULL)
    {
        printf("No se pudo obtener memoria");
        exit(EXIT_FAILURE);
    }
    else
    {
        do{
            opcion=menu();
            switch(opcion)
            {
                case 1:
                    controller_loadFromText("data.csv",listaEmpleados);
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
            }
        }while(opcion != 10);
    }
    return 0;
}

int menu()
{
    int opcion;

    printf("*******MENU DE OPCIONES********\n");
    printf("1 Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
    printf("2 Cargar los datos de los empleados desde el archivo data.bin (modo binario).\n");
    printf("3 Alta de empleado\n");
    printf("4 Modificar datos de empleado\n");
    printf("5 Baja de empleado\n");
    printf("6 Listar empleados\n");
    printf("7 Ordenar empleados\n");
    printf("8 Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
    printf("9 Guardar los datos de los empleados en el archivo data.bin (modo binario).\n");
    printf("10 Salir\n\n");

    printf("Su opcion: ");
    scanf("%d", &opcion);

    system("cls");

    return opcion;
}
