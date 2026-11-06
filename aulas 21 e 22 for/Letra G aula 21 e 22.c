#include<stdio.h>
#include<stdlib.h>

main()
{
	int n1, n2;
	char cont;
	
	do{
	
	printf("Digite o prim. num.: ");
	scanf("%d",&n1);
	printf("Digite o seg. num.: ");
	scanf("%d",&n2);
	
	if(n1>n2)
	{
		printf("O maior num. de %d e %d e: %d \n\n",n1, n2, n1);
	}
	else if (n2>n1)
	{
		printf("O maior num. de %d e %d e: %d \n\n",n1, n2, n2);
	}
	else
	{
		printf("Os valores sao iguais.\n\n");
	}
	
	printf("Deseja continuar? (S/s para sim.): \n\n");
	scanf(" %c", &cont);
	
	}while (cont == 's' || cont == 'S');
	
	 printf("Programa terminado.\n");
	
	system("pause");
}