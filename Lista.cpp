#include <stdio.h>
#include <stdlib.h>

struct Lista 
{
	/*
	//Dato tenido o a ingresar
	int *dato;
	
	//Memoria que quiero reservar
	int *quiero;
	
	//Memoria que tengo
	int tengo;
	*/
	
	// dato almacenado
	int dato;
	//Apunta al siguiente de la estructura Lista
	struct Lista *siguiente;
};

int mostrar ( struct Lista *lista, int dato )
{
	if ( lista == NULL )
	{
		// 1 = no hay espacio
		return 1;
	}
	
	while(lista!=NULL)
	{
		//*(dato->lista)=dato[i];
		printf("%d,", lista->dato);
		lista = lista->siguiente;
	}
}


struct Lista * insertar ( struct Lista *lista, int dato)
/*, int *quiero, int *dato)*/
{
	//Si no tengo memoria, resérvala
	if ( lista == NULL)
	{
		//'dato' es entero        quiero que el tamaño sea igual que el
		//por eso regresa         tamaño de entero ya que no sé de qué
		//datos enteros           tamaño es struct Lista *lista
	   	            //casteo
//		*(quiero) = (int *) malloc ( sizeof (int *) );
		//*(quiero) = (int *) malloc ( sizeof (int *) );
	   	//*(quiero) = (int *) malloc ( sizeof (struct Lista *lista) );
	   	//*(quiero) = (struct Lista *lista) malloc ( sizeof (int *) );
		
//		*(quiero) = (struct Lista *lista) malloc ( sizeof (struct Lista *lista) );
		/**(quiero) = (struct Lista *) malloc ( sizeof (struct Lista) );*/
		return 1;
	}
	
	//Si tengo memoria suficiente, agrega el dato
	else 
	{
		/*
		for (int i=0; i<=quiero; i++)
		{
			//TODOS los datos en la posición i los va a guardar en siguiente
			*(dato)[i]=dato->siguiente;
		}
		*/
			
		
		while ( lista != NULL)
		{	
		    printf("%d, ", lista->dato );
			lista = lista->siguiente;
			
		}	
		
	}
	
	
	
}



int main ()
{
	struct Lista lista (struct Lista *lista, int dato);
	//inserta (struct Lista *lista, int dato);
	
	/*struct Lista *lista = (dato,5);
	struct Lista *dato = (5); 
	struct Lista *siguiente = NULL; 
    */
	//mostrar();
	3
	/*
	lista->dato={5};
	dato->siguiente=NULL;
	*/
	
	//mostrar (lista->dato,6);
	lista = insertar (lista , 80);
	mostrar (lista);
	//mostrar (dato,6);
	//mostrar ();
	
	return 0;

}
