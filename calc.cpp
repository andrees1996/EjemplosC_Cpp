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
	int a;
	int b;
	int c;
	int d;
	char op;
	while (op!='d') {
		cout << "Menú de recomendaciones" << endl;
		cout << "   a. suma" << endl;
		cout << "   b. resta" << endl;
		cout << "   c. multiplicacion" << endl;
		cout << "   d. salir" << endl;
		cout << "Elija una opción (1-4): " << endl;
		cin >> op;
		switch (op) {
		case 'a':
			cout << "ingrese un numero" << endl;
			cin >> a;
			cout << " ingrese otro numero" << endl;
			cin >> b;
			c = a+b;
			cout << " el resultado es : " << c << endl;
			break;
		case 'b':
			cout << "ingrese un numero" << endl;
			cin >> a;
			cout << " ingrese otro numero" << endl;
			cin >> b;
			c = a-b;
			cout << " el resultado es : " << c << endl;
			break;
		case 'c':
			cout << "ingrese un numero" << endl;
			cin >> a;
			cout << " ingrese otro numero" << endl;
			cin >> b;
			c = a*b;
			cout << " el resultado es : " << c << endl;
			break;
		case 'd':
			cout << "Gracias, vuelva prontos" << endl;
			break;
		default:
			cout << "Opción no válida" << endl;
		}
	
	}
	return 0;
}

