#include <iostream>
#include "stdlib.h"
#include "string"
#include "sstream"

using namespace std;
//Ejemplo de como convertir de enteros a variables string
int main()
{
	string x;
	int i=49;
	std::stringstream my_stringstream;
	my_stringstream <<  i;
	x = my_stringstream.str();
	cout<<x<<endl;
	
	string cad = "1265";
	int y= atoi(cad.c_str());
	cout<<y<<endl;
	cin>> y;
	
	return 0;
}

