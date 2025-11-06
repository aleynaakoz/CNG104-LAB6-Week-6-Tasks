#include <iostream>
#include <fstream>
using namespace std;

class Car {
public:
	string brand;
	int year;

	void carInfo() {
		cout << brand << "\t\t" << year << endl;
	}
};

int main() {
	ifstream file("data.txt");
	if (!file.is_open()) {
		cout << "Error !!! File is not opened" << endl;
	}
	Car cars[6];
	int count = 0;
	while (file >> cars[count].brand >> cars[count].year) {
		count++;
	}
	file.close();
	cout << "Brand\t\tYear" << endl;
	cout << "################" << endl;
	for (int i = 0; i < count; i++) {
		cars[i].carInfo();

	}

	return 0;
}