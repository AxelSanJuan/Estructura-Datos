#include <stdio.h>
#include <stdlib.h>
/*
*debe tener un tamaño grande
*Colisiones, dos elementos distinos que caen en la misma casilla

*/

/*
Resolución de coliciones
1- Lineal. si esta ocupada la casiila, que vaya a la siguiente posicion, y si esta
   vacia que lo ponga ahi
2- Encadenamiento enlazado, meiante listas enlazas se encolan/forman los elementos
   que tengan el mismo valor hash

*/
 struct hash 
 {
 	int arreglo [10];
	int dato;
	int pos=0;	
	int hasheo;
 };
 /*
 es una lista, pero en vez de ordenarlos como lista,
 lor ordena con la fn hash
 */
 
/* int insertar ( int arreglo, int dato)
*/
struct hash *insertar (int arreglo, int dato)
 {
 	/*	POSICIONES, para saber el indice	*/
 	for ( int i=0; i<10;i++)
 	{
 		pos = arreglo [i];
 		/*
		 arreglo = arreglo [pos];
		*/
	}
	if (arreglo == NULL)
	{
		return 0;
	}
	if ( pos == NULL)
	{
		return 0;
	}
 	/*	FUNCION HASH	*/
 	hasheo = ( (2*dato) + 3) %9;
 		
 }

int mostrar (int arreglo)
{
	if ( arreglo == NULL )
	{
		return 0;
	}
	
	while ( arreglo != NULL )
	{
		printf ("%d\t",arreglo[dato]);
		//printf ("%d\t",arreglo[haseo]);
		//printf ("%d\t",haseo);
	}
}
 
 
main ()
{
	/*	Se supone que nada mas llamo a los que necesito*/
	struct hash nuevo;
	nuevo = insertar (arreglo, 13);
	nuevo = insertar (arreglo, 5);
	nuevo = insertar (arreglo, 28);
	nuevo = insertar (arreglo, 9);
	nuevo = insertar (arreglo, 43);
	nuevo = insertar (arreglo, 39);
	
	mostrar (&nuevo);
	

	return 0;
}
