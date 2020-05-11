#include<stdio.h>
int main() { 
int matrix[2][2]; 
int transpose[2][2]; 
int i,j; 
/* Input Nilai Matrik 2x2 */
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("Masukan Nilai Matriks [%d][%d] : ", i+1, j+1);
scanf("%d",&matrix[i][j]);
}
}
/* TRANSPOSE -> baris jadi kolom dan sebaliknya */ 
for (i=0;i<2;i++) { 
	for (j=0;j<2;j++) {
transpose[j][i] = matrix[i][j]; } } 
/* TAMPILKAN MATRIK A */ 
printf("\nMatrik A [2x2]\n"); 
for (i=0;i<2;i++) { 
for (j=0;j<2;j++) { 
printf("%5d",matrix[i][j]); 
} printf("\n"); 
} 
/* TAMPILKAN TRANSPOSE MATRIK A */ 
printf("\nMatrik A Transpose [2x2]\n"); 
for (i=0; i<2; i++) { 
for (j=0; j<2; j++) { 
printf("%5d",transpose[i][j]); 
} 
printf("\n"); 
} 
}
