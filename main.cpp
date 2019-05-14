#include <iostream>
#include<conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int i=0;
		int acum = 0;
		cout<< "programa que imprima los 30 primeros numeros"
	for ( i=0 ; i<=10  ; i++ )
	{
		if(i%15 ==0)
		{
			break;
		}
		acum = acum + i;
	
	
	}
	cout<<acum<<endl;
	getch();
	return 0;
}
