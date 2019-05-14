#include<iostream>

using namespace std;
int main()

{
		int i=0;
		int acum = 0;
	for ( i=0 ; i<30  ; i++ )
	{
		if(i%5 ==0)
		{
			continue;
		}
		acum = acum + i;
	
	
	}
	cout<<acum<<endl;
	return 0;
}
