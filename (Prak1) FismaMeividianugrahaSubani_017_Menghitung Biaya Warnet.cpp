// Tugas Praktikum Minggu 1
//No 1 Program Menghitung Biaya Warnet
#include<iostream>
using namespace std;

int main()
{
 	char nama[40];
 	int noKomptr;
	 float biaya,jam,menit,detik,tjam,tmenit,tdetik;
	
	 cout<<"\tProgram Hitung Biaya Pembayaran Warnet"<<endl;
	 cout<<"\nNo Urut Komputer  : ";
	 cin>>noKomptr;
     cout <<"\nNama Pengguna : ";
	 cin>>nama;
     cout<<"\t\nWaktu Lama Penggunaan";
     cout <<"\nMasukkan jam :";
	 cin>>jam; 
	 cout <<"Masukkan menit :";
	 cin>>menit; 
	 cout <<"Masukkan detik :";
	 cin>>detik; 
	 cout<<endl;
	  
	 //Rumus Biaya
	 tjam=jam*5000;
	 tmenit=menit/60*5000;
	 tdetik=detik/3600*5000;
     
     //Biaya
     cout<<"Biaya Pembayaran Warnet Kamu = Rp.";
     biaya=tjam+tmenit+tdetik;
     cout<<biaya;
     
     return 0;
	
}
