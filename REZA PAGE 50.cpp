/*
program yang mengandung konstanta
*/
#include <iostream.h>
#include <conio.h>
void main()
{
const float phi = 3.14;
int jari = 11;
float luas;
clrscr();
luas = phi * jari * jari;
cout<<"luas lingkaran = "<<luas<<'\n';
getch();
}