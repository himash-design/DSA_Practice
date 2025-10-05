#include <iostream>
using namespace std;

void reverse (int arr[], int size){
    int start = 0, end = size-1;

    while (start < end) {

    swap(arr[start], arr[end]);

    start++;
    end--;
}
}

int main() {
    // 2 Pointer Approach
    int arr[] = {5, 2, 1, 8, 7, 2};
    int size = 6;

    reverse(arr, size);
 
    // Printing Reverse Array 
    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}