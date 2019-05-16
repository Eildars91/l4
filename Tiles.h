#pragma once
#include <iostream>
#include <string>
#ifndef TILES_H
#define TILES_H

using namespace std;

class tiles
{
private:
	string brand,price;
	int size_h,size_w;
public:
	tiles()
	{
		brand = "NONE";
		size_h = 0;
		size_w = 0;
		price = "NONE";
	}
	tiles(string brand, int size_h, int size_w, string price)
	{
		this->brand = brand;
		this->size_h = size_h;
		this->size_w = size_w;
		this->price = price;
	}
	tiles(const tiles& object) :
		brand(object.brand), size_h(object.size_h), size_w(object.size_w), price(object.price)
	{
		cout << "Konstruktor kopirovani9." << endl;
	}
	~tiles() {}
	void gettiles()
	{
		cout << "Enter a brand of the tiles: ";
		cin >> brand;
		cout << "Enter a size_h of yhe tiles: ";
		cin >> size_h;
		cout << "Enter a size_w of the tiles: ";
		cin >> size_w;
		cout << "Enter a prise of the tiles: ";
		cin >> price;
		cout << brand << " tiles with size_h=" << size_h << " and size_w=" << size_w << " costs " << price << endl;
	}

};
#endif#pragma once
