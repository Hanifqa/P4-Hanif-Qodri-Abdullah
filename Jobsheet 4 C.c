#include <stdio.h>
#include <conio.h>
main (){ 
int i, j;
char ulang;
int matrikA [2][2], matrikB [2][2], HasilMatrik [2][2];
/* Menu Utama */
sp:
printf("Operasi Perhitungan Matriks\n");
/* Input Nilai Matrik A */
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("Masukan Nilai Matriks A [%d][%d] : ", i+1, j+1);
scanf("%d",&matrikA[i][j]);
}
}
/* Input Nilai Matrik B */
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("Masukan Nilai Matriks B [%d][%d] : ", i+1, j+1);
scanf("%d",&matrikB[i][j]);
}
}
/* Show Matrik A */
printf("\nNilai Matriks A adalah :\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("%d\t",matrikA [i][j]);
}
printf("\n");
}
/* Show Matrik B */
printf("\nNilai Matriks B adalah :\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("%d\t",matrikB [i][j]);
}
printf("\n");
}
printf("\n----------------------------------\n");
/* Pengurangan Matrik */
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ HasilMatrik [i][j]= matrikA [i][j]-matrikB [i][j];
}
}
/* Show Hasil Pengurangan */
printf("\nHasil Pengurangan Matriks Adalah :\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("%d\t",HasilMatrik [i][j]);
printf("\n");
}
}
}
