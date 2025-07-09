#include <iostream>
#include <cmath>
using namespace std;

	double radius, area, circum, ellipse, pi, cellipse;
	double Area_Circle(double), Circumference_Circle(double), Ellipse_Circle(double), Const_pi(double), Circum_Ellipse(double);
	
	

int main(){	
	cout << "Input the value of radius of the circle: ";						//Print line for getting the input radius
	cin >> radius;
	cout << "Area = "<< Area_Circle(area) << endl;								//Output for Area
	cout << "Circumference = "<<Circumference_Circle(circum) << endl;			//Output for Circumference
	cout << "Ellipse = "<<Ellipse_Circle(circum)<<endl;							//Output for Ellipse
	cout << "Cirumference of Ellipse = "<<Circum_Ellipse(cellipse);				//Output for Circumference of Ellipse
}
//Constant function for pi
double Const_pi(const double pi){
	return 3.14159;
}
// Reference and formula for area
double Area_Circle(double area){
	area = Const_pi(pi)*(radius*radius);
	return area;
}
// Reference and formula for Circumference of the Circle
double Circumference_Circle(double circum){
 	circum = 2*Const_pi(pi)*radius;
 	return circum;
}
// Reference and formula for Ellipse of the Circle
double Ellipse_Circle (double ellipse){
	double &A = radius;
	double B = 2*A;
	
	ellipse = Const_pi(pi) * A * B;
	return ellipse;
}
// Reference and formula for Circumference of the Ellipse
double Circum_Ellipse (double cellipse){
	double &A = radius;
	double B = 2*A;
	cellipse = ((Const_pi(pi)*2) * sqrt((A*A + B*B)/2) + Const_pi(pi)*(A+B))/2;
	return cellipse;
}


