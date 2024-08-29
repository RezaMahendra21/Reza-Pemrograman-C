/*
contoh program yang mengandung goto dan label
*/
#include<iostream.h>
#include<conio.h>
void main()
{
cout<<"Teks ini diawal program"<<endl<<endl;
goto akhir;
cout<<"saya nggak pernah tampil
dilayar..."<<endl<<endl;
tengah:
cout<<"teks ini ditengah program"<<endl;
cout<<"kalau saya tampil dilayar"<<endl;
goto selesai;
akhir:
cout<<"teks ini diakhiri program"<<endl;
cout<<"lompat ke tengah dulu ya..."<<endl<<endl;
goto tengah;
selesai:
getch();
}
