#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int& min, int& max) {
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        else if (max < arr[i])
            max = arr[i];
    }
    cout << "The smallest value is: " << min << endl;
    cout << "The largest value is: " << max << endl;
}

int main()
{
    int arr[6] = { 0,4,-1,8,60,98 };
    int i, min, max;
    int size = sizeof(arr) / sizeof(arr[0]);

    findMinMax(arr, 6, min, max);
    return 0;

}


