/*
contoh program perhitungan pembayaran gaji
*/
#include<iostream.h>
#include<conio.h>
void main()
{
char nama[20];
int jhr_kerja;
int jjam_lembur;
float upah;
float uang_lembur;
float trans_lembur;
float gaji;

cout<<"masukkan nama : ";
cin>>nama;
cout<<"masukkan jml hari kerja : ";
cin>>jhr_kerja;
cout<<"masukkan jml jam lembur : ";
cin>>jjam_lembur;
upah = jhr_kerja * 30000;
uang_lembur = jjam_lembur * 5000;

if (jjam_lembur >= 10)
	trans_lembur = 0.1 * uang_lembur;
else
	trans_lembur = 0;

gaji = upah + uang_lembur + trans_lembur;

cout<<endl;
cout<<"jumlah upah : "<<setw(10)<<upah<<endl;
cout<<"jumlah uang lembur : "<<setw(10)<<uang_lembur<<endl;
cout<<"transfortr lwmbur : "<<setw(10)<<trans_lembur<<endl;
cout<<"-----------+ "<<endl;
cout<<"gaji yang diterima : "<<setw(10)<<gaji<<endl;
getch();
}

