/*
contoh pendefinisian variabel dalam blok
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int nilai = 350;
cout<<"isi nilai : "<<nilai<<endl;
{
float nilai = 234.34;
cout<<"isi nilai : "<<nilai<<endl;
{
char nilai = 'A';
cout<<"isi nilai : "<<nilai<<endl;
}
cout<<"isi nilai : "<<nilai<<endl;
}
cout<<"isi nilai : "<<nilai<<endl;
getch();
}