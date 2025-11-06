#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
	ifstream file("students.log");
	if (!file.is_open()) {
		cout << "Error!! File is not opened" << endl;
	}
	string line;
	int count = 0;

	while (getline(file, line)) {
		count++;

	}
	file.close();
	cout << "Total number of lines: " << count << endl;
	return 0;
}