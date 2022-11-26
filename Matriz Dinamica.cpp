#include <iostream>
using namespace std;

int main() 
{
	int filas, columnas; 
	cout<<"Digite el numero de filas";
	cin >> filas;
	cout<<"Digite el numero de columnas";
	cin >> columnas;
	// creamos la matriz !
	char **M = new char *[filas];
	for (int i = 0; i != filas; i++){
		M[i] = new char [columnas]; 
	}
	// Asignacion, solo un ejemplo
	for (int i = 0; i != filas; i++)
		for (int j = 0; j != columnas; j++)
			M[i][j] = '*';
			
			//mostrar matriz 
			for (int i = 0; i != filas; i++){
				for (int j = 0; j != columnas; j++)
					cout << " " << M[i][j]; 
					
					cout << endl; 
			}
			
			for (int i = 0; i != filas; i++){
				delete[] M[i];
			}
			delete[] M;
			
			return 0; 
}
