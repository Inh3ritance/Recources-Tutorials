#include <iostream>

using namespace std;

class Oven{
	private:
		void TurnOnHeatElement();//Although Private, You still can access these indirectly through a public method called by the user!
		void TurnOffHeatElement();
		
		public:
		void Bake(int temperature); 
};

void Oven::TurnOnHeatElement(){
	cout << "Heating Element is now ON!" << endl;
}

void Oven::TurnOffHeatElement(){
	cout << "Heating Element is now Off!" << endl;
}

void Oven::Bake(int temperature){
	TurnOnHeatElement();
	cout << "Baking!" << endl;
	TurnOffHeatElement();
} 

int main(){
	Oven fred;
	fred.Bake(123);
	return 0;
}
