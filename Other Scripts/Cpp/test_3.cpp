#include <iostream>
using namespace std;
int main(){
	string str = "Hello string program";
	for(unsigned i = 0; i < str.length(); i++){
		cout << str[i] << " ";
	}
	cout << endl;
	return 0;
}
