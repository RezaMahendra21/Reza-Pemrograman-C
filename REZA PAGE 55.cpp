/*
contoh penggunaan operator penaikkan dan penurunan
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
a = 15;
//variabel a dinaikkan 1 baru dijumlahkan dengan 10
b = 10 + ++a;
cout<<"isi b = "<<b<<'\n';
//variabel b dijumlahkan dengan 10 baru b dinaikkan 1
c = 10 + b++;
cout<<"isi b = "<<b<<'\n';
cout<<"isi c = "<<c<<'\n';
getch();
}
