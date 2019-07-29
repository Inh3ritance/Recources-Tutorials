#include <iostream>
using namespace std;

void ChangeIsGood(int *param){
  (*param) += 10;
  cout << "Inside the function:" << endl;
  cout << *param << endl;
}

int main(){
	int user;
	int myNumber = 30;
	cout << "Before the function:" << endl;
	cout << myNumber << endl;
	
	ChangeIsGood(&myNumber);
	cout << "After the function:" << endl;
	cout << myNumber << endl;
	
	cin >> user;
	
	return 0;
}
