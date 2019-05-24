#pragma once
#include <iostream>
#include <string>
#ifndef VECTOR_H
#define VECTOR_H

using namespace std;

class vector
{
private:
	int v1x;
	int v1y;
	int v2x;
	int v2y;
public:
	vector()
	{
		v1x = 0;
		v1y = 0;
		v2x = 0;
		v2y = 0;
	}
	vector(int v1x, int v1y, int v2x, int v2y)
	{
		this->v1x = v1x;
		this->v1y = v1y;
		this->v2x = v2x;
		this->v2y = v2y;
	}
	vector(const vector& object) :
		v1x(object.v1x), v1y(object.v1y), v2x(object.v2x), v2y(object.v2y)
	{
		cout << "Konstruktor kopirovani9." << endl;
	}
	~vector()
	{
	}
	void entervector()
	{
		cout << "Vvedite koordinati x pervogo vektora: ";
		cin >> v1x;
		cout << "Vvedite koordinati y pervogo vektora: ";
		cin >> v1y;
		cout << "Vvedite koordinati x vtorogo vektora: ";
		cin >> v2x;
		cout << "Vvedite koordinati y vtorogo vektora: ";
		cin >> v2y;
	}
	void module1v()
	{
		cout << "Module pervogo vektora = " << sqrt(v1x * v1x + v1y * v1y) << endl;
	}
	void module2v()
	{
		cout << "Module vtorogo vektora = " << sqrt(v2x * v2x + v2y * v2y) << endl;
	}
	void sumv()
	{
		cout << "Summa vektora: x=" << v1x + v2x << " y=" << v1y + v2y << endl;
	}
	void subtractv()
	{
		cout << "Vi4itanie vektora: x=" << v1x - v2x << " y=" << v1y - v2y << endl;
	}
};
#endif
