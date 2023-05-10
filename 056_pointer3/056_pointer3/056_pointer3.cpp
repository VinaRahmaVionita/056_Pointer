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
