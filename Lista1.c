#include <stdio.h>
#include <stdlib.h>

struct Lista
{
	int dato;
	struct Lista *siguiente;
};


struct Lista *insertar (struct Lista *lista, int dato)
{
	/*	hay que agregar un nuevo dato a 'insertar'
		'insertar' no inserta nada por si sola	*/
	struct Lista *nuevo=NULL;	
	if (lista == NULL)
	{
		return 0;
	}
	/*	Almacenamos espacio en nuevo, no en 'insertar'	*/
	nuevo = (struct Lista *) malloc ( sizeof(struct Lista) );
	if (nuevo == NULL)
	{
		return 0;
	}
	
	nuevo = lista;
	lista = lista->siguiente;
	/*
	nuevo->dato =dato;
	nuevo->siguiente = lista;
	*/
	
	return nuevo;
}


struct Lista *eliminar (struct Lista *lista )
{
	struct Lista *eliminado=NULL;
	if (lista == NULL)
	{
		return 0;
	}
	eliminado = lista;
	lista = lista->siguiente;
	free (eliminado);
	return lista;	
}

int mostrar (struct Lista *lista)
{
	if (lista==NULL)
	{
		return 0;
	}
	
	while (lista != NULL)
	{
		printf ("%d\t",lista->dato);
	}
}

main ()
{
	struct Lista a;
	struct Lista b;
	struct Lista c;
	struct Lista *nueva=NULL;
	/*
		struct Lista a; no lleva apuntador ya que solo estaba asignando al 'siguiente'
		por y tiene que rellenarse el 'dato' y 'siguinte', no solo 'siguiente'
		Y como no son apuntadotes, llevan el '.' en el 'a.dato'
	*/
	a.dato  = 1;
	b.dato  = 2;
	c.dato  = 3;
	
	a.siguiente  =&b;
	b.siguiente  =&c;
	c.siguiente  =NULL;
	
	mostrar (&a);
	
	
	
	return 0;
}
