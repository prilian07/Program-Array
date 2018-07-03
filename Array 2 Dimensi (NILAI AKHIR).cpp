#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

main()
{
	int a,AVG[100][100]; 
	int uts[100][100],uas[100][100];
	string nama[100][100],nim[100][100],kelas[100][100];
	
	cout<<"Jumlah Data = ";
	cin>>a;
	
	for(int i=0; i<a; i++)
	{	
		cout<<endl;
		cout<<" Data Ke [ "<<i+1<<" ] "<<endl;
		cout<<" Nama"<<setw(8)<<": ";
		cin.sync();
		getline(cin,nama[i][i]);
		cout<<" Kelas "<<setw(6)<<": ";
		cin>>kelas[i][i];
		cout<<" NIM "<<setw(8)<<": ";
		cin>>nim[i][i];
		cout<<" Nilai UTS "<<setw(2)<<": ";
		cin>>uts[i][i];
		cout<<" Nilai UAS "<<setw(2)<<": ";
		cin>>uas[i][i];
		AVG[i][i]=(uts[i][i]+uas[i][i])/2;
	}
	
	

	
	cout<<"\n DAFTAR NILAI MAHASISWA "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<" No"<<setw(6)<<"Nama"<<setw(30)<<"NIM"<<setw(20)<<"KELAS"<<setw(10)<<"NILAI UTS"<<setw(10)<<"NILAI UAS"<<setw(10)<<"RATA-RATA"<<setw(6)<<"GRADE"<<setw(5)<<"KET"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	
	for(int i=0; i<a; i++)
	{
		cout<<" "<<i+1<<setw(6)<<nama[i][i]<<setw(30)<<nim[i][i]<<setw(20)<<kelas[i][i]<<setw(9)<<uts[i][i]<<setw(10)<<uas[i][i]<<setw(9)<<AVG[i][i]<<setw(9);
		if(AVG[i][i]<100,AVG[i][i]>80){
			cout<<" A "<<setw(5)<<" L "<<endl;
		}
		else if(AVG[i][i]<79,AVG[i][i]>60){
			cout<<" B "<<setw(5)<<" L "<<endl;
		}
		else if(AVG[i][i]<59,AVG[i][i]>40){
			cout<<" C "<<setw(5)<<" L "<<endl;
		}
		else if(AVG[i][i]<39,AVG[i][i]>20){
			cout<<" D "<<setw(5)<<" TL"<<endl;
		}
		else if(AVG[i][i]<19,AVG[i][i]>0){
			cout<<" E "<<setw(5)<<" TL"<<endl;
		}	}
	cout<<"\n--------------------------------------------------------------------------------"<<endl;
	
	getch();
}
