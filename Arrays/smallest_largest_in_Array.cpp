#include <iostream>
using namespace std;

int main() {

    int nums[6] = { 5, -12, 1, 56, 0, -4};
    int size = 6;

    int small = INT32_MAX;
    int large = INT32_MIN;

    for(int i = 0; i < size; i ++){
        // min/max Functions
        small = min(nums[i], small) ; 
        large = max( nums[i], large);
    }
    cout << "Smallest Number:" << small << endl;
    cout << "Largest Number:" << large << endl;

    return 0;
}