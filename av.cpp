#include<iostream> 

#include<stdlib.h> 

#include<conio.h> 

#include<math.h> 

  

using namespace std; 

  

float suma(float a,float b,float c); 

float promedio(float a,float b,float c); 

float producto(float a,float b,float c); 

float mayor(float a,float b,float c); 

  

int main () 

{ 

     

    float num1,num2,num3; 

    char opcion; 

  

  

while( opcion !='s' || opcion != 'S' ) 

    {     

    system("cls"); 

    cout<< "-----------------------CALCULADORA--------------------------"; 

    cout<< endl<<endl; 

     

    cout<< "\ningrese una opcion"<<endl; 

    cout<< "a.   Suma"<<endl; 

    cout<< "b.   promedio"<<endl; 

    cout<< "c.   producto"<<endl; 

    cout<< "d.   Mayor o Menor"<<endl; 

    cout<< "S/s.   SALIR"<<endl; 

    cin >>opcion;     

        switch(opcion) 

        { 

            case 'a': 

                suma(num1,num2,num3); 

                break; 

             

            case 'b': 

                promedio(num1,num2,num3); 

                break; 

             

            case 'c': 

                producto(num1,num2,num3); 

                break; 

                 

            case 'd': 

                mayor(num1,num2,num3); 

                break; 

                 

            case 's': 

            case'S': 

                return 0; 

             

            default:  

                cout<<"opcion no valida"; 

                break;     

        } 

        cout<<"\npresione enter para una nueva funcion"; 

    getch();         

         

    } 

         

     

    return 0; 

} 

  

float suma(float a,float b,float c) 

{ 

    cout<< "ingrese primer valor"<< endl; 

    cin >> a;  

    cout<< "ingrese segundo valor"<< endl; 

    cin >> b; 

    cout<< "ingrese tercer valor"<<endl; 

    cin >> c; 

    float resultado; 

    resultado = a+b+c; 

     

    cout<<"la suma de los numeros ingresados es  "<< resultado; 

} 

  

float promedio(float a,float b,float c) 

{ 

        cout<< "ingrese primer valor"<< endl; 

    cin >> a;  

    cout<< "ingrese segundo valor"<< endl; 

    cin >> b; 

    cout<< "ingrese tercer valor"<<endl; 

    cin >> c; 

    float resultado; 

    resultado = (a+b+c)/2; 

    cout<<"el promedio de los numeros ingresados es  "<< resultado; 

} 

  

float producto(float a,float b,float c) 

{ 

        cout<< "ingrese primer valor"<< endl; 

    cin >> a;  

    cout<< "ingrese segundo valor"<< endl; 

    cin >> b; 

    cout<< "ingrese tercer valor"<<endl; 

    cin >> c; 

    float resultado; 

    resultado = a*b*c; 

    cout<<" el producto de los numeros ingresados es  "<< resultado; 

} 

  

float mayor(float a,float b,float c) 

{ 

        cout<< "ingrese primer valor"<< endl; 

    cin >> a;  

    cout<< "ingrese segundo valor"<< endl; 

    cin >> b; 

    cout<< "ingrese tercer valor"<<endl; 

    cin >> c; 

    if (a > b && a > c && b>c) 

    { 

        cout<< "el numero mayor es" << a << endl;
        cout<< "el numero menor es" << c; 

    } 

        else if (b > a && b > c && a > c) 

        { 

            cout<< "el numero mayor es" << b<<endl; 
			cout<< "el numero menor es" << c;   
        } 

        else if(c > a && c > b && b > a)
		{
			 cout<< "el numero mayor es" << c <<endl;     
			cout<< "el numero menor es" << a;
		 } 

              

} 
