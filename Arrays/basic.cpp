#include <iostream>
using namespace std;

int main() {

   int age [5];
   int marks[5] = { 99, 100, 45, 56, 78};
   double price[] = { 44.5, 99.9, 5554.9};
   // Automatically arrays becomes of size 3

   //Accessing
   cout<< marks[0] << endl;
   cout<< marks[1] << endl;
   cout<< marks[2] << endl;
   cout<< marks[3] << endl;
   cout<< marks[4] << endl;

   // 0 to size-1
   cout<< marks[78] << endl;
   /* That means when you access marks[78], 
   the compiler happily gives you whatever is stored at that memory location 78 integers away from the start of marks. */

    

    return 0;
}