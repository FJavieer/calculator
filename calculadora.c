/******************************************************************************
 ******************************************************************************
 ******************************************************************************/

	/* pow() sqrt() */
#include <math.h>
	/* printf() */
#include <stdio.h>


/******************************************************************************
 ******* static functions *****************************************************
 ******************************************************************************/
static	float	suma(float a, float b)
{
	return	a + b;
}

static	float	resta(float a, float b)
{
	return	a - b;
}

static	float	multiplica(float a, float b)
{
	return	a * b;
}

static	float	divide(float a, float b)
{
	if (b == 0) {
		return	0;
	} else {
		return	a / b;
	}
}

static	float	cuadrado(float a)
{
	return	a * a;
}

int	menu()
{

	int opc;

	printf("----------Calculadora-----------");
	printf("\n--------------------------------");
	printf("\n--------------------------------");
	printf("\n1..Suma-------------------------");
	printf("\n2..Resta------------------------");  
	printf("\n3..Multiplicación---------------"); 
	printf("\n4..division---------------------"); 
	printf("\n5..Elevar al cuadrado-----------");
	printf("\n6..Salir------------------------");
	printf("\n--------------------------------");
	printf("\n--------------------------------");
	printf("\nSeleccione una opcion:----------\n");
	scanf("%d", &opc);

	return	opc;
}


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

	if ((opcion == 1)  ||  (opcion == 2  ||  (opcion == 3)  ||
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
		getch();
	}

	return	0;
}

/******************************************************************************
 ******************************************************************************
 ******************************************************************************/
