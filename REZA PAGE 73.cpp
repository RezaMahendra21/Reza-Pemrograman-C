/*
contoh pengguaan resetiosflags()
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
int x = 12340;
cout<<"ditampilkan dengan ios::right "<<endl;
cout<<setiosflags(ios::left)<<setw(10)<<x<<endl<<endl;
cout<<"setelah dilakukan resetiosflags(ios::right)"<<endl;
cout<<resetiosflags(ios::left);
cout<<setw(10)<<x<<endl<<endl;
getch();
{
