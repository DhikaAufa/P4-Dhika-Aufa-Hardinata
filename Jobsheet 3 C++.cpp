#include <iostream>
#include <conio.h>
using namespace std;

main (){
	int nim1[2][2];
	int nim2[2][2];
	int jml [2][2];
	int x, y;
	cout<<"Nama=DHIKA AUFA HARDINATA\nNIM=F1B019039\nKelompok=8"<<endl;
	cout<<"Nama=DESTIARANI\nNIM=F1B019038\nKelompok=8"<<endl;
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
	cout << "Masukkan index " << x << "," << y << " = ";
	cin >> nim1[x][y];
	}
	}
	cout << endl;
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
	cout << "Masukkan index " << x << "," << y << " = ";
	cin >> nim2[x][y];
	}
	}
	cout << endl;
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
	jml [x][y] = nim1[x][y]+nim2[x][y];
	cout << jml [x][y] <<" ";
	}
	cout << endl;
	}
}
