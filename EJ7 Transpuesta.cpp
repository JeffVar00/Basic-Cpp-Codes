#include <iostream>
using namespace std;

int main() {
	int mat[4][4];
	int aux;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero"<<endl;
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i=1;i<4;i++){
		for(int j=0;j<i;j++){
			aux=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]=aux;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	//triangulo inferior
	
	int suma=0;
	for (int i = 1; i<4 ;i++){
		for (int j = 0; j< i ;j++){
			suma+=Mat[i][j];
		}
	}
	
	return 0;
}

