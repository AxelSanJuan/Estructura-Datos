#include <stdlib.h>
#include <stdio.h>


struct Cola
{
	int dato;
	struct Cola *siguiente;
	//struct Cola *tope;
	
};

struct Cola *insertar ( struct Cola *lista, int dato)
{
	struct Cola *nuevo=NULL;
	if ( lista == NULL)
	{
		return 0;	
	} 
	//reservo memoria para un nuevo dato, no para insertar
	nuevo = (struct Cola *) malloc ( sizeof (struct Cola) );
	//Valia si el pacio se guardó en 'INSERTAR' no puede validar malloc ya que es
	//una funcion de C
	if ( insertar == NULL)
	{
		return 0;
	}
	nuevo = lista ;
	lista = lista -> siguiente;
}

struct Cola *mostrar (struct Cola *lista , int dato) 
{
	struct Cola *aux=NULL;
	if (lista == NULL)
	{
		return 0;
	}
	//primera vuelva
	while ( lista != NULL)
	{
		printf ("%d, ", lista->dato);
		lista = lista ->siguiente;
	}
	return lista;
}

struct Cola * eliminar ( struct Cola*lista)
{
	//quiero saber que NODO está al final, no que int dato está al final
	struct Cola *final=NULL;
	if (lista== NULL)
	{
		return 0;
	}
	/*
	hay que saber el final de la cola y borrar ese final
	es decir, cuando lo imprima que borre el que salió primero
	*/
	//Co mo sabemos el finak sin un for?
	for ( final = lista; !( final->siguiente == NULL ) ; )
	{
//		final = lista->siguiente;
		//lista = lista->siguiente;
		final = final ->siguiente;
	}
	free (final);
	return lista;

}

int main ()
{
	//Como ya le estamos agregando datos, no tenemos que ponerle '*' 
	struct Cola a;
	struct Cola b;
	struct Cola c;
	struct Cola *nueva=NULL;
	
	
	a.dato = 1;
	b.dato = 2;
	c.dato = 3;
	
	//a.siguiente = a la 'DIRECCION' DE MEMORIA de b
	a.siguiente = &b;
	b.siguiente = &c;
	c.siguiente = NULL;
	
	//mostrar ( que es lo que vas a mostrar?, pues la cola  )
	//Muestras a 'a' ya que a eso le pusiste los datos 
	//Vas a la direccion de 'a' para que me muestre todo
	//el dato y el apuntador 
	mostrar (&a);
	
	//'nuevo dato' = insertar un 'nuevo dato' y ponr el '4' 
	nueva = insertar (nueva, 4);
	
	
	
	return 0;
}
