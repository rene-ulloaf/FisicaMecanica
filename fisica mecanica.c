#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//void IngresoDatos();
int X0 = 0,v0 = 0,ac = 0;
int OK = 0;

void IngresoDatos(){
	system("cls");
	printf("********************Itinerario Lanzamiento Vertical********************\n\n\n");
	printf("---Ingreso Datos---\n\n");

	while(OK != 0);{
		printf("Ingresar Posición Inicial: ");
		scanf("%d", &X0);
		fflush(stdout);
		//X0 = getchar();
		//X0 = getche();
		
		printf("Ingresar Velocidad Inicial: ");
		scanf("%d", &v0);
		fflush(stdout);
		//v0 = getche();

		printf("Ingresar Aceleración: ");
		scanf("%d", &ac);
		fflush(stdout);
		//ac = getche();

		printf("¿Datos Correctos?:");
		scanf("%d", &OK);
		fflush(stdout);
	}
}

void main(){
	int salir;

	do{
		if(OK != 1){
			IngresoDatos();
		}

		system("cls");
		printf("********************Itinerario Lanzamiento Vertical********************\n\n\n");
		printf("Posición Inicial: %d \n", X0);
		printf("Velocidad Inicial: %d \n", v0);
		printf("Aceleración: %d", ac);

		printf("\n\n\nPresione Escape Para Salir\n\n");
		salir = getch();
	}while(salir != 27);{
		exit(1);
	}
}