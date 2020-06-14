#include <iostream>

using namespace std;
// Utilizaremos la variable que sera el año que el usuario ingrese 
int bis(int a){
// Verificaremos si el año es o no divisble entre 400 y si este es divisble entre 100 o si es o no divisible entre 4  
// con estos parametros se determinara si es o no bisiesto
if (a % 400 != 0 && (a % 100 == 0 || a % 4 != 0 ) )   
{
  cout << "El año no es bisiesto" << endl;
}
else {
    cout << "el año si es bisiesto" << endl;
}

return a;
}

int main()
{
    int darka;
    int a;
//Le pedimos al usuario que ingrese la variable 
cout << "Comprobador de años bisiestos" << endl;
cout <<"ingrese un año" << endl;
cin >> a;

darka = bis(a);

cout << darka;
    return 0;
}