#include<iostream>
#include<stdlib.h>


using namespace std;





// Declaraciones adelantadas de las funciones
float sumar1(float a, float b, float c);
float sumar(float valor1, float valor2);

float sumar1(float a, float b, float c) {
	float resultado;
	resultado = a+b+c;
	return resultado;
}

float sumar(float valor1, float valor2) {
	float result;
		result = valor1+valor2;
	return result;
}

int main() {
	
	system ("color 70");
	float incremento;
	float num1;
	float num2;
	float num3;
	float resultado;
	cout << "ingrese un numero" << endl;
	cin >> num1;
	cout << "ingrese un numero" << endl;
	cin >> num2;
	cout << "ingrese un numero" << endl;
	cin >> num3;
		incremento = sumar(num1,num2);
	cout << "la suma de los dos numeros es  " << incremento << endl;
		resultado = sumar1(num1,num2,num3);
	cout << "la suma de los tres numeros es " << resultado << endl;
	return 0;
}

