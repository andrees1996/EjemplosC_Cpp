// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;


// Declaraciones adelantadas de las funciones
void saludar();
float calculardoble(float num);
void triplicar(float &num);


void saludar() {
	cout << "Hola mundo!" << endl;
}

// funcion que recibe un argumento por valor, y devuelve su doble
float calculardoble(float num) {
	float res;
	// retorna el doble
	res = num*2;
	return res;
}

// funcion que recibe un argumento por referencia, y lo modifica
void triplicar(float &num) {
	// modifica la variable duplicando su valor
	num = num*3;
}

// proceso principal, que invoca a las funciones antes declaradas
int main() {
	float x;
	cout << "Llamada a la funcion Saludar:" << endl;
	// como no recibe argumentos pueden omitirse los paréntesis vacios
	SALUDAR();
	cout << "Ingrese un valor numérico para x:" << endl;
	cin >> x;
	cout << "Llamada a la función CalcularDoble (pasaje por valor)" << endl;
	cout << "El doble de " << x << " es " << calculardoble(x) << endl;
	cout << "El valor original de x es " << x << endl;
	cout << "Llamada a la función Triplicar (pasaje por referencia)" << endl;
	triplicar(x);
	cout << "El nuevo valor de x es " << x << endl;
	return 0;
}

