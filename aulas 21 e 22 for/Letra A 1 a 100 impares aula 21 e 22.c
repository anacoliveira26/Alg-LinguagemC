#include<stdlib.h>
#include<stdio.h>

main()
{
	int i;
	
	printf("\n\n Tabela de num. impares ate 100 \n\n");
	
	for (i=1; i<=100; i=i+2)
	{
		printf("%d ",i);
	}
	
	system("pause");
}