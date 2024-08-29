/*
contoh program yang mengandung pernyataan nested if
*/
#include<iostream.h>
#include<conio.h>
void main()
{

char nama[20];
int nilai_angka;
char huruf;
cout<<"Masukkan nama : ";
cin>>nama;
cout<<"Masukkan nilai angka : ";
cin>>nilai_angka;
if (nilai_angka >= 80)
	huruf = 'A';
else if (nilai_angka >= 70)
	huruf = 'B'
     else if (nilai_angka >= 70)
	huruf = 'C';
   else if (nilai_angka >= 70)
	huruf = 'D';
	else
	huruf = 'E';
cout<<endl;
cout<<"Nama : "<<nama<<endl;
cout<<"Nilainya : "<<huruf<<endl;;
getch();
}


