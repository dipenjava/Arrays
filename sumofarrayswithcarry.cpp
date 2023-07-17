#include <iostream>
using namespace std;

void findArraySum(int arr1[], int n, int arr2[], int m) {
    int i = n - 1;
    int j = m - 1;
    int ans[100];
    int carry = 0;
    int size = 0; // Track the size of the answer array

    while (i >= 0 && j >= 0) {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum; // Store the digit in the answer array
        size++;
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
        i--;
    }

    while (j >= 0) {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
        j--;
    }

    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
    }

    // Print the answer array in reverse order
    for (int k = size - 1; k >= 0; k--) {
        cout << ans[k] << " ";
    }
}

int main() {
    int arr1[7] = {0, 1, 2, 3, 4, 5, 6};
    int arr2[5] = {6, 5, 4, 3, 2};

    findArraySum(arr1, 7, arr2, 5);

    return 0;
}
