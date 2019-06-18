#include<iostream>
#include<cstdlib>
#include <conio.h>

struct Cliente
{
	char nombre[50];
	int unidades;
	float precio;
	char estado;
}cliente1;

using namespace std;
int main()
{
	cout<<"digite su nombre\n";
	cin.getline(cliente1.nombre,20,'\n');
	cout<<" numero de unidades\n";
	cin>>cliente1.unidades;
	cout<<" precio\n";
	cin>>cliente1.precio;
	cout<<" estado\n";
	cin>>cliente1.estado;
	return 0;
	
}
