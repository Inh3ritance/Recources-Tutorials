#include <iostream>
using namespace std;

class Cat{
	public:
		string name;
};

class Dog{
	public:
		string name;
};

class Human{
	public:
		string name;
};

class Door{
	private:
		int HowManyInside;
	public:
		void Start();
		void GoThrough(Cat *acat);
		void GoThrough(Dog *adog);
		void GoThrough(Human *ahuman);
};

void Door::Start(){
	HowManyInside = 0;
}

void Door::GoThrough(Cat *somebody){
	cout << "welcome, " << somebody->name << endl;
	cout << "A cat just entered" << endl;
	HowManyInside++;
}

void Door::GoThrough(Dog *somebody){
	cout << "welcome, " << somebody->name << endl;
	cout << "A dog just entered" << endl;
	HowManyInside++;
}

void Door::GoThrough(Human *somebody){
	cout << "welcome, " << somebody->name << endl;
	cout << "A human just entered" << endl;
	HowManyInside++;
}

int main(){
	Door entrance;
	entrance.Start();
	
	Cat *SneakyGirl = new Cat;
	SneakyGirl->name = "reemi";
	
	Dog *gboi = new Dog;
	gboi->name = "rom";
	
	Human *me = new Human;
	me->name = "Jeff";
	
	entrance.GoThrough(SneakyGirl);
	entrance.GoThrough(gboi);	
	entrance.GoThrough(me);		
	
	delete SneakyGirl;
	delete gboi;
	delete me;
	
	return 0;
}
