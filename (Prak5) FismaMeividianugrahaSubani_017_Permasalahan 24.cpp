/* Program Duapuluh lima */ 
/* Program tukar menggunakan fungsi */ 
/* dengan parameter by value */ 
#include <stdio.h> 
#include <conio.h>
 
void tukar(int x,int y); /*deklarasi fungsi*/ 
main() { 
	int a,b; 
	a=80; 
	b=11; 
	printf("Nilai sebelum pemanggilan fungsi \n"); 
	printf("a = %i \n""b = %i \n",a,b); 
	tukar(a,b); 
	printf("Nilai setelah pemanggilan fungsi \n"); 
	printf("a = %i \n""b = %i \n",a,b);
	getch(); 
} 
void tukar(int px,int py) /* definisi fungsi */ 
{ 
	int z; 
	z=px; 
	px=py; 
	py=z; 
	printf("Nilai diakhir fungsi \n"); 
	printf("px = %i \n""py = %i \n",px,py); 
}

