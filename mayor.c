/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	float num1;
	float num2;
	printf("ingrese un numero\n");
	scanf("%f",&num1);
	printf("ingrese un numero\n");
	scanf("%f",&num2);
	if (num1>num2) {
		printf("%fes mayor\n",num1);
	} else {
		printf("%fes mayor\n",num2);
	}
	return 0;
}

