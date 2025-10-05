#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec; // size 0
    // vector <int> vec_1 = { 1, 2, 3};
    // cout << vec_1[1] << endl;

    // for( int val: vec_1) { // For each loop , here iterator if the value in vector itself
    //     cout << val << endl;
    // }

    // Vector Operations 
    vector <int> vecc={ 0,1,2,3,4} ; 
    cout << "Size=" << vecc.size() << endl;

    vecc.push_back(35);
        cout << "Size=" << vec.size() << endl;

    vecc.pop_back() ;
            cout << "Size=" << vec.size() << endl;

    cout << vecc.front() << endl;
    cout << vecc.back() << endl;
    cout << vecc.at(3) << endl;

    vec.push_back(45);
    vec.push_back(35);
    vec.push_back(25);
    vec.push_back(15);
    cout << "SIZE : " << vec.size() << endl;
    cout << "Capacity:" << vec.capacity() << endl;


    return 0;
}