#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
char nama[3][3];
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("NIM [%i][%i] : ",i+1,j+1);
gets(nama[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("NIM [%i][%i] : %s\n",i+1,j+1,nama[i][j]);
}
}
printf("\n");
system("PAUSE");
return 0;
}
