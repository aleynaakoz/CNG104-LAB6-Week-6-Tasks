#include <iostream>
#include <fstream>
using namespace std;

class Student {
private: 
	string name, adress, favourite_color;
	int id;

public:
	
	Student(string _name, int _id, string _adress, string _favouriteColor) {
		name = _name;
		id = _id;
		adress = _adress;
		favourite_color = _favouriteColor;
		
	}

	void saveToFile() {
		ofstream file("students.log", ios::app);
		if (file.is_open()) {
			file << "Please enter the name: " << name << endl;
			file << "Please enter the id: " << id << endl;
			file << "Please enter the adress: " << adress << endl;
			file << "Please enter the favouriteColor: " << favourite_color << endl;
		    file << "################################ " << endl;

			file.close();
			cout << "Student info saved!!!" << endl;	
		}
		else {
			cout << "Error!! File is not opened" << endl;
		}
	}
};



int main() {
	Student student1("Ayþe",1,"Sivas","Blue");
	Student student2("Mert", 2, "Ankara", "Siyah");

	student1.saveToFile();
	student2.saveToFile();

	return 0;
}