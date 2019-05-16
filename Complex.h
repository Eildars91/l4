#pragma once
#include <iostream>
#include <string>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class complex
{
private:
	double rez, imz;
public:
	complex()
	{
		rez = 0.0;
		imz = 0.0;
	}
	~complex() {}
	complex(double rez, double imz)
	{
		this->rez = rez;
		this->imz = imz;
	}
	complex(const complex& object) :
		rez(object.rez), imz(object.imz)
	{
		cout << "Konstruktor kopirovani9." << endl;
	}
	void entercomplex()
	{
		cout << "Vvedite deistvitelnyyou 4ast': ";
		cin >> rez;
		cout << "Vvedite mnimyyou 4ast': ";
		cin >> imz;
	}
	void modulecomplex()
	{
		double m = sqrt(rez * rez + imz * imz);
		cout << "Module = " << m << endl;
	}
	void argumentcomplex()
	{
		if (rez != 0)
		{
			double z = imz / rez;
			cout << "Argument = " << z;
		}
		else cout << "Nevozmojno vi4islit' argument.";
	}
};
#endif
