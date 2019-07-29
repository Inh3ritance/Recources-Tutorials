#include <iostream>
using namespace std;
int main(){
 int numberOfPotHoles = 123456;
 int *ptr; // pointer variable
 ptr = &numberOfPotHoles;
 *ptr = 6098;
 cout << ptr<< endl;
 cout << &numberOfPotHoles << endl; // convert to hexadecimal 	
}
