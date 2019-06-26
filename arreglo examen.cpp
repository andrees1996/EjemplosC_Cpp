#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<cmath>
#include<iomanip>
using namespace std;

void DatosCliente( struct Cliente lista[]);
float Calculos(struct Cliente lista[]);
void Retorno(struct Cliente lista[]);
struct Cliente
{
	float codigo; 
	char nombre[50];
	float saldo;
};

int main()
{
 Cliente datoscliente[4];
DatosCliente(datoscliente);
float resultado = Calculos(datoscliente);
Retorno(datoscliente);	
}

void DatosCliente(struct  Cliente datoscliente[])
{
	for (int i =0 ; i<4; i++)
	{
		char buffer[4];
		
		cout<<"ingrese su nombre\n";
		cin.getline(datoscliente[i].nombre,50);
		cout<<"ingrese su codigo\n";
		cin>>datoscliente[i].codigo;
		cout<<"ingrese su saldo\n";
		cin>>datoscliente[i].saldo;
		cin.getline(buffer,4);

		
	}
}

float Calculos(struct Cliente datoscliente[])
{
	float saldo;
	for (int i =0 ; i<4; i++)
	{
		if(datoscliente[i].saldo < 10 )
		{
			datoscliente[i].saldo =datoscliente[i].saldo-1;
			
		}
		else if(datoscliente[i].saldo >= 10 && datoscliente[i].saldo<100 )
		{
			datoscliente[i].saldo= pow(datoscliente[i].saldo,3);
		
		}

		
	}
}

void Retorno(struct Cliente lista[])
{
		cout<<setw(20)<<"nombre"<<setw(10)<<"codigo"<<setw(10)<<"saldo"<<endl;
	for (int i =0 ; i<4; i++)
	{
	
		cout<<"cliente ["<<i<<"]:"<< lista[i].nombre;
		cout<<"codigo :"<<setw(5)<< lista[i].codigo;
		cout<<"saldo :"<<setw(5)<< lista[i].saldo;
		cout<<endl;
	}
	
}
