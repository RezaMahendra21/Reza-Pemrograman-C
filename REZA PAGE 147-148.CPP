#include <stdio.h>
#include <conio.h>
main()
{
	int tugas,uts,uas;
	float nilaiakhir;
	char index;
	printf("nilai tugas :");scanf("%i",&tugas);
	printf("nilai uts   :");scanf("%i",&uts);
	printf("nilai uas   :");scanf("%i",&uas);
	nilaiakhir=0.2*tugas+0.3*uts+0.5*uas;
	printf("nilai akhir:%f\n",nilaiakhir);
	if(nilaiakhir>=80)
		index='A';
	else
	if(nilaiakhir>=68)
		index='B';
	else
	if(nilaiakhir>=56)
		index='C';
	else
	if(nilaiakhir>=45)
		index='D';
	else
	if(nilaiakhir>=0)
		index='E';
	else
		index='X';
	printf("index	:%c\n",index);
	getch();
	return 0;
}
