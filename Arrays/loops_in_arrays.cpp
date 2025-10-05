#include <iostream>
using namespace std;

int main() {
    // LOOPS in Array  -> To Perform Operations on array

    int age[3];
    int size_0 = 3 ;
    int marks[5] = { 99, 100, 45, 56, 78};
    int size_1 = 5;

    for (int i = 0; i< size_0; i++){
        cin >> age[i]; 
    }

    
    // int sz = sizeof(marks); // Gives total bytes arrays is occupying 
    // cout << sz << endl;

    for (int i = 0; i< size_1; i++){
        cout<< marks[i] << endl;
    }
    
    return 0;
}