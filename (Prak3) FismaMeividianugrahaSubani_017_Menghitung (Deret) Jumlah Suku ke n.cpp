//Tugas Praktikum Minggu 3
//No 5 Program Menghitung Jumlah Deret Suku ke-n
#include <iostream>
using namespace std;

int main(){
	int i, n, c, bil_a=3, beda=4, jumlah=0;
	
	cout<<"\tMenghitung Jumlah Deret Suku ke-n"<<endl;
	cout<<"======================================="<<endl;
	cout<<"Nilai awal = 3";
	cout<<"\nBeda = 4"<<endl;
	
	cout<<"\nMasukkan Deret Suku ke-n = ";
	cin>>n;
	cout<<"\n";
	cout<<bil_a<<",";
	jumlah=jumlah+bil_a;
	for(i=0; i<n-1; i++){
		c=bil_a+beda;
		bil_a=c;
		cout<<c<<",";
		jumlah=jumlah+c;
	}
	cout<<"\n";
	cout<<"\nJumlah Deret Suku ke-"<<n<<" = "<<jumlah;

	return 0;
}
