#include <stdio.h>

int main()
{
	int v[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Digite um numero:\n");
		scanf("%d", &v[i]);
	}
	
	printf("Numeros inseridos:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ", v[i]);
	}
	
}
