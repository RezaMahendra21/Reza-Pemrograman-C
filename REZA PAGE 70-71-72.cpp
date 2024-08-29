/*
contoh penggunaan setiosflags()
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
intx = 520;

cout<<"x ditampilkan dengan ios::left "<<endl;
cout<<setiosflags(ios::left)<<setw(10)<<x<<endl<<endl;

cout<<"x ditampilka dengan ios::left "<<endl;
cout<<setiosflags(ios::right)<<setw(10)<<x<<endl<,endl;

float y = 123.456;
cout<<"y ditampilkan dengan ios::fixed "<<endl;
cout<<setiosflags(ios::fixed)<<y<<endl<<endl;
cout<<resetiosflags(ios::fixed);

cout<,"y ditampilkan dengan ios::scientific"<<endl;
cout<<setiosflags(ios::scientific)<<y<<endl<<endl;
cout<<resetiosflags(ios::scientific);

int bil = 51;
cout<<"tnpa ios::showbase : "<<endl;
cout<<oct<<bil<<endl;
cout<<dec<<bil<<endl;
cout<hex<<bill<<endl;
cout<hex<<bil<endl;

cout<<"dengan ios::showbase : "<<endl;
cout<<setiosflags(ios::showbase);
cout<<oct<<bil<<endl;
cout<<hex<<bil<<endl;

cout<<"\ndengan ios::upperrcase untuk heksadesimal
"<<endl;
cout<<setiosflags(ios::uppercase)<<bil<<endl;
cout<<resetiosflags(ios::showbase);
cout<<resetiosflags(ios::uppercase);

float a = 234.00;
cout<<"\ntanpa ios::showpoint :n "<<endl;
cout<<setiosflags(ios::showpoint)<<a<<endl;
cout<<resetiosflags(ios::showpoint);

int b = 27;

cout<<"\ntanpa ios::showpos : "<<endl;
cout<<b<<endl<<endl;
cout<<"dengan ios::showpos : "<<endl;
cout<<setiosflags(ios::showpos)<<b<<endl;
cout<<resetiosflags(ios::showpos);
getch();
{
