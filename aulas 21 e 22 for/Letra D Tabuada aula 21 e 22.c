#include<stdio.h>
#include<stdlib.h>

main()
{
	int n, i, res;
		
	printf("\n\n Tabuada \n\n");
	
	printf("Digite um num.: ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i=i+1)
	{
		res = i*n;
		
		printf("%d x %d = %d\n\n",n,i,res);
		
	}
	
	system("pause");
}