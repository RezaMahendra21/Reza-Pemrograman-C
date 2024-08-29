/*
contoh penggunaan operator penguasan
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
a = b = c = d = e =  100;
cout<<"isi a = "<<a<<'\n';
cout<<"isi b = "<<b<<'\n';
cout<<"isi c = "<<c<<'\n';
cout<<"isi d = "<<d<<'\n';
cout<<"isi e = "<<e<<'\n';
int x,y;
x = 10 * (y = 3);
cout<<"isi x = "<<x<<'\n';
getch();
}
