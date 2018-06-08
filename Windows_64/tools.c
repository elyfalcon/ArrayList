#include <stdio.h>
#include <stdlib.h>

int ValidarCantCaracteres(char* cadena,int cantidad)
{
    int longi,flag;
    longi=strlen(cadena);
    flag=0;
    if(longi<=cantidad)
    {
        flag=1;
    }
    return flag;
}
void RemoveSpaces(char* source)
{
  char* i = source;
  char* j = source;

  while(*j != 0)
  {
    *i = *j++;
    if(*i != ' ')
    {
    i++;
    }
  }

  *i = 0;
}
int ComparaFrases(char* frase1,char* frase2)
 {
    char aux[20]={};
    char aux2[20]={};
    printf("Ingrese una frase\n");
    gets(frase1);
    printf("Ingrese una frase\n");
    gets(frase2);
    RemoveSpaces(frase1);
    RemoveSpaces(frase2);
    strlwr(frase1);
    strlwr(frase2);
    printf("frase1:%s",frase1);
    printf("frase1:%s",frase2);
    if(strcmp(frase1,frase2)==0)
    {
        printf("ya ingreso esa frase:");
    }
    else
        printf("Son distintas");
}

