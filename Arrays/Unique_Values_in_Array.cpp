#include <iostream>
using namespace std;

void uniqueValv(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // check if arr[i] occurs anywhere else
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 3, 4, 1, 2, 0, 4};
    int sz = 7;

    cout << "Unique Values: ";
    uniqueValv(arr, sz);

    return 0;
}
// Using Flag Method 