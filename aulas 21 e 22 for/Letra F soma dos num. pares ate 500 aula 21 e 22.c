#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,soma=0;
	
	for(i=2; i<=500; i=i+2)
	{
		soma= soma + i;
		
	}
		printf(" Resultado da somatoria dos n. pares de 1 ate 500 = %d \n\n", soma, i, soma);
	
	system("pause");
}