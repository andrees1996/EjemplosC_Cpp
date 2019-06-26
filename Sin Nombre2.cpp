#include <stdio.h> 

double MaximoValor(double[3][3]);

int main(void) 

{ 

    double matriz[3][3] = {2.9,5.6,7.98,3.7,1.5,4.2,8.2,9.8,6.45}; 
	
    printf("maximo= %.2f \n", MaximoValor(matriz)); 

} 

double MaximoValor(double a[3][3]){
	float  mayor;
	int i,j;
	mayor = a[1][1];
	for (i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(a[i][j]>mayor)
			{
				mayor= a[i][j];	
			}
		
		}
	}
return mayor;
}
