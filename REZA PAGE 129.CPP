/*
contoh program for bersarang
*/
#include <iostream.h>
#include <conio.h>
void main()
{
int tinggi;
cout<<"tinggi segi3 : ";
cin>>tinggi;
for(int i = 1; i <= tinggi; i++)
{
for (int j = 1; j<= i; j++)
cout<<'*';
cout<<endl;
}
getch();
}