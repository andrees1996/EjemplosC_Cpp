// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

using System;

namespace PSeInt {
	class producto_dos_numeros {

		static void Main(string[] args) {
			double num1;
			double num2;
			double resultado;
			Console.WriteLine("ingrese el primer numero");
			num1 = Double.Parse(Console.ReadLine());
			Console.WriteLine("ingrese el segundo numero");
			num2 = Double.Parse(Console.ReadLine());
			resultado = num1*num2;
			Console.WriteLine("el resultado es:"+resultado);
		}

	}

}

