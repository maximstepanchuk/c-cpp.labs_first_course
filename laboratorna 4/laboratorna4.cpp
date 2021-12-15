#include <iostream>
#include <string>
using namespace std;
#include "perforator.h"

int main()
{
	Perforator First_type(150, "Dipro_M", 60, "black");
	Perforator Second_type(200, "Makita", 50, "white");
	Perforator Third_type(250, "Novus", 70, "red");
	First_type.Data_output();
	Second_type.Data_output();
	Third_type.Data_output();


	return 0;
}