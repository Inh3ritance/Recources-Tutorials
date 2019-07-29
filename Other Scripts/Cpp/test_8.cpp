#include <iostream>

using namespace std;

class Colors{
	public:
		enum Colorenum{blue,red,green,yellow};
		Colors(Colors::Colorenum value);
		string asString();
		
	protected:
		Colorenum value;
};

Colors::Colors(Colorenum initvalue){
	value = initvalue;
}

string Colors::asString(){
	switch(value){
		case blue:
			return "blue";
		case red:
			return "red";
		case green:
			return "green";
		case yellow:
			return "yellow";
		default:
			return "not Found";
	}
}

int main(){
	Colors InkColor = Colors::red;
	cout << InkColor.asString() << endl;
	return 0;
}
