#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    Employee* auxempleado;
    int r,i;
    int flag=0;
    char var1[20];
    char var2[20];
    char var3[20];
    char var4[20];

   pFile=fopen("data.csv","r");
   if(pFile==NULL)
   {
       flag=-1;
   }
   fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
   while(!feof(pFile))
      {
        r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
    //    if(r==4)
    //    {
        auxempleado=(Employee*)malloc(sizeof(Employee));
        auxempleado->id=atoi(var1);
        strcpy(auxempleado->name,var2);
        strcpy(auxempleado->lastName,var3);
        if(strcmp(var4,"false")){
            auxempleado->isEmpty=0;
        }
        else
            auxempleado->isEmpty=1;

      al_add(pArrayListEmployee,auxempleado);

        flag=1;
       // }
    }
    fclose(pFile);
    return flag;
}
