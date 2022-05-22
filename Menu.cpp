#include "Menu.h"
#include "Date.h"
#include <iostream>
using namespace std;

void Menu::menu() {
	//puede que dia mes y año las tenga que cambiar a variables locales de este metodo menu
	cout << "Ingrese una fecha" << endl;
	cout << "Dia: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << "Anio: ";
	cin >> anio;
	Date a(mes, dia, anio);
	Menu me;
	int op = 0;
	do {
		cout << "Elija una opcion. 1: Incrementar  2: Decrementar 0: Salir" << endl;
		cin >> op;
		switch (op){
		case 1: ++a; me.mostrarFecha(&a); break;
		case 2: break;
		case 0: break;
		default: cout << "No existe esa opcion" << endl; break;
		}
	} while (op != 0);
}

void Menu::mostrarFecha(Date* a) {
	cout << "mes:" << a->getMonth() << " dia:" << a->getDay() << " anio:" << a->getYear() << endl;
}
