#include "clothes.h"
#include <iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
	Clothing type;
	Clothing type1( TROUSERS, "ADIDAS","coton","central departament ","black",60,1000);
	
	Wardrobe TYPE = Wardrobe();
	TYPE.AddClothing(type1);
	
	TYPE.AddClothing(type);

	type.CHANGE();
	type1.CHANGE();
	

	type.getClothes();
	type1.getClothes();
	
	TYPE.goOutClothing();

	return 0;
}
	



