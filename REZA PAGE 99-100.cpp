int jhr_kerja;
int jjam_lembur;
float upah;
float uang_lembur;
float trans_lembur;
float gaji;

cout<<"Masukkan Nama : ";
cin>>nama;
cout<<"Masukkan jml hari kerja : ";
cin>>jhr_kerja;
cout<<"Masukkan jml jam lembur : ";
cin>>jjam_lembur;
upah = jhr_kerja *30000;
uang_lembur = jjam_lembur * 5000;

if (jjam_lembur >= 10)
	trans_lembur = 0.1 * uang_lembur;
else
	trans_lembur = 0;

gaji = upah + uang_lembur + trans_lembur;

cout<<endl;
cout<<"Jumlah upah : "<<setw(10)<<upah<<endl;
cout<<"Jumlah uang lembur :
"<<setw(10)<<uang_lembur<<endl;
cout<<"Transfort lembur :
"<<setw(10)<<trans_lembur<<endl;
cout<<"-------------- + "<<endl;
cout<<"Gaji yang diterima :
"<<setw(10)<<gaji<<endl;
getch();
}
