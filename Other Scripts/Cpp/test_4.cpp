#include <iostream>
using namespace std;
int main(){
	string *Password = new string;
	*Password = "The egg salad is not fresh";
	cout << *Password << endl;
	cout << Password->length() << endl; 
	string *Pass = new string("just kidding");
	cout << *Pass << endl;
	
	delete Pass; //delete pointer, free up memory;
	
	return 0;
}
