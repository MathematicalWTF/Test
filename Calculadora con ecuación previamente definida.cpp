//Programa de ecuaciones que ni yo entiendo xd

#include <iostream> //Entrada y salida
#include <conio.h> //Header para cerrar el programa con un click y verlo sin que se cierre.

using namespace std; //Usamos el using namespace para no poner los :: antes de Cout o Cin.

int main() {

	float primero; //variable 1
	float segundo; //variable 2

	cout << "Digite un numero: "; cin >> primero; //Primer numero a digitar
	cout << "Digite otro numero: "; cin >> segundo; //Segundo numero a digitar

	cout << "\tEl resultado es: " << (primero + segundo) + (primero - segundo) - (primero * segundo) * (primero / segundo) + 1;  //ecuacuón de (+)+(-)-(x)x(/) + 1

	cout <<" (( Porque es la solucion de (+)+(-)-(x)x(/) + 1 ))";

	if (primero or segundo == true) { //No es necesario ponerlo en "TRUE". Era solo para poner un else if luego.

		cout << " Por lo tanto es correcta!" << endl;
	}
	else if (primero or segundo == 0) { //Sí ( 0 + 0 / 0 x 0 / 0 - 0 o 0 / 0 ) nos imprimirá en la consola "Oops Algo ha salido mal!.

		cout << "\tOops Algo ha salido mal. El valor no debe ser 0!" << endl;
	}
		cout << "                            " << endl;
		cout << "Creado por Mathematical." << endl;
		cout << "                            " << endl;

	getch(); //Para cerrar el programa con un click y verlo sin que se cierre.
	return 0; //Mítico return 0
}

//By Mathematical
