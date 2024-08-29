/*
contoh penggunaan getch() dan geche()
*/
#include<ioztream.h>
#include<conio.h>
void main()
{
char kar1, kar2;
cout<<"tekan sembarang karakter : ";
kar1 = getch();
cout<<"tekan sembarang karakter : ";
kar2 = getch();
cout<<"\n\nkarakter pertama : "<<kar1<<'\n';
cout<<"karakter kedua : "<<kar2<<'\n';
getch();
}