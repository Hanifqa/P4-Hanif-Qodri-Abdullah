#include<stdio.h>
main()
{ int x,y;
int A[2][2];
int B[2][2];
int C[2][2];
printf("PROGRAM PERKALIAN MATRIKS 2x2\n");
printf("\nInput elemen matriks A : \n");
for (x=0;x<2;x++){
for(y=0;y<2;y++){
printf("A[%d,%d] = ",x,y);
scanf("%d", &A[x][y]);
}
}
printf("\nInput elemen matriks B : \n");
for (x=0;x<2;x++)
{ for(y=0;y<2;y++)
{ printf("B[%d,%d] = ",x,y);
scanf("%d", &B[x][y]);}
}
printf("\n");
for (x=0;x<2;x++)
{ for(y=0;y<2;y++)
{ C[0][0]=(A[0][0]*B[0][0])+(A[0][1]*B[1][0]);
C[0][1]=(A[0][0]*B[0][1])+(A[0][1]*B[1][1]);
C[1][0]=(A[1][0]*B[0][0])+(A[1][1]*B[1][0]);
C[1][1]=(A[1][0]*B[0][1])+(A[1][1]*B[1][1]);}
}
printf("\n A x B =\n");
for (x=0;x<1;x++)
{ for(y=0;y<1;y++)
{ printf("\n |%d %d| x |%d %d| = |%d %d|\n",
A[0][0],A[0][1],B[0][0],B[0][1],C[0][0],C[0][1]);
printf(" |%d %d| x |%d %d| = |%d %d|",
A[1][0],A[1][1],B[1][0],B[1][1],C[1][0],C[1][1]);}
}
printf("\n");
}





