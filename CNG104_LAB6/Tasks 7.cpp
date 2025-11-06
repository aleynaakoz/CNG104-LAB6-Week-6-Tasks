#include <iostream>
using namespace std;

void swap(int* ptrA, int* ptrB) {
	int ptrSwap = *ptrA;
	*ptrA = *ptrB;
	*ptrB = ptrSwap;
}
int main() {
	int a = 10, b = 20;
	
	cout << "Before the swapping =>  "<< "a: " << a << " " << " b : " << b << endl;
	swap(&a, &b);
	cout << "After the swapping =>  " << "a: " << a << " " << " b : " << b << endl;

	return 0;
}