#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};


void mahasiswa::showNim() {    //implementasi method di luar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };          //object mhs
	mhs.showNim();               //member acses operator

	mahasiswa& ref = mhs;        //pointer references refMhs
	ref.nim = 2;                 //member acses operator 
	mhs.showNim();

	