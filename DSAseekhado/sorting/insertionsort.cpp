#include <iostream>

using namespace std;

void insertionsort(int arr[], int n) {
    int i = 1;
    while (i < n) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};

    insertionsort(arr, 7);
    print(arr, 7);

    return 0;
}
