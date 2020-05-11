#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std; 
int main(int argc, char *argv[]) {     
int a[2][2],b[2][2],m,n;     
for(m=0;m<2;m++)     {     
for(n=0;n<2;n++)     {     
cout<<"masukkan nilai matriks a("<<m<<","<<n<<"):";     
cin>>a[m][n];     
}     
}     
for(m=0;m<2;m++){     
for(n=0;n<2;n++){     
cout<<"masukkan nilai matriks b("<<m<<","<<n<<"):";     
cin>>b[m][n];     
}         
}     
cout<<"C:\n";     
for(m=0;m<2;m++){     
for(n=0;n<2;n++){ 
cout<<setw(3)<<(a[m][0]*b[0][n]+a[m][1]*b[1][n]);     
}     
cout<<'\n';     
} 		
system("PAUSE"); 
return EXIT_SUCCESS; 
} 
