#include <iostream>
using namespace std;

int main(){
    int x = 5; //101
    x <<= 3;//adds 3 zeroes to the right of the number
    cout << x << endl;
    x >>= 4; //shifts all the bits to the right
    cout << x << endl;
    x <<= 1;//adds 1 zeroes to the right of the number
    cout << x << endl;
    //if i shift bits to the right, i lose the bits at one i had
    //they all turn to zero
    return 0;
}
