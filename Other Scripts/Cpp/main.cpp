#include <iostream>
using namespace std;
int main(){
	cout << "hey you" << endl;
	string word  = "NO LEAF CLOVER";
	word.insert(10/* position*/,"seriously");
	cout << word<< endl;
	word.erase(19,16);
	cout << word << endl;
	word.replace(4,5, "body");
	cout << word << endl;
	return 0;
} 
