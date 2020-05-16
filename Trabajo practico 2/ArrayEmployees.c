// < >
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"



int initEmployees(Employee list [], int len)
{
    for(int i=0;i<len;i++)
        list[i].isEmpty = 1;

    return 0;
}


int addEmployee(Employee list [], int len, int id, char name[],char
lastName[],float salary,int sector)
{
    int index;

    index = findEmpty(list, len);
    if(index == -1)
    {
        printf("Sistema completo\n\n");
        return -1;
    }
    else
    {

        list[index].id = id;
        strcpy(list[index].name, name);
        strcpy(list[index].lastName, lastName);
        list[index].salary = salary;
        list[index].sector = sector;
        list[index].isEmpty = 0;
        return 0;
    }
}

void updateEmployee(Employee vec[], int tam)
{
    int id;
    int indice;
    char confirma;
    char nuevoNombre[51];
    char nuevoApellido[51];
    float nuevoSueldo;
    int nuevoSector;

    system("cls");
    printf("***** Modificar empleado *****\n\n");

    printf("Ingrese Id: ");
    scanf("%d", &id);

    indice = findEmployeeById(vec, tam, id);

    if(indice == -1)
    {
        printf("No hay registro de un empleado con el Id: %d\n", id);
    }
    else
    {

        printf("\n %d       %10s           %10s           %f                %d         \n\n", vec[indice].id, vec[indice].name, vec[indice].lastName, vec[indice].salary, vec[indice].sector);

        printf("\nModifica nombre?: ");
        fflush(stdin);
        scanf("%c", &confirma);
        if(confirma == 's')
        {
            printf("Ingrese nuevo nombre: ");
            fflush(stdin);
            gets(nuevoNombre);

            strcpy(vec[indice].name, nuevoNombre);
            printf("Se ha actualizado el nombre con exito\n\n");
        }
        else
        {
            printf("Se ha cancelado la operacion\n\n");
        }

        printf("\nModifica apellido?: ");
        fflush(stdin);
        scanf("%c", &confirma);
        if(confirma == 's')
        {
            printf("Ingrese nuevo apellido: ");
            fflush(stdin);
            gets(nuevoApellido);

            strcpy(vec[indice].lastName, nuevoApellido);
            printf("Se ha actualizado el apellido con exito\n\n");
        }
        else
        {
            printf("Se ha cancelado la operacion\n\n");
        }



        printf("\nModifica sueldo?: ");
        fflush(stdin);
        scanf("%c", &confirma);
        if(confirma == 's')
        {
            printf("Ingrese nuevo sueldo: ");
            scanf("%f", &nuevoSueldo);

            vec[indice].salary = nuevoSueldo;
            printf("Se ha actualizado el sueldo con exito\n\n");
        }
        else
        {
            printf("Se ha cancelado la operacion\n\n");
        }

        printf("\nModifica sector?: ");
        fflush(stdin);
        scanf("%c", &confirma);
        if(confirma == 's')
        {
            printf("Ingrese nuevo sector: ");
            scanf("%d", &nuevoSector);

            vec[indice].sector = nuevoSector;
            printf("Se ha actualizado el sueldo con exito\n\n");
        }
        else
        {
            printf("Se ha cancelado la operacion\n\n");
        }
    }

}


int findEmpty(Employee vec[], int tam)
{
    int index=-1;
    for(int i=0;i<tam;i++)
    {
        if(vec[i].isEmpty==1)
        {
            index=i;
            break;
        }
    }

    return index;
}

int findEmployeeById(Employee list[], int len,int id)
{
    for(int i=0; i<len; i++)
    {
        if(list[i].id == id && list[i].isEmpty == 0)
        {
            return i;
        }
    }
    return -1;
}


int removeEmployee(Employee list[], int len, int id)
{
    int index;

    index=findEmployeeById(list, len, id);

    if(index == -1)
    {
        printf("ERROR: No existe ningun empleado con ese id\n\n");
        return -1;
    }
    else
    {
        list[index].isEmpty=1;
        return 0;
    }

}

/*
int sortEmployees(Employee list, int len, int order)
{
    return 0;
}
*/
int printEmployees(Employee list[], int length)
{
    if(list[0].isEmpty==1)
    {
        printf("\nNo hay empleados que listar\n");
    }
    else
    {
        printf("******Listado de Empleados*******\n\n");
        printf("ID      Nombre          Apellido          Salario             Sector             \n\n");
        for(int i=0; i<length && list[i].isEmpty==0; i++)
        {
            printf("%d       %10s           %10s           %f                %d         \n\n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);
        }
    }
    return 0;
}

void informes(Employee vec[], int tam)
{
    int exit=0;
    do
    {
        switch(menuInformes())
        {
        case 1:
            printEmployees(vec, tam);
            break;
        case 2:
            salarios(vec, tam);
        case 3:
            exit=1;
        }
        system("pause");
    }while(exit!=1);
}

int menuInformes()
{
    int opcion;

    system("cls");
    printf("*******MENU DE INFORMES*********\n\n");
    printf("1 Listar empleados");
    printf("\n2 Total y promedio de salarios");
    printf("\n3 Salir");

    scanf("%d", &opcion);
    return opcion;
}

void salarios(Employee vec[], int tam)
{
    int i;
    float sumaSalario=0;
    float promedioSalario;
    for(i=0; i<tam && vec[i].isEmpty == 0; i++)
    {
        sumaSalario=sumaSalario+vec[i].salary;
    }
    if(i>0)
    {
        promedioSalario=sumaSalario/i;
    }
    printf("\nLa suma de los salarios es de %.2f y el promedio es de %.2f\n\n", sumaSalario, promedioSalario);
}
