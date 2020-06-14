#include <iostream>
using namespace std;
/* Declaramos las variables a usar*/
float Sala(float a,float b, float& Ht, float& He, float& real, float& isr, float& social, float& afp, float& total)
{

/* A las horas las multiplicamos por el debido pago*/
    Ht= a * 1.75;
    He= b * 2.50;
//El total sin descuento es la suma del pago de horas normales y horas extra/    
    total = Ht + He;

 //   cout << "El salario por horas normales es:" << Ht << endl;
 //   cout << "El salario por horas extra es:" << He << endl;
 //   cout << "El salario total :  " << total << endl;

//Para sacar el salario con descuentos debemos de multiplicar primero el total por cada uno de los descuentos/
social = total * 0.04;
afp = total * 0.0625;
//El descuento de impuesto sobre la renta solo se aplica a salarios mayores a 500/
if (total >= 500){
    isr = total * 0.10;
}
else{
    isr = 0;
}
//El salario real sera el salario total menos cada uno de los descuentos sacados anteriormente/
real = total - social - afp - isr; 

//cout << "Descuento de Seguro social: " << social << endl;
//cout << "Descuento de AFP: " << afp <<endl;
//cout << "Descuento de Impuesto sobre la renta: " << isr << endl;
//cout << "El salario real con descuentos es: " << real << endl;

    return real, total, Ht, He, isr, social, afp;
}

int main()
{
    float a,b, Ht = 0, He = 0, real = 0, isr = 0, social = 0, afp = 0, total = 0;
    int op;

    // Iniciamos un bucle para que se puedan sacar la cantidad de trabajadores sin restricciones de cantidad.
    // También el bucle ayuda a crear una salida del programa cuando ya no se quiera agregar mas empleadas.
    while (op != 2){

  cout << "1-Ingresa a un trabajor" << endl;
  cout << "2-Salir" << endl;
  cin >> op;
  cout << endl;
        switch(op){

            case 1:
    cout << "Ingrese horas trabajadas" << endl;
    cin >> a;
    cout << "Ingrese horas extra trabajadas" << endl;
    cin >> b;
    Sala(a,b, Ht, He, real, isr, social, afp, total);

       cout << "El salario por horas normales es:" << Ht << endl;
       cout << "El salario por horas extra es:" << He << endl;
       cout << "El salario total :  " << total << endl;

       cout << "Descuento de Seguro social: " << social << endl;
       cout << "Descuento de AFP: " << afp <<endl;
       cout << "Descuento de Impuesto sobre la renta: " << isr << endl;
       cout << "El salario real con descuentos es: " << real << endl;
       cout << endl;
       cout << endl;
       break;

       default:
       if (op < 1 || op > 2){
           cout << "El numero que dijito no esta entre las opciones" << endl;
            cout << "Por favor inserte uno de los valores" << endl;

       }
    }

    }
 
}