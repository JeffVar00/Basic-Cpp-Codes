#include <iostream>
using namespace std;

int main() {
	int mat[4][4];
	
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
	
	int sumaD=0;
	int sumaDS=0;
	
	//suma elementos diagonal principal
	for(int i=0;i<4;i++){
		sumaD+=mat[i][i];
	}
	cout<<"La suma de la diagonal principal es: "<<sumaD<<endl;
	
	//suma elementos diagonal secundaria
	int y=0;
	for(int i=3;i>=0;i--){
		sumaDS+=mat[i][y];
		y++;
	}
	cout<<"La suma de la diagonal secundaria es: "<<sumaDS<<endl;

	
	
	return 0;
}

