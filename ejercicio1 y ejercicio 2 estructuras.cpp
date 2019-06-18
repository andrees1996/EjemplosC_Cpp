#include<iostream>
#include<cstdlib>
#include <conio.h>
#include<string.h>
struct Cliente
{
	char nombre[50];
	int unidades;
	float precio;
	char estado;
}cliente0 = {"Andres Vargas", 15,24.45, 'M'}, cliente1, cliente2, cliente3, *cliente4, *cliente5;


using namespace std;
int main()
{
	
	Cliente listado[100];
	Cliente cliente1 = {"Mario Juan",22,34.56,'A'};
	Cliente cliente2 = {"Lucia Benitez",22,34.56,'M'};
	cliente2 = cliente1;
	cliente3 = cliente1;
	

cout << "sizeof(char)=" << sizeof(char) << endl;
cout << "sizeof(int)=" << sizeof(int) << endl;
cout << "sizeof(float)=" << sizeof(float) << endl;
cout << "sizeof(Cliente)=" << sizeof(Cliente) << endl<<endl;

cout<<"los datos del cliente0 son\n";
cout<< "nombre: "<<cliente0.nombre<<endl
<<"numero de unidades: "<<cliente0.unidades<<endl
<<"precio: "<<cliente0.precio<<endl
<<"estado: "<<cliente0.estado<<endl<<endl;


cout<<"los datos del cliente1 son\n";
cout<< "nombre: "<<cliente1.nombre<<endl
<<"numero de unidades: "<<cliente1.unidades<<endl
<<"precio: "<<cliente1.precio<<endl
<<"estado: "<<cliente1.estado<<endl<<endl;


cout<<"los datos del cliente2 son\n";          
 /* se imprimen los mismos valores de cliente1, ya que inicializamos que cliente2 =cliente1
 ya que al declarar esto se copian todos los argumentos de cliente1 en cliente2*/
cout<< "nombre: "<<cliente2.nombre<<endl
<<"numero de unidades: "<<cliente2.unidades<<endl
<<"precio: "<<cliente2.precio<<endl
<<"estado: "<<cliente2.estado<<endl<<endl;

strcpy(cliente3.nombre, "Darwin Vargas");
cliente3.unidades=58;
cliente3.precio=14.58;
cliente3.estado='M';
cout<<"los datos del cliente3 son\n";
cout<< "nombre: "<<cliente3.nombre<<endl
<<"numero de unidades: "<<cliente3.unidades<<endl
<<"precio: "<<cliente3.precio<<endl
<<"estado: "<<cliente3.estado<<endl<<endl;

cliente4 = (Cliente*)malloc(sizeof(Cliente));
strcpy(cliente4->nombre, " Maria Luisa");
cliente4->unidades = 987;
cliente4->precio =568.45;
cliente4->estado = 'A';
cout<<"los datos del cliente4 son\n";
cout<< "nombre: "<<cliente4->nombre<<endl
<<"numero de unidades: "<<cliente4->unidades<<endl
<<"precio: "<<cliente4->precio<<endl
<<"estado: "<<cliente4->estado<<endl<<endl;
free(cliente4);

cliente5 = new Cliente;
strcpy(cliente5->nombre, " Rodrigo Vargas");
cliente5->unidades=578;
cliente5->precio=5784.14;
cliente5->estado = 'P';
cout<<"los datos del cliente5 son\n";
cout<< "nombre: "<<cliente5->nombre<<endl
<<"numero de unidades: "<<cliente5->unidades<<endl
<<"precio: "<<cliente5->precio<<endl
<<"estado: "<<cliente5->estado<<endl<<endl;
free (cliente5);



	
	
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
