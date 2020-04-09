#include <stdlib.h>
#include <stdio.h>

struct Torre
{
	int disco;
	struct Torre *torre1;
	struct Torre *torre2;
	struct Torre *torre3;
};


struct Torre *insertar ( struct Torre *torre, int disco)
{
	struct Torre *torre1=NULL;
	struct Torre *torre2=NULL;
	struct Torre *torre3=NULL;
	if ( torre == NULL)
	{
		return 0;
	}
	
	torre1 = malloc ( sizeof (struct Torre));
	torre2 = malloc ( sizeof (struct Torre));
	torre3 = malloc ( sizeof (struct Torre));
	
}

struct Torre *hanoi (int disco, struct Torre *torre1, struct Torre *torre2,struct Torre *torre3)
{
	hanoi (disco-1,torre1,torre3,torre3);
	printf ("Moviendo de la torre %d a la torre %d",torre1,torre3);
	/*		Recursividad	*/
	/*	Llamar a si mismo, ese el truco de magia  */
	hanoi (disco-1,torre2,torre1,torre3);
		
} 

int mostrar (struct Torre *hanoi)
{
	if ( torre == NULL)
	{
		return 0;
	}
	
	while ( torre != NULL )
	{
		printf ("%d",hanoi);
	}
}


main ()
{
	struct Torre torre1;
	struct Torre torre2;
	struct Torre torre3;
	
	/*	Insertando discos en las torres	 */
	/*
	torre1.disco=1;
	torre2.disco=2;
	torre3.disco=3;
	*/
	torre1 = hanoi (1,torre1,torre2,torre3)
	
	mostrar (&hanoi);
		
	
	return 0;
}




