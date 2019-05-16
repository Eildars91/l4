#include <iostream>
#include "Child.h"
#include "CompleX.h"
#include "Tiles.h"
#include "Vector.h"
int main()
{
	child A;
	child B;
	A.setchild();
	A.getchild();
	B.setchild();
	B.getchild();
	complex C;
	C.entercomplex();
	C.modulecomplex();
	C.argumentcomplex();
	tiles A1;
	tiles B1;
	tiles C1;
	A1.gettiles();
	B1.gettiles();
	C1.gettiles();
	vector V;
	V.entervector();
	int operation = 0;
	while (operation != 5)
	{
		cout << "Operation kotoryyou xotite sdelat':" << endl;
		cout << "1. Naiti module pervogo vektora" << endl;
		cout << "2. Naiti module vtorogo vektora" << endl;
		cout << "3. Naiti summy" << endl;
		cout << "4. Naiti vi4itanie" << endl;
		cout << "5. Exit" << endl;
		cout << "Operation: ";
		cin >> operation;
		cin >> operation;
		if (operation < 1 || operation > 5)
		{
			while (operation < 1 || operation > 5)
			{
				cout << "Operation nevozmojna. Viberite drygyyou operation: ";
				cin >> operation;
			}
		}
		switch (operation)
		{
		case 1:
			V.module1v();
			break;
		case 2:
			V.module2v();
			break;
		case 3:
			V.sumv();
			break;
		case 4:
			V.subtractv();
			break;
		case 5:
			break;
		}
	}
}