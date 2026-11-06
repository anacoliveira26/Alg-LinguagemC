#include<stdlib.h>
#include<stdio.h>

main()
{
	int i, n, d;
	for (i=1; i<=5; i++)
	{
		printf("Digite um num.: ");	
		scanf("%d",&n);
		
		d = n * 2;
		
		printf("\n O dobro de %d = %d \n\n",n,d);
		}	
	
	printf("\n Fim. \n\n");
	system("pause");
}