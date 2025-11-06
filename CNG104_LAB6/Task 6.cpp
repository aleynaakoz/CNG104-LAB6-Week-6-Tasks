#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arr[10] = { 0,3,77,43,6,-2,40,9,-10,1 };
    int total = sumArray(arr, 10);
    cout << "Total(Sum of Array Elements): " << total << endl;
}



