#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//Programa: Validar si el usuario lee el tipo de dato correctamente.

int main(int argc, char *argv[])
{
	long int N;
	int i,x,y;
	char Numero[6];
	int Bandera;
	char Num;
//Instrucciones Ejecutables
	//printf("Por favor Ingrese un numero entero hasta 5 cifras\n");
	do
	{
		do
		{
			Bandera = 1;
			printf("Ingresa un numero\n", );
			gets(Numero);
			for (i = 0; i < strlen(Numero)-1; i++)
			{
				Num=Numero[i];
				if (Num<'0' || Num>'9')if (Num!='-') Bandera=0;
				if (Num == '-' && i>0) Bandera=0;
				
			}
		} while (Bandera=1);

		N = atol(Numero);
		if (N < -32768 || N > 32767)
		{
			Bandera = 0;
		}else{
			Bandera = 1;
		}

	} while (Bandera!=1);
	printf("El numero es: %d\n\n",N );

//FIN	
//HOLA?
	
	

//Sistema de pausa
	system("PAUSE");	
  return 0;
}
//AUTOR: LUIS ARTURO MENDOZA

