/*
contoh program yang mengandung pernyataan if...else
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int nilai_mahamahasiswa;
cout<<"Masukkan nilai : ";
cin>>nilai_mahamahasiswa;
if (nilai_mahamahasiswa >= 60)
	cout<<"Mahamahasiswa tersebut lulus"<<endl;
else
	cout<<"Mahamahasiswa tersebut tidak lulus"<<endl;
getch();
}