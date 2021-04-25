// Un ejemplo del uso de IF y ELSE.

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	float numero;
	float resultado;

	cout << "Comencemos a sumar :D! "<< endl;

	cout << "Digite un numero: "; cin >> numero;

	cout << "Digite otro numero: "; cin >> resultado;

	cout << "Ambos numeros dan como resultado: " << numero + resultado << endl;

	if (numero + resultado <= 4) {

		cout << "Es menor o igual a 4" << endl;
	}

	else if (numero + resultado >= 4) {

		cout << "Es mayor a 4" << endl;
	}

	else (numero + resultado == (4)); {

		cout << "El numero es 4 por lo tanto es correcto" << endl;
	}
	
	getch();
	return 0;
}

//By Mathematical con todo el cariño del mundo.
