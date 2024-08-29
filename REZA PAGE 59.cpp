/*
contoh penggunaan operator relasi
*/
#inlude<iostream.h>
#include<conio.h>
void main()
{
int a,b,hasil;
a = 45;
b = 25;
hasil = a == b;
cout<<"hasil relasi "<<a<<" == "<<b<<" =
"<<hasil<<'\n';
hasil = a != b;
cout<<"hasil relasi "<<a<<" != "<<b<<" =
"<<hasil<<'\n';
hasil = a > b;
cout<<"hasil relasi "<<a<<" > "<<b<<" =
"<<hasil<<'\n';
hasil = a < b;
cout<<"hasil relasi "<<a<<" < "<<b<<" =
"<<hasil<<'\n';
hasil = a >= b;
cout<<"hasil relasi "<<a<< >= "<<b<<" =
"<<hasil<<'\n';
hasil = a <= b;
cout<<"hasil relasi "<<a<<" <= "<<b<<" =
"<<hasil<<'\n';
getch();
}