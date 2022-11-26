#include <iostream>
using namespace std;

int main() {
	int Mat[4][4];
	//llenar la matriz con 0
	
	/*for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			Mat[i][j]=0;
		}
	}*/
	
	//llenar la matriz con datos del usuario
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero"<<endl;
			cin>>Mat[i][j];
		}
	}
	
	//imprimir la matriz
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<Mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	//sumar y promedio valores
	float suma=0;
	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			suma+=Mat[i][j];
		}
	}
	cout<<"suma de matrices"<<endl;
	cout<<suma<<endl;
	cout<<"promedio de la matriz"<<endl;
	cout<<suma/16<<endl;
	
	
	//escalar (multiplicacion)
	int escalar;
	cout<<"Digite un numero para multiplicar"<<endl;
	cin>>escalar;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++) {
			Mat[i][j]*=escalar;
			cout<<Mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	return 0;
}

