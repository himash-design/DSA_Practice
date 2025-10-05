#include <iostream>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m) {
    cout << "Intersection: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = -1e9; // mark as used to avoid counting again
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 4, 6};
    int n = 5, m = 4;

    intersection(arr1, n, arr2, m);

    return 0;
}
