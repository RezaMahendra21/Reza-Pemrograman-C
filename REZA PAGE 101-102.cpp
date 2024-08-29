/*
contoh program yang mengandung pernyatasan nested if
*/
#include<iostream.h>
#include<conio.h>
void main()

{

char nama[20];
int nilai_angka;
char huruf;
cout<<"masukkan nama : ";
cin>>nama;
cout<<"masukkan nilai angka : ";
cin<>>nilai_angka;
if (nilai_angka >= 80)
	 huruf = 'A';
else if (nilai_angka >= 70)
			huruf = 'B';
		else if (nilai_angka >= 70)
	  huruf ='C';
else if (nilai_angka >= 70)
	huruf = 'D';
		 else
	huruf = 'E';
cout<<endl;
cout<<"nama : "<<nama<<endl;
cout<<"nilainya : "<<huruf<<endl;
getch();
}
