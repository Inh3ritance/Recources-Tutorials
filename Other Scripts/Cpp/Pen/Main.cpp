#include <iostream>
#include "Pen.cpp"

using namespace std;

int main(){
	Pen FavoritePen;
	
	FavoritePen.InkColor = blue;
	FavoritePen.ShellColor = clear;
	FavoritePen.CapColor = black;
	FavoritePen.Style = ballpoint;
	FavoritePen.Brand = "Pilot";
	FavoritePen.InkLevelPercent = 90;
	
	Pen WorstPen;
	WorstPen.InkColor = blue;
	WorstPen.ShellColor = red;
	WorstPen.Style = felt_tip;
	WorstPen.Length = 3.5;
	WorstPen.Brand = "Acme SPecial";
	WorstPen.InkLevelPercent = 100;
	
	cout << "This is my favorite pen" << endl;
	cout << "Color " << FavoritePen.InkColor << endl;
	cout << "Brand: " << FavoritePen.Brand << endl;
	cout << "InkLevel: " << FavoritePen.InkLevelPercent << "%" << endl;
	FavoritePen.write_on_paper("Hello I am a pen and I am wasting ink");
	cout << "InkLevel: " << FavoritePen.InkLevelPercent << "%" << endl;
	
	// Extended Section //
	
	Pen *MyPen;//declare the pointer
	MyPen = new Pen;//calls new to create the object
	MyPen->InkColor = red;//Accesses the members of the object through the pointer
	cout << MyPen->InkColor << endl;
	delete MyPen;//deletes the object
	MyPen = 0;// clears the Pointr
	
	// End Of Extended Secion//
	
	return 0; 
}
