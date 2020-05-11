#include <stdio.h>
int main()
{
	int i;
	char nama[6]={'k','i','a'};
	char nama2[6]="kia";
	printf("Nama per karakter = ");
	for(i=0;i<=5;i++)
	{
		printf("%c",nama[i]);
		
	}
	printf("\n");
	printf("Nama = %s\n\n",nama2);
	return 0;
}
