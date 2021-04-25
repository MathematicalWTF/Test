// Un ejemplo de calculadora básica.


#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float numero;
	float resultado;

	cout << "Muy Bien!! Empecemos calculando!! :D" << endl;
	cout << "                            " << endl;

	cout << "\t****   **" << endl;
	cout << "\t****   *  *" << endl;
	cout << "\t       *   *" << endl;
	cout << "\t       *   *" << endl;
	cout << "\t       *   *" << endl;
	cout << "\t****   *  *" << endl;
	cout << "\t****   **" << endl;

	cout << "                            " << endl;

	cout << "Introduce un numero al azar: "; cin >> numero;
	cout << "Ahora, vuelve a introducir otro numero: "; cin >> resultado;

	cout << "                            " << endl;

	cout << "La suma es: " << numero + resultado << endl;
	cout << "La division es: " << numero / resultado << endl;
	cout << "La multiplicacion es: " << numero * resultado << endl;
	cout << "La resta es: " << numero - resultado << endl;

	cout << "                            " << endl;

	cout << "La elevacion a la segunda potencia del primer numero es: " << numero * numero << endl;
	cout << "La elevacion a la tercera potencia del primer numero es: " << numero * numero * numero << endl;
	cout << "La elevacion a la cuarta potencia del primer numero es: " << numero * numero * numero * numero << endl;
	cout << "La elevacion a la quinta potencia del primer numero es: " << numero * numero * numero * numero * numero << endl;
	cout << "                            " << endl;
	cout << "La elevacion a la segunda potencia del segundo numero es: " << resultado * resultado << endl;
	cout << "La elevacion a la tercera potencia del segundo numero es: " << resultado * resultado * resultado << endl;
	cout << "La elevacion a la cuarta potencia del segundo numero es: " << resultado * resultado * resultado * resultado << endl;
	cout << "La elevacion a la quinta potencia del segundo numero es: " << resultado * resultado * resultado * resultado * resultado << endl;

	if (numero or resultado == true)
		cout << "                            " << endl;
		cout << "Vaya! Me imagino que ves muchos numeros interesantes! Espero te sean utiles!" << endl;
	cout << "                            " << endl;
	cout << "\tCreado por Mathematical." << endl;

	getch();
	return 0;
}
