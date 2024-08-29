/*
contoh penggunaan setprecision()
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main();
{
float y = 12.340;
cout<<setiosflags(ios::fixed);
cout<<setprecision(0)<<y<<endl;
cout<<setprecision(1)<<y<<endl;
cout<<setprecision(2)<<y<<endl;
cout<<setprecision(3)<<y<<endl;
cout<<setprecision(4)<<y<<endl;
cout<<setprecision(5)<<y<<endl;
getch();
}
