/*
mencetak bilangan genap perulangan do...while
*/
#include <iostream.h>
#include <conio.h>
void main()
{
int batas_akhir;
int i = 1;
cout<<"jumlah perulangan : ";
cin>>batas_akhir;
do
	{
	if ( i % 2 == 0)
	 cout<<i<<" ";
	i++;
	 }while (i<batas_akhir);
	 getch();
}