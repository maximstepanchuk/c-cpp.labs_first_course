#include "geometric_shapes.h"
#include <iostream>

using namespace std;
int main() {
	circle firstCircle;
    firstCircle.setArea();
	
	triangle firstTriangle;
	firstTriangle.setArea();
	
	cylinder firstCylinder;
	firstCylinder.setArea();
	
    cone firstCone;
	firstCone.setArea();
	
	sphere firstSphere;
	firstSphere.setArea();

	cout << "------------------------" << endl;
	firstCircle.coutArea();
	cout << "------------------------" << endl;
	firstTriangle.coutArea();
	cout << "------------------------" << endl;
	firstCylinder.coutArea();
	cout << "------------------------" << endl;
	firstCone.coutArea();
	cout << "------------------------" << endl;
	firstSphere.coutArea();
	cout << "------------------------" << endl;

	return 0;
}