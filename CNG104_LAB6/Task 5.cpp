#include <iostream>
using namespace std;

class Car {
public:
	string brand;
	int year;
};

int main() {
	Car cars[3] = { { "Volvo",2020 },{"Porche",2026 },{ "Tofaþ",2018 } };
	cout << "Brand\t\tYear" << endl;
	cout << "################" << endl;
	for (int i = 0; i < 3; i++) {
		cout << cars[i].brand << "\t\t" << cars[i].year << endl;

	}

	return 0;
}