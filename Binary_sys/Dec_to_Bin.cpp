#include<iostream>
using namespace std;

int dectoBin (int decNum){
    int ans = 0 , pow=1;

    while (decNum >0)
{
    int rem = decNum % 2;
    decNum/= 2;
    ans+= (rem * pow);
    pow*= 10 ;

}

  return ans; // Binary Form
}

int bintoDec(int binNum){
    int ans = 0 , pow =1;

    while(binNum > 0){
        int rem = binNum%10;
        ans = ans +  (rem * pow);

        binNum = binNum/10;
        pow = pow * 2 ;
    }
    return ans ; // Decimal Form
}

int main() {
    int decNum= 7; 
    int binNum = 1011;
    cout << bintoDec( binNum ) <<endl;
    //cout << dectoBin(decNum) << endl;
   
    }


    
