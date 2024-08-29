/*
contoh penggunaan switch
*/

#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
char nama[15],got,sts;
float gapok,tunj.totgaji;

//input data
printf("---------------------\n");
printf("<<< DAFTAR GAJI PEGAWAI >>>\n");
printf("------------------\n");
printf("masukkan nama pegawai       :");gets(nama);
printf("msukkan golongan [A/B/C/D]:");fflush(stdin);scanf("%c",,&gol);
printf("masukkan statusnya [K/B]  :");fflush(stdin);scanf("%c",&sts);
printf("----------------------------\n");

//proses cari gaji pokok
switch(gol)
{
case'A':gapok=100000;break;
case'B':gapok=20000;break;
case'C':gapok=30000;break;
case'D':gapok=40000;break;
defaul:gapok=0;

}
//proses cari tunjangan
if(sts=='K')
{
tunj=0.1*gapok;
}
else
{
tunj=0;
}
//proses cari total gaji
totgaji=gapok+tunj;

//cetak output
printf("gaji pokok						  :%6.0f\n",gapok);
printf("tunjangan							  :%6.0f\n",tunj);
printf("total gaji						  :%6.0f\n",totgaji);
printf("---------------------------------\n");
getch();
}
