#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	double test[4];
	for (int i=0; i<=4; i++ )
	{
		cout<<"Masukan Saldo Account ke - "<<i+1<<" : ";
		cin>>test[i];
	}
	system("cls");
	cout<<"Account\tSaldo"<<endl;
	for (int x=0; x<=4; x++)
	{
		cout<<x+1<<"\t"<<test[x]<<endl;
	}
	getch();
}
