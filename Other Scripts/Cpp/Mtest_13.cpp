#include <iostream>
#include <string>

using namespace std;

void ProcessData(){
	throw new string("Oops i found some bad data");
}

int main(){
	try {
		ProcessData();
		cout << "No Problems!" << endl;
	} catch (string *excep){
		cout << "Found an error. heres the message";
		cout << endl;
		cout << *excep;
		cout << endl;
	}
	cout << "All Finshed" << endl;
	return 0;
}
