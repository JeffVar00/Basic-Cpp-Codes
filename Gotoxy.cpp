#include <iostream>
#include "windows.h"

//Ejemplo de como acomodar por coordenadas la información en la consola en C++
using namespace std;
void gotoxy(int x, int y) {
	COORD coord;// crea un objeto tipo coordenadas
	coord.X = x;//asigna el valor de la X
	coord.Y = y;//asigna el valor de X
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
	//GetStdHandle(STD_OUTPUT_HANDLE)metodo de la windows que me permite ubicar a la consola en un lugar y coord es el objeto con los valores
}

int main()
{
	gotoxy(15,6);
	cout<<"Hola!!";
	return 0;
	
}
