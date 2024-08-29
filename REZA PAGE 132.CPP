/*
mencetak bilangan genap perulangan while
*/
#include <iostream.h>
#include <conio.h>
void main()
{
int batas_akhir;
int i = 1;
cout<<"jumlah perulangan : ";
cin>>batas_akhir;
while (i<=batas_akhir)
	{
	  if ( i % 2 == 0)
	cout<<i<<" ";
i++;
	}
getch();
}