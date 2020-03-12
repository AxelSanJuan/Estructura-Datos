#include <stdio.h>
#include <stdlib.h>

struct Vector
{
	int dato;
 	struct Vector *arreglo;
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
struct Vector * insertar ( struct Vector *arreglo)
{
	int i=0;
	if ( arreglo == NULL)
	{
		return 0;
	}
	insertar = (struct Vector ) malloc ( sizeof(struct Vector ) );
	
	insertar = arreglo*2;
	for ( i=0; i<arreglo->dato ; i++ )
	{
	  	insertar = arreglo [i];
	}
	free (arreglo);
	return insertrar;
	
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
	mostrar [nueva];
	
	
	
	return 0;
}
