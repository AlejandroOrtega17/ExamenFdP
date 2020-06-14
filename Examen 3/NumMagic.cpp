#include <iostream>
#include <conio.h>
using namespace std;
//Introducimos las variables a usar
int ARK(int& a, int& intentos, int& resultado){
//Guardamos un numero preestablecido que el usuario tendra que adivinar
    int pensado = 76;

        if (a > pensado)
        {
           intentos = intentos-1;
            resultado = 3;
        }else if(a < pensado){
            intentos = intentos-1;
            resultado = 2;
        }else if(a = pensado){
             intentos = 0;
            resultado = 1;
        }
}

int main(){
    int a, intentos=5,resultado = 0, respuesta;
    while (intentos > 0)
    {
        cout << "Adivina que numero estoy pensando entre el 1 y el 100" << endl;
        cin >> a;  
        ARK(a, intentos ,resultado);

        if (resultado == 3)
        {
           cout << "Intenta con uno menor" << endl;
        }else if(resultado == 2){
            cout << "Intenta con uno mayor" << endl;
        }else if(resultado == 1){
             cout << "¡Lograste adivinar el numero oculto, Genial!" << endl;
        }
        //Se le pregunta al usuario si desea salir o continuar con sus intentos o salir del programa
        cout << "Te quedan disponibles: "<< intentos <<  "  intentos, aun quieres continuar?" << endl;
        cout << "1) Seguir" << endl;
        cout << "2) Salir" << endl;
        cin >> respuesta;

        switch (respuesta)
        {
        case 1:
            system("PAUSE");
        break;
        case 2:
            exit(1);
        break;   
        }
    }
}