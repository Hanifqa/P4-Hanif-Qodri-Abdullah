#include <iostream>

using namespace std; 
int main(int argc,char *argv[]) { 
int a[2][2]; 
int b[2][2]; 
int c[2][2]; 
int i,j; 
for(i=0;i<2;i++){  
for(j=0;j<2;j++){ cout<<"a["<<i+1<<"]["<<j+1<<"] : ";   
cin>>a[i][j];   
}  
cout<<endl;  
}
cout<<endl;  
for(i=0;i<2;i++){   
for(j=0;j<2;j++){    cout<<"b["<<i+1<<"]["<< j+1<<"] : ";    
cin>>b[i][j];   
}   
cout<<endl;  
}
cout<<endl;  
}  
for(i=0;i<2;i++){  
 for(j=0;j<2;j++){
 c[i][j]=a[i][j]+b[i][j] ;   
}  
}
for(i=0;i<2;i++){   for(j=0;j<2;j++){    
cout<<"c["<<i+1<<"]["<<j+1<<"] : "<<c[i][j]<<endl;   
}   			
cout<<endl;  
} 	
}
