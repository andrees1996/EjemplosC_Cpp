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
float promedio(float arreglo[], float cantidad);

// Calcula el promedio de una lista de N datos utilizando un SubProceso
float promedio(float arreglo[], float cantidad) {
	int i;
	float prom;
	float suma;
	suma = 0;
	for (i=0;i<=cantidad-1;i++) {
		suma = suma+arreglo[i];
	}
	prom = suma/cantidad;
	return prom;
}

int main() {
	float acum;
	float datos[100];
	int i;
	int n;
	float prom;
	cout << "Ingrese la cantidad de datos:" << endl;
	cin >> n;
	for (i=0;i<=n-1;i++) {
		cout << "Ingrese el dato " << i+1 << ":" << endl;
		cin >> datos[i];
	}
	cout << "El promedio es: " << promedio(datos,n) << endl;
	return 0;
}

