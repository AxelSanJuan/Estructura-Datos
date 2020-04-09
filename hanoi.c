#include <stdio.h>
#include <stdlib.h>

struct Lista
{
	/*char asterisco;*/
	int dato;
	struct Lista *siguiente;
	
};

struct Lista *insertar (struct Lista* lista, int dato)
	struct Lista *a=NULL;
	struct Lista *b=NULL;
	struct Lista *c=NULL;
	
	if (lista == NULL)
	{
		return 0;
	}
	a = (struct Lista *) malloc ( sizeof (struct Lista));
	b = (struct Lista *) malloc ( sizeof (struct Lista));
	c = (struct Lista *) malloc ( sizeof (struct Lista));
	if ( a == NULL && b == NULL && c == NULL)
	{
		return 0;
	}
	
	/*	3 listas enlazadas	
	a->siguiente = b;
	b->siguiente = c;
	c->siguiente = NULL;*/
	a->dato = dato;
	for (a=lista ; !( a->siguiente == NULL) ; )
	{
		a->siguiente = b;
	}
	b->siguiente = c;
	
	
}






int mostrar (struct Lista *lista)
{
	if ( lista == NULL)
	{
		return 0;	
	}	
	while ( lista != NULL)
	{
		printf ("%d\t",lista->dato);
	}
}



main ()
{
	struct Lista aa;
	struct Lista bb;
	struct Lista cc;
	struct Lista *nueva=NULL;
	
	aa = insertar(nueva,6);
	nueva = insertar (nueva,6);
	nueva = insertar (nueva,6);
	
	mostrar (&aa);
	
	
	return 0;
}
