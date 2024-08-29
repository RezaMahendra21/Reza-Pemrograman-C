/*
contoh penggunaan setw() dan setfill()
*/
#include<iostream.h>
#include<conio.h>
#include<<iomanip.h>
void main()
{
int angka = 1005;
cout<<setw(0)<<setfill('*')<<angka<<endl;
cout<<setw(4)<<setfill('*')<<angka<<endl;
cout<<setw(6)<<setfill('*')<<angka<<endl;
cout<<setw(8)<<setfill('*')<<angka<<endl;
getch();
}
