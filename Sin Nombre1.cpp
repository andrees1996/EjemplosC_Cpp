#include <iostream>
#include<ctype.h>
#include<string.h>

using namespace std;

int main()
{
	
	char letra;

	
	for( ;letra !='A';)
	{
		system("cls");
	cout<<"ingrese la letra A "<< endl;	
	cin >> letra;	
	if(letra =='a')
		{
			letra= toupper(letra);
		}
	}

	
}
