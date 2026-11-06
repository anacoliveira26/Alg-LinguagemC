#include<stdlib.h>
#include<stdio.h>

main()
{
	printf("\n Tabela de 15 a 200 ao quadrado \n\n");
	int i, q;
	
	for(i=15; i<=200; i++)
	{
		q = i * i;
		printf("%d x %d = %d \n",i,i,q);
		_sleep(0.5);	
	}	
	
	system("pause");
}