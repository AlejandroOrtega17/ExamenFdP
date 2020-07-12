#include <iostream>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
}Infodelarticulo[100];

//Esta función se encarga de leer los datos de nombre del producto, precio y cantidad
void lectura();
//Esta función se encarga de multiplicar el precio del producto por unidad  por la cantidad y dar un total de ese producto
void calculador();
//Esta función despiega en pantalla todos los datos anteriores para mostrarlo como factura 
void mostrador();
//Esta función calcula el total de toda la compra con los precios totales
void totaldelrecibo();

//Declare la variable "tamdarreglo" como global, debido a que la ocupo en todas las funciones y reescribirlas en cada uno alargaria el codigo
int tamdarreglo;
float totalapagar = 0;
int main()
{
cout << "Si los nombres del producto tiene espacios ocupar _" << endl;
cout << endl;
cout << "Digite la cantidad de tipos de producto a ingresar" << endl;
cin >> tamdarreglo;

cout << endl;


 lectura();
 cout << "______________________________________________" << endl;
  calculador();
  cout << "______________________________________________" << endl;
    mostrador();
    cout << "______________________________________________" << endl;
    totaldelrecibo();
    cout << "______________________________________________" << endl;
    cout << "______________________________________________" << endl;

    cout << "El total a pagar: " << endl;
      cout << totalapagar   << endl;
}

        void lectura(){


            for(int i=0; i< tamdarreglo; i++)
            {
            cout << "Ingrese el nombre del articulo" << endl;
            cin >>  Infodelarticulo[i].nombreArticul;
            cout << "Ingrese el precio unitario del articulo" << endl;
            cin >> Infodelarticulo[i].costoPorArticulo;
            cout << "Ingrese la cantidad que lleva de este articulo" << endl;
            cin >>  Infodelarticulo[i].cantidad;
            cout << endl;
            }
        }

                    void calculador()
                    {

                    for(int i=0; i<tamdarreglo; i++)
                        {
                            Infodelarticulo[i].precio =  Infodelarticulo[i].costoPorArticulo * Infodelarticulo[i].cantidad;
                        }   

                    }

                                        void mostrador()
                                        {
                                        for(int i=0; i < tamdarreglo; i++)
                                            {
                                                cout << "El nombre del articulo: " << Infodelarticulo[i].nombreArticul << endl;
                                                cout << "El precio por Unidad: " << Infodelarticulo[i].costoPorArticulo << endl;
                                                cout << "La cantidad es: " << Infodelarticulo[i].cantidad << endl;
                                                cout << "El precio total:" << Infodelarticulo[i].precio << endl;
                                                cout << endl;
                                            }      
                                        }

                                                        void totaldelrecibo()
                                                        {
                                                            for(int i=0; i < tamdarreglo; i++)
                                                            {
                                                            totalapagar += Infodelarticulo[i].precio;
                                                            
                                                            }

                                                        }