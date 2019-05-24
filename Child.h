#pragma once
#include <iostream>
#include <string>
#ifndef CHILD_H
#define CHILD_H

using namespace std;

class child
{
private:
	string name, surname;
	int age;
public:
	child()
	{
		name = "NONE";
		surname = "NONE";
		age = 0;
	}
	child(string name, string surname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}
	child(const child& object) :
		name(object.name), surname(object.surname), age(object.age)
	{
		cout << "Konstruktor kopirovani9." << endl;
	}
	~child() {}
	void setchild()
	{
		cout << "Vvedite im9 rebenka: ";
		cin >> name;
		cout << "Vvedite familiyou rebenka: ";
		cin >> surname;
		cout << "Vvedite vozrast rebenka: ";
		cin >> age;
	}

	void getchild()
	{
		cout << "Imformation o rebenke:" << endl << "Im9-" << name << endl << "Famili9-" << surname << endl << "Vozrast-" << age << endl;
	}
};
#endif
