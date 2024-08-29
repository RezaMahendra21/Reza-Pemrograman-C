/*
contoh penggunaan operator majemuk
*/
#include<iostram.h>
#include<conio.h>
void main()
{
int a;
a = 20;
cout<<"nilai a sekarang = "<<a<<'\n';
a += 5;
cout<<"nilai a += 5 sekarang = "<<a<<'\n';
a -= 3;
cout<<"nilai a -= 3 sekarang = "<<a<<'\n';
a *= 2;
cout<<"nilai a *= 2 sekarang = "<<a<<'\n';
a %= 3;
cout<,"nilai a %= 3 sekarang = "<<a<<'\n';
a <<=1; //a = a >> 1;
cout<<"nilai a <<= 1 sekarang = "<<a<<'\n';
getch();
}
