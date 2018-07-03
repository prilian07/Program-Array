#include<iostream>
#include<conio.h>
using namespace std;

main()
{ 
	float banyak;
	float avg1, avg2, avg3, avg4, avg5, avg6, avg7, avg8, avg9;
	float bindo3[50], bindo4[50], bindo5[50], bindous[50], bindoun[50];
	float bindonr, bindons, bindona;
	float bing3[50], bing4[50], bing5[50], bingus[50], bingun[50];
	float bingnr, bingns, bingna;
	float mtk3[50], mtk4[50], mtk5[50], mtkus[50], mtkun[50];
	float mtknr, mtkns, mtkna;
	float fis3[50], fis4[50], fis5[50], fisus[50], fisun[50];
	float fisnr, fisns, fisna;
	float kim3[50], kim4[50], kim5[50], kimus[50], kimun[50];
	float kimnr, kimns, kimna;
	float bio3[50], bio4[50], bio5[50], bious[50], bioun[50];
	float bionr, bions, biona;
	cout<<"Program Perhitungan Nilai Akhir"<<endl;
 	cout<<"By Elsa Diana Putri (20170801161)"<<endl;
 	cout<<"==========================================="<<endl;
	cout<<"Masukkan Banyak Data = ";
	cin>>banyak;
	
	for(int i=0; i<banyak; i++)
	{
		cout<<"=========================================="<<endl;
		cout<<"Masukkan Data " <<i+1<< " = ";
		cout<<"\n";
		cout<<"Bahasa Indonesia Semester 3 = ";
		cin>>bindo3[i];
		cout<<"Bahasa Indonesia Semester 4 = ";
		cin>>bindo4[i];
		cout<<"Bahasa Indonesia Semester 5 = ";
		cin>>bindo5[i];
		bindonr=(bindo3[i] + bindo4[i] + bindo5[i])/3;
		cout<<"Nilai Rapot = "<< bindonr <<endl;
		cout<<"\nBahasa Indonesia Ujian Sekolah = ";
		cin>>bindous[50];
		bindons=(0.7*bindonr)+(0.3*bindous[50]);
		cout<<"Nilai Sekolahnya =  "<< bindons <<endl;
		cout<<"\nBahasa Indonesia Ujian Nasional = ";
		cin>>bindoun[50];
		bindona=(0.4*bindons)+(0.6*bindoun[50]);
		cout<<"Nilai Akhir =  "<< bindona <<endl;
		if(bindona>=4)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
	{
		cout<<"\n================================================="<<endl;
		cout<<"Bahasa Inggris Semester 3 = ";
		cin>>bing3[50];
		cout<<"Bahasa Inggris Semester 4 = ";
		cin>>bing4[50];
		cout<<"Bahasa Inggris Semester 5 = ";
		cin>>bing5[50];
		bingnr=(bing3[50] + bing4[50] + bing5[50])/3;
		cout<<"Nilai Rapotnya = "<< bingnr <<endl;
		cout<<"\nBahasa Inggris Ujian Sekolah = ";
		cin>>bingus[50];
		bingns=(0.7*bingnr)+(0.3*bingus[50]);
		cout<<"Nilai Sekolah =  "<< bingns <<endl;
		cout<<"\nBahasa Inggris Ujian Nasional = ";
		cin>>bingun[50];
		bingna=(0.4*bingns)+(0.6*bingun[50]);
		cout<<"Nilai Akhir =  "<< bingna << endl;
		if(bingna>=4)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
	}
{
	{
		cout<<"\n=========================================="<<endl;
		cout<<"Matematika Semester 3 = ";
		cin>>mtk3[50];
		cout<<"Matematika Semester 4 = ";
		cin>>mtk4[50];
		cout<<"Matematika Semester 5 = ";
		cin>>mtk5[50];
		mtknr= (mtk3[50] + mtk4[50] + mtk5[50])/3;
		cout<<"Nilai Rapot = "<< mtknr <<endl;
		cout<<"\nMatematika Ujian Sekolah = ";
		cin>>mtkus[50];
		mtkns=(0.7*mtknr)+(0.3*mtkus[50]);
		cout<<"Nilai Sekolah =  "<< mtkns <<endl;
		cout<<"\nMatematika Ujian Nasional = ";
		cin>>mtkun[50];
		mtkna=(0.4*mtkns)+(0.6*mtkun[50]);
		cout<<"Nilai Akhir =  "<< mtkna << endl;
		if(mtkna>=4)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
	}
}
{
	{
		cout<<"\n=============================================="<<endl;
		cout<<"Fisika Semester 3 = ";
		cin>>fis3[50];
		cout<<"Fisika Semester 4 = ";
		cin>>fis4[50];
		cout<<"Fisika Semester 5 = ";
		cin>>fis5[50];
		fisnr= (fis3[50] + fis4[50] + fis5[50])/3;
		cout<<"Nilai Rapot = "<< fisnr <<endl;
		cout<<"\nFisika Ujian Sekolah = ";
		cin>>fisus[50];
		fisns=(0.7*fisnr)+(0.3*fisus[50]);
		cout<<"Nilai Sekolah =  "<< fisns <<endl;
		cout<<"\nFisika Ujian Nasional = ";
		cin>>fisun[50];
		fisna=(0.4*fisns)+(0.6*fisun[50]);
		cout<<"Nilai Akhir =  "<< fisna <<endl;
		if(fisna>=4)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
	}
}
{
	{
		cout<<"\n==================================================="<<endl;
		cout<<"Kimia Semester 3 = ";
		cin>>kim3[50];
		cout<<"Kimia Semester 4 = ";
		cin>>kim4[50];
		cout<<"Kimia Semester 5 = ";
		cin>>kim5[50];
		kimnr= (kim3[50] + kim4[50] + kim5[50])/3;
		cout<<"Nilai Rapot = "<< kimnr <<endl;
		cout<<"\nKimia Ujian Sekolah = ";
		cin>>kimus[50];
		kimns=(0.7*kimnr)+(0.3*kimus[50]);
		cout<<"Nilai Sekolah =  "<< kimns <<endl;
		cout<<"\nKimia Ujian Nasional = ";
		cin>>kimun[50];
		kimna=(0.4*kimns)+(0.6*kimun[50]);
		cout<<"Nilai Akhir =  "<< kimna <<endl;
		if(kimna>=4)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
	}
}
{
	{
		cout<<"\n======================================="<<endl;
		cout<<"Biologi Semester 3 = ";
		cin>>bio3[50];
		cout<<"Biologi Semester 4 = ";
		cin>>bio4[50];
		cout<<"Biologi Semester 5 = ";
		cin>>bio5[50];
		bionr= (bio3[50] + bio4[50] + bio5[50])/3;
		cout<<"Nilai Rapot = "<< bionr <<endl;
		cout<<"\nBiologi Ujian Sekolah = ";
		cin>>bious[50];
		bions=(0.7*bionr)+(0.3*bious[50]);
		cout<<"Nilai Sekolah =  "<< bions <<endl;
		cout<<"Biologi Ujian Nasional = ";
		cin>>bioun[50];
		biona=(0.4*bions)+(0.6*bioun[50]);
		cout<<"Nilai Akhir =  "<< biona <<endl;
		if(biona>=4)
		cout<<"Lulus"<<endl;
		else
		cout<<"Tidak Lulus"<<endl;
	}
{
	cout<<"\n============================================================================"<<endl;
	avg1=(bindo3[50]+bing3[50]+mtk3[50]+fis3[50]+kim3[50]+bio3[50])/6;
	cout<<"Rata-rata Mata Pelajaran Semester 3 = "<< avg1 <<endl<<endl;
	avg2=(bindo4[50]+bing4[50]+mtk4[50]+fis4[50]+kim4[50]+bio4[50])/6;
	cout<<"Rata-rata Mata Pelajaran Semester 4 = "<< avg2 <<endl<<endl;
	avg3=(bindo5[50]+bing5[50]+mtk5[50]+fis5[50]+kim5[50]+bio5[50])/6;
	cout<<"Rata-rata Mata Pelajaran Semester 5 = "<< avg3 <<endl<<endl;
	avg4=(bindonr+bingnr+mtknr+fisnr+kimnr+bionr)/6;
	cout<<"Rata-rata Nilai Rapot Semua Mata Pelajaran = "<< avg4 <<endl<<endl;
	avg5=(bindous[50]+bingus[50]+mtkus[50]+fisus[50]+kimus[50]+bious[50])/6;
	cout<<"Rata-rata Ujian Sekolah Semua Mata Pelajaran = "<< avg5 <<endl<<endl;
	avg6=(bindons+bingns+mtkns+fisns+kimns+bions)/6;
	cout<<"Rata-rata Nilai Sekolah Semua Mata Pelajaran = "<< avg6 <<endl<<endl;
	avg7=(bindoun[50]+bingun[50]+mtkun[50]+fisun[50]+kimun[50]+bioun[50])/6;
	cout<<"Rata-rata Ujian Nasional Semua Mata Pelajaran = "<< avg7 <<endl<<endl;
	avg8=(bindona+bingna+mtkna+fisna+kimna+biona)/6;
	cout<<"Rata-rata Nilai Akhir Semua Mata Pelajaran = "<< avg8 <<endl<<endl;
	avg9=(avg1+avg2+avg3+avg4+avg5+avg6+avg7+avg8)/8;
	if(avg9>=5.5)
	cout<<"ANDA LULUS"<<endl;
	else
	cout<<"MAAF, ANDA TIDAK LULUS"<<endl;
}
}
}
	return 0;
}

