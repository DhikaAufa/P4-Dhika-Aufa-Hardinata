#include <iostream>
#include <conio.h>
using namespace std;

main (){
	int nim1[2][2];
	int nim2[2][2];
	int kurang [2][2];
	int x, y;
	cout<<"Nama=DHIKA AUFA HARDINATA \nNIM=F1B019039\n"<<endl;
   	cout<<"Nama=DESTIARANI \nNIM=F1B019038\n"<<endl;
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
	kurang [x][y] = nim1[x][y]-nim2[x][y];
	cout << kurang [x][y] <<" ";
	}
	cout << endl;
	}
}
