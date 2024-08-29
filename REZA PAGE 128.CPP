/*
mencetak bilangan genap perulangan for
*/
#include <iostream.h>
#include <conio.h>
void main()
{
int batas_akhir;
cout<<"jumlah perulangan : ";
cin>>batas_akhir;
for (int i=1; i<=batas_akhir; i++)
{
if ( i & 2 == 0)
cout<<i<<" ";
}
getch();
}