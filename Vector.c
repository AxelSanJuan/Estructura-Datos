#include <stdio.h>
#include <stdlib.h>

struct Vector
{
	int dato;
 	struct Vector *arreglo [100];
};

void mostrar (struct Vector *arreglo)
{
	int i=0;
	if (arreglo == NULL)
	{
		return;
	}
	//hasta qye i sea menor o igual al DATO del ARREGLO
	for ( i = 0; i<arreglo->dato ; i++)
	{
		//como arreglo e un apuntador, *() convierte al arreglo en una variable
		*(arreglo )= arreglo [i];
		printf ("%d, ", arreglo->dato);
	}
	
}

/*
//Voy a insertar al vector, tiene que tener las mismas porpiedades que mi vector
struct Vector * insertar (struct Vector *arreglo)
{
	struct Vector*nuevo=NULL;
	if (arreglo ==NULL)
	{
		return 0;
	}
	nuevo= (struct Vector *) malloc ( sizeof (struct Vector));
	//Checha si reservo memoria, sino regresa 
	if (nuevo ==NULL)
	{
		return 0;
	}
	arreglo = arreglo->dato;	
}
*/
struct Vector *insertar ( struct Vector *arreglo, int dato)
{
	int i=0;
	struct Vector *nuevo=NULL;
	if ( arreglo == NULL)
	{
		return 0;
	}
	//A esta funcion le quiero insertar un 'nuevo' dato, no puedo insertar una 'insersion'
	nuevo = ( struct Vector *) malloc ( sizeof (struct Vector) );
	
	nuevo = *(arreglo)*2;
	//Copiar los deatos el arreglo al nuevo
	//for ( nuevo=arreglo; nuevo<arreglo->dato ; i++ )
	//for ( nuevo=arreglo; arreglo->siguiente != NULL ; i++ )
	//Por que 99, no estaria tomando el dato 100
	//Pero recuerda que empiezras en 0 y no en 1, por eso es 99, es uno menos
	//for ( nuevo=arreglo; nuevo<=99 ; nuevo++ )
	for ( i=0; i<=99; i++)
	{
//	  	nuevo = arreglo->dato  [i];
	  	nuevo = arreglo  [i];
	}
	//Borrar arreglo, porque ya se paso al 'nuevo'
	free (arreglo);
	return nuevo ;
	
}



int main ()
{
	//TIENE INDICES 
	//Ya inicializaamos aqui las variables
	struct Vector *a=NULL;
	
	struct Vector *nueva=NULL;
	a[6] = {1,2,3,4,5};
	
	//Ve a la direccion de 'a' y muestrame lo qe hay adentro,
	nueva = mostrar [a];
	
	
	
	return 0;
}
