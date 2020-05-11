#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std; 
main(){ 
int A[2][2],b,c,baris,kolom; 
char pil; 	
do { 
cout<<" ==========PROGRAM TRANSPOSE MATRIKS========= "<<endl; 
cout<<"Jumlah Baris : "; 
cin>>baris; 	
cout<<"Jumlah Kolom : "; 
cin>>kolom;
cout<<endl; 
for (b=0;b<baris;b++) {
for (c=0;c<kolom;c++) { 
cout<<"Matriks["<<b+1<<","<<c+1<<"] = "; 
cin>>A[b][c]; 
} 
} 	
cout<<endl<<endl; 
cout<<"Matriks Pertama : "<<endl<<endl; 
for (b=0;b<baris;b++) { 
for (c=0;c<kolom;c++) {
cout<<" "<<A[b][c]<<" "; cout<<endl<<endl; }
cout<<" Matriks Transpose : "<<endl<<endl; 
for (b=0;b<kolom;b++) { 
for (c=0;c<baris;c++) { 
cout<<" "<<A[c][b]<<" "; } cout<<endl; cout<<endl; } 
getch(); 
cout<<" Ingin Mengulang Program ? (Y/N) : "; 
cin>>pil; 
}
while(pil=='Y'||pil=='y'); 
		
}
