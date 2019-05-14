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

// Declaraciones adelantadas de las funciones
int potencia(float base, float exponente);

// Implementación del cálculo de una potencia mediante una función recursiva
// El paso recursivo se basa en que A^B = B*(A^(B-1))
// El paso base se base en que A^0 = 1
int potencia(float base, float exponente) {
	int resultado;
	if (exponente==0) {
		resultado = 1;
	} else {
		resultado = base*potencia(base,exponente-1);
	}
	return resultado;
}

int main() {
	int base;
	int exponente;
	cout << "Ingrese Base" << endl;
	cin >> base;
	cout << "Ingrese Exponente" << endl;
	cin >> exponente;
	cout << "El resultado es " << potencia(base,exponente) << endl;
	return 0;
}

