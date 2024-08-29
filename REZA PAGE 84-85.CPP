/*
	pemerintah input : berfungsi untuk memasukkan data dari media keyboard
	syntax:
	scanf("penentu format",namavariabel);
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void maain()
{
	float pjg, lbr, ls;
	char nama[25];

	clrscr();

	printf("masukkan nama anda :");
	scanf("%s",nama);fflush(stdin);
	printf("masukkan panjang persegi :");
	scanf("%f",&pjg);
	printf("masukkan lebar persegi :");
	scanf("%f",&lbr);
	Is=pjg*lbr
		printf ("Saudara %s Luas persegi panjang anda :%5.2",nama,Is);
		getch();
		}