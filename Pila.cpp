#include <stdio.h>
#include <stdlib.h>

struct Pila 
{
	int dato;
	struct Pila *siguiente;
	//struct Pila *inicio;
};
// PILA, First In, First Out
// Primero que sale. primero que entra

//necesita regresar una apuntador a la pila?


                   //necesita la lista y el dato
//struct Pila * mostrar (struct Pila *lista, int dato)
void mostrar (struct Pila *lista)
{
	if ( lista == NULL)
	{
		return;
	}
	while ( lista != NULL )
	{
		// imprime el DATO que está en la LISTA
		//Pila es la estructura, no es un nombre que puede ocupar la fn
		printf ("%d, ",lista -> dato);
		//la lista no puede apuntar al mismo dato siempre
		lista = lista -> siguiente;
	}
	printf ("\n");
    return;
}

struct Pila *insertar (struct Pila *lista, int dato)
{
	//para que me genere un nuevo dato con las mismas propiedades
	struct Pila *nuevo=NULL;
	if (lista == NULL)
	{
		return 0;
	}
	//nuevo el que requiere la memoria, no insertar xd
	nuevo = (struct Pila *) malloc (sizeof (struct Pila ));
		if ( nuevo == NULL)
		{
			return lista;
		}		
	nuevo->dato = dato;
//	nuevo->siguiente = lista->siguiente;
	nuevo->siguiente = lista;
//	lista = lista->siguiente;
	return nuevo;
}

struct Pila *eliminar (struct Pila *lista)
{
	struct Pila *eliminado=NULL;
	
	if (lista == NULL)
	{
		return 0;
	}	
	eliminado = lista;
	lista = lista ->siguiente;
	free (eliminado);
	return lista;	
	
}
	
	
	
	


int main ()
{
	//PLANTILLAS A OCUPAR, al fin y al cabo "ya estan declaradas"
	//son apuntadores ya que tienen que reservar DATO y SIGUIENTE
	struct Pila a;
	struct Pila b;
	struct Pila c;
	struct Pila *nueva=NULL;
	
	//el dato que está en LA NUEVA PLANTILLA DECLARADA
	a.dato = 1;
	b.dato = 2;
	c.dato = 3;
	
	a.siguiente = &b;
	b.siguiente = &c;
	c.siguiente = NULL;
	
	//mostrar a 'a' implica imprimir a todos ya que los muestra en 'mostrar'
	/*
	a->dato  = 1;
	b->dato  = 2;
	c->dato  = 3;
	
	a-> siguiente = b;
	b->siguiente  = c;
	c->siguiente  = NULL;
	mostrar (a,1);
	*/
	
	/*
	Se supone que muestra a las plantillas y muestra el dato y el siguiente
	mostrar (a);
	mostrar (b);
	mostrar (c);
	*/
	printf ("Mostrar 1, 2, 3\n\n");
	mostrar (&a);
	
	printf("Inserta 2000\t2\t29\t0\n\n");
	nueva=insertar (&a,2000);
	nueva=insertar (nueva,2);
	nueva=insertar (nueva,29);
	nueva=insertar (nueva,0);
	mostrar (nueva);
	
	printf ("Elimina el primerp, '0' \n\n");
	nueva = eliminar (nueva);
	mostrar (nueva);
	
	
	
	
		
	return 0;
}
