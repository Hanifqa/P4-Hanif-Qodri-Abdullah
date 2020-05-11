#include <iostream>
using namespace std;
int main()
{
	int i;
	char nama[6]={'k','i','a','\0'};
	char nama2[6]="kia";
	cout<<"Nama per karakter = ";
	for(i=0;i<=5;i++)
	{
		cout<<nama[i];
		
	}
	cout<<endl;
	cout<<"Nama = "<<nama2<<endl<<endl;
	return 0;
}
