#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"

#define TAM 1000

// TRABAJO PRACTICO N° 2
// < >


int menu();

int main()
{
    Employee arrayEmployees[TAM];

    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;

    int exit=0;

    initEmployees(arrayEmployees, TAM);


    do
    {
        switch(menu())
        {
            case 1:
                printf("\nIngrese id: ");
                scanf("%d", &id);
                printf("\nIngrese nombre: ");
                fflush(stdin);
                gets(name);
                printf("\nIngrese apellido: ");
                fflush(stdin);
                gets(lastName);
                printf("\nIngrese salario: ");
                scanf("%f", &salary);
                printf("\nIngrese sector: ");
                scanf("%d", &sector);
                printf("\n\n");

                addEmployee(arrayEmployees, TAM,id,name,lastName,salary,sector);
                break;
            case 2:
                updateEmployee(arrayEmployees, TAM);
                break;
            case 3:
                removeEmployee(arrayEmployees, TAM,id);
                break;
            case 4:
                informes(arrayEmployees, TAM);
                break;
            case 5:
                exit=1;
                break;
            default:
                printf("\nNO ES UNA OPCION VALIDA, INGRESE NUEVAMENTE\n");
        }
    }while(exit!=1);
    return 0;
}

int menu()
{
    int opcion;

    printf("*******MENU DE OPCIONES********\n");
    printf("1 Altas\n");
    printf("2 Modificar\n");
    printf("3 baja\n");
    printf("4 Informar\n");
    printf("5 Salir\n\n");

    printf("Su opcion: ");
    scanf("%d", &opcion);

    system("cls");

    return opcion;
}


