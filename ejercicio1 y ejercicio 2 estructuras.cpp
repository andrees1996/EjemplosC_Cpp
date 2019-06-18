#include<iostream>
#include<cstdlib>
#include <conio.h>

struct Cliente
{
	char nombre[50];
	int unidades;
	float precio;
	char estado;
}cliente1, cliente2, cliente3, cliente4;

using namespace std;
int main()
{
	Cliente listado[100];
	cliente2 = cliente1;
	cliente3 = cliente1;
	cliente4 = cliente1;
	
	
/*	cout<<"digite su nombre\n";
	cin.getline(cliente1.nombre,20,'\n');
	cout<<" numero de unidades\n";
	cin>>cliente1.unidades;
	cout<<" precio\n";
	cin>>cliente1.precio;
	cout<<" estado\n";
	cin>>cliente1.estado;*/
	return 0;
	
}
