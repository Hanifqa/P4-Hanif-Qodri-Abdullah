#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int x, i;
float p, pp, n;
float a, b, c, d, e;
float k, t, ku, ut, ua;

struct data{
char nama[100];
char nim[100];
float absen,tugas,kuis,uas,uts,akhir;
char nilai[100];}

wow[500];

int wadaw(){
do{
cout << "<<<===PERSENTASE PENILAIAN===>>>\n";
cout << "================================\n";
cout << "Masukkan persentase kehadiran (%) : ";
	cin >> k;
cout << "Masukkan persentase tugas     (%) : ";
	cin >> t;
cout << "Masukkan persentase kuis      (%) : ";
	cin >> ku;
cout << "Masukkan persentase UTS       (%) : ";
	cin >> ut;
cout << "Masukkan persentase UAS       (%) : ";
	cin >> ua;
	
pp = k + t + ku + ut + ua;

if(pp != 100){
cout << "Persentase penilaian          (%) : " << pp << endl;
cout << "\n(***PERSENTASE PENILAIAN HARUS 100%***)\n";
cout << "---------------------------------------------------\n";}
if(pp == 100){
cout << "Persentase penilaian          (%) : " << pp << endl;}}
while(pp != 100);

cout << "---------------------------------------------------\n";

cout << "Masukkan total pertemuan  : ";
	cin >> p;
cout << "Masukkan jumlah mahasiswa : ";
	cin >> n;

cout << "---------------------------------------------------\n";

for(i = 1; i <= n; i++){
cout << "Nama 	    : ";
	fflush(stdin); 
	gets(wow[i].nama);
cout << "NIM 	    : ";
	cin >> wow[i].nim;
cout << "Kehadiran   : ";
	cin >> wow[i].absen;
cout << "Nilai tugas : ";
	cin >> wow[i].tugas;
cout << "Nilai kuis  : ";
	cin >> wow[i].kuis;
cout << "Nilai UTS   : ";
	cin >> wow[i].uts;
cout << "Nilai UAS   : ";
	cin >> wow[i].uas;
	
cout << "---------------------------------------------------\n";

a = ((wow[i].absen / p) * (k / 100) * 100);
b = ((wow[i].tugas) * (t / 100));
c = ((wow[i].kuis) * (ku / 100));
d = ((wow[i].uts) * (ut / 100));
e = ((wow[i].uas) * (ua / 100));

wow[i].akhir = a + b + c + d + e;

if(wow[i].akhir <= 100 && wow[i].akhir >= 80){
strcpy(wow[i].nilai, "A");}
else if(wow[i].akhir <= 79 && wow[i].akhir >= 60){
strcpy(wow[i].nilai, "B+");}
else if(wow[i].akhir <=59 && wow[i].akhir >= 55){
strcpy(wow[i].nilai, "B");}
else if(wow[i].akhir <= 54 && wow[i].akhir >= 50){
strcpy(wow[i].nilai, "C+");}
else if(wow[i].akhir <= 49 && wow[i].akhir >= 45){
strcpy(wow[i].nilai, "C");}
else if(wow[i].akhir <= 44 && wow[i].akhir >= 40){
strcpy(wow[i].nilai, "D+");}
else if(wow[i].akhir <= 39 && wow[i].akhir >= 35){
strcpy(wow[i].nilai, "D");}
else {strcpy(wow[i].nilai, "E");}}
}

main(){
cout << "|***PROGRAM MENGHITUNG NILAI AKHIR***|\n";
cout << "|====================================|\n";
cout << "|Pilih mata kuliah:                  |\n";
cout << "|1. Aqidah                           |\n";
cout << "|2. Fikih                            |\n";
cout << "|====================================|\n";
cout << "Pilih mata kuliah: ";
	cin >> x;
cout << "---------------------------------------------------\n";

switch(x){
case 1:
wadaw();

cout << "\n===================================================================================================================\n";
cout << "|                                                
Aqidah                                             |\n";
cout << "|=================================================================================================================|";
cout << "\n|                                                       (2 SKS)                                                   |";
cout << "\n|=================================================================================================================|\n";
cout << "|No.|            Nama Mahasiswa            |   NIM   | Kehadiran | Tugas | Kuis | UTS | UAS | Nilai Akhir | Grade |\n";
cout << "|===|======================================|=========|===========|=======|======|=====|=====|=============|=======|\n";
for(i = 1; i <= n; i++){
cout << setiosflags(ios::left) << "|" << setw(3) << i;
cout << setiosflags(ios::left) << "|" << setw(38) << wow[i].nama;
cout << setiosflags(ios::left) << "|" << setw(9) << wow[i].nim;
cout << setiosflags(ios::left) << "|" << setw(11) << wow[i].absen;
cout << setiosflags(ios::left) << "|" << setw(7) << wow[i].tugas;
cout << setiosflags(ios::left) << "|" << setw(6) << wow[i].kuis;
cout << setiosflags(ios::left) << "|" << setw(5) << wow[i].uts;
cout << setiosflags(ios::left) << "|" << setw(5) << wow[i].uas;
cout << setiosflags(ios::left) << "|" << setw(13) << wow[i].akhir; 
cout << setiosflags(ios::left) << "|" << setw(7) << wow[i].nilai << "|";
cout << endl;}
cout << "===================================================================================================================\n";
break;

case 2:
wadaw();

cout << "\n===================================================================================================================\n";
cout << "|                                                       Fikih                                                    |\n";
cout << "|=================================================================================================================|";
cout << "\n|                                                       (3 SKS)                                                   |";
cout << "\n|=================================================================================================================|\n";
cout << "|No.|            Nama Mahasiswa            |   NIM   | Kehadiran | Tugas | Kuis | UTS | UAS | Nilai Akhir | Grade |\n";
cout << "|===|======================================|=========|===========|=======|======|=====|=====|=============|=======|\n";
for(i = 1; i <= n; i++){
cout << setiosflags(ios::left) << "|" << setw(3) << i;
cout << setiosflags(ios::left) << "|" << setw(38) << wow[i].nama;
cout << setiosflags(ios::left) << "|" << setw(9) << wow[i].nim;
cout << setiosflags(ios::left) << "|" << setw(11) << wow[i].absen;
cout << setiosflags(ios::left) << "|" << setw(7) << wow[i].tugas;
cout << setiosflags(ios::left) << "|" << setw(6) << wow[i].kuis;
cout << setiosflags(ios::left) << "|" << setw(5) << wow[i].uts;
cout << setiosflags(ios::left) << "|" << setw(5) << wow[i].uas;
cout << setiosflags(ios::left) << "|" << setw(13) << wow[i].akhir; 
cout << setiosflags(ios::left) << "|" << setw(7) << wow[i].nilai << "|";
cout << endl;}
cout << "===================================================================================================================\n";
break;
}
}
