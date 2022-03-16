#include <iostream>
using namespace std;

int input(int &x, int &y) {
	cout<<"Bilangan Pertama: ";cin>>x;
	cout<<"Bilangan Kedua: ";cin>>y;
}
void menuTambah() {
	int x,y;
	input(x,y);
	cout<<"Hasil "<<x<<" + "<<y<<" = "<<x+y;
}

void menuKurang() {
	int x, y;
	input(x,y);
	cout<<"Hasil "<<x<<" - "<<y<<" = "<<x-y;
}

void menuKali() {
	int x, y;
	input(x,y);
	cout<<"Hasil "<<x<<" X "<<y<<" = "<<x*y;
}

void menuBagi() {
	int x, y;
	input(x,y);
	cout<<"Hasil "<<x<<" / "<<y<<" = "<<x/y;
}

int main(){
	int pil;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<"  1. Penambahan"<<endl;
	cout<<"  2. Pengurangan"<<endl;
	cout<<"  3. Perkalian"<<endl;
	cout<<"  4. Pembagian"<<endl;
	cout<<"Pilih Menu No : ";cin>>pil;
	if(pil == 1) {
		menuTambah();
	}
	else if(pil == 2) {
		menuKurang();
	}
	else if(pil == 3) {
		menuKali();
	}
	else if(pil == 4) {
		menuBagi();
	}
	else {
		cout<<"Input tidak valid";
	}
}
