#include <iostream>

using namespace std;

int dsrm();
int you();

   float numeros[100][100],filas,columnas=5;
   float samf[100];
int main()
{

   dsrm();
   you();

        return 0;

}
int dsrm(){
	cout<<"Digite el numero de alumnos ";
     cin>> filas;

	

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite primero el nombre y luego las 5 notas del alumno ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
        cout << endl;

        cout<<"\nMostrando notas ingresadas \n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<"   ";
		}
		cout<<"\n";
	}

    cout << endl;
	
            cout<<"\nMostrando notas multiplicada por el 20%  \n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]*0.20<<"   ";
		}
		cout<<"\n";
	}

    cout << endl;
        
        for(int i=0;i<filas; i++){
      
            for(int j=0;j<columnas; j++)
            {
            samf[i] = samf[i] + 0.20*numeros[i][j];
            }
            cout << i+1<< ". La suma de la fila es: " << samf[i] <<endl;
			cout << endl;
        }

}
int you(){
	
        for(int i=0; i < filas; i++)
        {
            if(samf[i] <= 5.99){
                cout <<i+1 <<". El estudiante reprobó" << endl;
            }
            else if(samf[i] >= 6.00)
            {
                cout << i+1 <<". El estudiante aprobó"<< endl;
            }
        }

}
