#include <iostream>
using namespace std;

void findMaxAndIndices(int arr[], int n)
{
    int x = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            x = arr[i];
        }
    }

    cout << "Maximum value: " << x << endl;
    cout << "Indices with maximum value: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i << " ";
        }
    }
}

int main()
{
    int arr[11] = {2, 5, 8, 10, 101, 99, 85, 75, 65, 55, 44};
    findMaxAndIndices(arr, 11);

    return 0;
}
