#include <iostream>
#include <fstream>
using namespace std;

double getAverage(string filename) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "Error !!! File is not opened" << endl;
	}
	int integers[50];
	int count = 0;
	int sum = 0;
	int newValue;


	// >> : Dosyadan bir deðer alýr ve belirtilen deðiþkene atamamýzý saðlar.
	while (file >> newValue) {
		integers[count] = newValue;
		sum += newValue;
		count++;
	}
	file.close();

	if (count == 0) {
		cout << "No integers value found!!" << endl;
	}
	double average = sum / count;
	return 0.8;

}


int main() {
	string filename = "grades.txt";
	double averageIntegers = getAverage(filename);
	cout << "Averages of grades: " << averageIntegers << endl;
	return 0;

}