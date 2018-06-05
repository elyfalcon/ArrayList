#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
int i;
ArrayList* listaEmpleados;


Employee* miEmpleado;
Employee* miEmpleado2;
Employee* aux;
int tam=1;
//hacer new

miEmpleado=(Employee*)malloc(sizeof(Employee));

miEmpleado->id=7;
strcpy(miEmpleado->name, "Juan");
miEmpleado->isEmpty=1;
strcpy(miEmpleado->lastName,"Gomez");

miEmpleado2=(Employee*)malloc(sizeof(Employee));
miEmpleado2->id=8;
strcpy(miEmpleado2->name,"Ariel");
miEmpleado2->isEmpty=1;
strcpy(miEmpleado2->lastName,"Fernandez");


listaEmpleados=al_newArrayList(); //tengo instanciado en memoria un array list
al_add(listaEmpleados,miEmpleado);
al_add(listaEmpleados,miEmpleado2);
printf("Elementos: %d\n", al_len(listaEmpleados));

for(i=0;i<al_len(listaEmpleados);i++)
{
aux=(Employee*)al_get(listaEmpleados,i); //hacer un for
printf("%d--%s\n",aux->id,aux->name);
}

    return 0;
}
