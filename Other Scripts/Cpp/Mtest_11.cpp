#include <iostream>

using namespace std;

int SeatsPerCar(){
	return 4;
}

int CountSeats(){
	return 10 * SeatsPerCar();
}

int CountStuff(){
	return CountSeats() + 25;	
}

int main(){
	cout << CountStuff() << endl;
	system("PAUSE");
	return 0;
}
