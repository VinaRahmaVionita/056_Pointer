#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setName(string pName);
	friend class siswa;
};

class siswa {
private:
	int id;
public:
	void setId(int pId);
	void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;
}

void siswa::setId(int pId) {
	id = pId;
}

void orang::setName(string pNama) {
	nama = pNama;
}

int main()
{
	orang o;
	o.setName("Joko Kumat");
	siswa s;
	s.setId(1);
	s.displayAll(o);
	cout << endl;
	system("pause");
	return 0;
}