/*
contoh bpenggunaan operator logika
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int hasil;
cout<<"operator logika && (dan)"<<'\n';
hasil = (5 > 2) && (4 > 3);
cout<<"hasil logika (5 > 2) && (4 > 3)=
"<<hasil<<'\n';
hasil = (5 < 2) && (4 > 3)
cout<<"hasil logika (5 < 2) && (4 > 3)=
"<<hasil<<'\n';
hasil = (5 < 2) && (4 > 3)=
"<<hasil<<'\n';
hasil = (5 > 2) && (4 < 3);
cout<<"hasil logika (5 > 2) && (4 < 3)=
"<<hasil<<'\n';
hasil = (5 < 2) && (4 < 3);
cout<<"hasil logika (5 > 3) && (4 > 3)=
"<<hasil<<'\n';
cout<<"\noperator logika || (atau)"<<'\n';
hasil = (5 > 2) || (4 > 3);
cout<<"hasil logika (5 > 2) || (4 > 3)=
"<<hasil<<'\n';
hasil = (5 < 2) || (4 > 3);
cout<<"hasil logika (5 < 2) || (4 > 3)=
"<,hasil<<'\n';
hasil = (5 > 2) || (4 < 3);
cout<<"hasil logika (5 > 2) || (4 < 3)=
"<<hasil<<'\n';
hasil = (5 < 2) || (4 < 3);
cout<<"hasil logika (5 > 3) || (4 > 3)=
"<<hasil<<'\n';
cout<<"\noperator logika !"<<'\n';
hasil = ! (5 > 2);
cout<<"hasil logika !(5 > 2) = "<<hasil<<'\n';
hasil = ! (5 < 2);
cout<<"hasil logika ! (5 < 2) = "<<hasil<<'\n';
getch();
}









