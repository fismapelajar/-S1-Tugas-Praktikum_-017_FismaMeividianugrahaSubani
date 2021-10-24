//Tugas PraktikumMinggu 3
//No 4  Progran Menghitung Jumlah 6 Suku Pertama
#include <iostream>
	using namespace std;
	
	int main(){
		int i, kuadrat, jbil, jkuadrat;
		
		cout<<"\ JUMLAH (DERET) 6 SUKU PERTAMA"<<endl;
		cout<<"====================================="<<endl;
		jbil=0;
		jkuadrat=0;
			
		for(i=1; i<=6; i++){
			kuadrat=i*i*i;
			jbil=i;
			jkuadrat=jkuadrat+kuadrat;
			cout<<"\nSuku ke-"<<i<<" = "<<kuadrat<<endl;
		}
		cout<<"\n";
		cout<<"Jumlah "<<jbil<<" Suku Pertama = "<<jkuadrat;
		
		
	return 0; 	
	}

