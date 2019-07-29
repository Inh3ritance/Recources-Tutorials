#include <iostream>

using namespace std;

/* old C example of structure's
 struct Dimensions{
 	int height;
 	int width;
 	int weight;
 	int price;
 }; */
 
 // a structure has ony variable's , unlike classes which contain sub-classes, methods, and variables//
 
 // ex.
 
 struct Point3D{
 	double x;
 	double y;
 	double z;
 };
 
 int main(){
 	Point3D FirstPoint = {10.5,22.5,30.8};
 	Point3D SecondPoint = FirstPoint;
 	cout << SecondPoint.x << endl;
 	cout << SecondPoint.y << endl;
 	cout << SecondPoint.z << endl;
 	return 0;
 }
