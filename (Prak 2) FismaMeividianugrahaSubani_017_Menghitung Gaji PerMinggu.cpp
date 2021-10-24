//Tugas Praktikum Minggu 2
//No 2 Program Menghitung Gaji Karyawan PerMinggu
#include <iostream>
using namespace std;

int main(){
	string nama;
	char golongan;
	int upah,jkerja,gaji;
	
	cout <<"\tMenghitung Gaji Karyawan";
	cout <<"\n";
	
	cout <<"Nama Karyawan =";
	getline(cin,nama);
	
	cout <<"\n";
	cout <<"Menu Golongan";
	cout <<"\n1. A\n2. B\n3. C\n4. D";
	cout <<"\nPilih Golongan Kamu (A, B, C, D) =";
	cin >>golongan;
	cout <<"\nBerapa Lama Kamu Bekerja (Jam) =";
	cin >>jkerja;

	
	//Gaji perJam
	switch (golongan){
		case'A' : upah = 5000;
		break;
		
		case'B' : upah = 7000;
		break;
	
		case'C' : upah = 8000;
		break;
		
		case'D' : upah = 10000;
		break;
		
		default : 
		cout <<"\nBukan Karyawan";
		break;
	}
	cout<<"\n";
	
	//Jumlah Jam Kerja
	if (jkerja<=48){gaji=upah*jkerja;
	cout <<"Penghasilan Kamu = Rp."<<gaji<<"perMinggu";
	}else if(jkerja>48){gaji=4000*(jkerja-48)+upah*48;
	cout <<"Penghasilan Kamu = Rp."<<gaji<<"perMinggu";
	}

	return 0;
}

