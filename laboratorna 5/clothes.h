#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;
enum CLOTHES
{
	SHIRT,
	JEANS, 
	JACKET,
	TROUSERS

};
class Clothing
{
public:  
	CLOTHES type_of_clothes;
	string name, description, location, colour;
	int size;
	int price;
Clothing()
	{
	    type_of_clothes = SHIRT;
		name="nike";
		description ="coton ";
		location="central departament ";
		colour="blue ";
		size=45;
		price = 10000;
	}
	~Clothing() {}
Clothing(CLOTHES type, string name, string description, string location, string colour, int size,int price)
	  {
		  type_of_clothes = type;
		  this->name = name;
		  this->description = description;
		  this->location = location;
		  this->colour = colour;
		  this->size = size;
		  this->price = price;
	  }
void getClothes()
	  {
		  cout << type_of_clothes << endl;
		  cout << name<<endl;
		  cout << description << endl;
		  cout << location << endl;
		  cout << colour << endl;
		  cout << size << endl; 
		  cout << price << endl;
		  cout << "-------------------------" << endl;
	  }
  void CHANGE() 
	  {
		  price = size;
	  }
};
class Wardrobe
{
public:
	

	vector <Clothing> Array;


	void AddClothing(Clothing type_of_clothes)
	{
		Array.push_back(type_of_clothes);
	}
	void goOutClothing()
	{
			if (Array.size() >= 3) 
			{
				cout << "your Human is ready to go outside"<< endl;
			}
			else 
			{
				cout << "your Human is not ready to go outside" << endl;
			}	
	}
};
