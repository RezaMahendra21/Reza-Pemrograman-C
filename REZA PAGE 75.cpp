/*
	macam-macam variabel;
	1. numerik
		1.bulat(integer)										===========>int
		2.desimal presisi tunggal(floating point)    ===========>float
		3.desimal berpresisi ganda(doublr precision) ===========>double
	2.teks
		1.karakter(karaktern tunggal)  					===========>char
		2.string(rangkaian karakter) 						===========>char[99]
*/
#inlude<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{	int bjumlah;
	float total_nilai,rata;
	char nilai_huruf;
	char nama[20];
	clrscr();
	/* inisialisasi variabel*/
	jumlah = 5;
	stcpy (nama,"diana natalia");
	total_nilai=485.6;
	rata=total_nilai/jumlah;
	nilai_huruf='A';
	printf("researchor    		: %s\n',nama);
	printf("jumlah data yang ada : %d data.\n"jumlah);
	printf("trotal nilai yang diperoleh: %5.2f\n",total_nilai);
	printf("rata-rata nilainya    : %7.2f\n".rata);
	printf("nilai hurufnya     : %c\n",nilai_huruf);
	getch();
}
