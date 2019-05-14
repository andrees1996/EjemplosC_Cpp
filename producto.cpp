// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float num1;
	float num2;
	float resultado;
	cout << "ingrese el primer numero" << endl;
	cin >> num1;
	cout << "ingrese el segundo numero" << endl;
	cin >> num2;
	resultado = num1*num2;
	cout << "el resultado es:" << resultado << endl;
	return 0;
}

