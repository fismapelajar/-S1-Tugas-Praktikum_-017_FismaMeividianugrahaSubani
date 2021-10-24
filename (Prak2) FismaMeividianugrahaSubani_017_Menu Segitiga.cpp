//Tugas Praktikum Minggu 2
//No 3 Program Menu Segitiga Siku-Siku
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int menu;
	float alas,tinggi,sisi_miring,luas,keliling,hasil;
	
	cout <<"\n";
	cout << "Menu Segitiga Siku-Siku";
	cout <<"\n1. Hitung Panjang Sisi Miring\n2. Hitung Luas\n3. Hitung Keliling\n4. Keluar Program";
	cout <<"\nPilih Menu Kamu =";
	cin >>menu;
	cout << "Masukkan alas segitiga = ";
	cin >> alas;
	cout << "Masukkan tinggi segitiga = ";
	cin >> tinggi;
	
	//Rumus
	sisi_miring=sqrt(alas*alas+tinggi*tinggi);	
	keliling=alas+tinggi+sisi_miring;
	luas=(alas*tinggi)/2;
	
	
	switch (menu){
		case 1 : hasil = sisi_miring;
		cout<<"\nSisi Miring = "<< sisi_miring;
		break;
		
		case 2 : hasil = luas;
		cout<<"\nLuas = "<< luas;
		break;
	
		case 3 : hasil = keliling;
		cout<<"\nKeliling = "<< keliling;
		break;
		
		case 4 : 
		cout <<"Kamu Keluar Program";
		break;
		
		default : 
		cout <<"\nSyntax ERROR *_*";
		break;
	}

	return 0;
}
 
