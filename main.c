/******************************************************************************
 ******************************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/* Standard C ----------------------------------------------------------------*/
		/* printf() */
	#include <stdio.h>

/* Project -------------------------------------------------------------------*/
	#include "calculadora.h"


/******************************************************************************
 ******* main *****************************************************************
 ******************************************************************************/
int	main(int argc, char *argv[])
{

	int	opcion;
	float	resultado;
	float	a;
	float	b;

	opcion	= menu();

	if ((opcion == 1)  ||  (opcion == 2)  ||  (opcion == 3)  ||
								(opcion == 4)) {
		printf("\n\nDime el numero a: ");
		scanf("%f", &a);
		printf("Dime el numero b: ");
		scanf("%f", &b);
	} else if (opcion == 5) {
		printf("\n\nDime el numero a: ");
		scanf("%f", &a);
	}

	switch (opcion) {

	case 1:
		resultado	= suma(a, b);
		break;
	case 2:
		resultado	= resta(a, b);
		break;
	case 3:
		resultado	= multiplica(a, b);
		break;
	case 4:
		resultado	= divide(a, b);
		break;
	case 5:
		resultado	= cuadrado(a);
		break;    
	case 6:
		printf("Saliendo");
		break;
	default:
		printf("ERROR: Opcion no valida");
	}

	printf("\n\n\nEl resultado es %.2f.", resultado);

	if (opcion != 6) {
		getchar();
	}

	return	0;
}


/******************************************************************************
 ******************************************************************************
 ******************************************************************************/