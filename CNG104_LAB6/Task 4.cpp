#include <iostream>
using namespace std;
void printInfo(string name, int age) {
	cout << "Name: " << name << endl << "Age: " << age << endl;
}
void printInfo(int code, string course) {
	cout << "Course: " << course << endl << "Code: " << code << endl;
}
int main() {

	printInfo("Aleyna", 22);
	printInfo(104, "Programming");

	return 0;
}