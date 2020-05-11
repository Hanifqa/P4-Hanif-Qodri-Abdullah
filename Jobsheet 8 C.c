#include <stdio.h>
int main()
{
	int x[10],i;
	for(i=0;i<10;i++)
	{
		printf("masukannilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
	printf("nilaike %i = %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
