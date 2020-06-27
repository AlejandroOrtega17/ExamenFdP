#include <iostream>

using namespace std;

void promenade();
int M(float drag[],float);


float drag[25];
float prom;
float i;
int main(){


    cout << "ingrese la altura de cada estudiante una por una" << endl;

   promenade();
    M(drag,prom);
}

void promenade(){
    float suma=0;
    int a=0,b=0;

    for(int i=0;i<25;i++)
         {
        cout<<i+1<<". Ingrese la altura del estudiante: ";
        cin>>drag[i];
        }

                for(int i=0; i<25;i++)
                {
                    suma += drag[i];
                }
                cout << "La suma de los elementos es: " << suma << endl;
                cout << endl;

                prom = suma/25;
                cout << "El promedio de la altura de alumnos es: " << prom << endl;
}

int M(float drag[],float prom){
  int a = 0,b= 0;

     for(int i=0; i<25; i++)
                                {
                                    if(drag[i] <= prom)
                                    {
                                        a = a+1;
                                       
                                    }
                                    else if(drag[i] > prom){
                                       b = b+1;
                                     
                                        }
                                }
                                    
                                    cout << endl;
                                 cout << "Hay " <<a<<" alumnos con altura debajo de el promedio" << endl;
                                    cout << "Hay " <<b<<" alumnos con altura arriba de el promedio" << endl;

}