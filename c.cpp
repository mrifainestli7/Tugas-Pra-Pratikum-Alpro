#include <iostream>
using namespace std;

int input(float &x, float &y) {
	cout<<"Bilangan Pertama: ";cin>>x;
	cout<<"Bilangan Kedua: ";cin>>y;
}
void menuTambah() {
	float x,y;
	float hasil;
	input(x,y);
	hasil = x+y;
	cout<<"Hasil "<<x<<" + "<<y<<" = "<<hasil<<endl;
}

void menuKurang() {
	float x, y;
	float hasil;
	input(x,y);
	hasil = x-y;
	cout<<"Hasil "<<x<<" - "<<y<<" = "<<hasil<<endl;
}

void menuKali() {
	float x, y;
	float hasil;
	input(x,y);
	hasil = x*y;
	cout<<"Hasil "<<x<<" X "<<y<<" = "<<hasil<<endl;
}

void menuBagi() {
	float x, y;
	float hasil;
	input(x,y);
	hasil = x/y;
	cout<<"Hasil "<<x<<" / "<<y<<" = "<<hasil<<endl;
}

int main(){
	int pil;
	do{
	system("CLS");
	cout<<" PROGRAM KALKULATOR"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<"  1. Penambahan"<<endl;
	cout<<"  2. Pengurangan"<<endl;
	cout<<"  3. Perkalian"<<endl;
	cout<<"  4. Pembagian"<<endl;
	cout<<"  5. Keluar Program"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Pilih Menu No : ";cin>>pil;
	if(pil == 1) {
		menuTambah();
		system("PAUSE");
	}
	else if(pil == 2) {
		menuKurang();
		system("PAUSE");
	}
	else if(pil == 3) {
		menuKali();
		system("PAUSE");
	}
	else if(pil == 4) {
		menuBagi();
		system("PAUSE");
	}
    }
    while (pil != 5);
}
