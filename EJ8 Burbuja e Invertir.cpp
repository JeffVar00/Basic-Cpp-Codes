#include <iostream>
using namespace std;

int main() {
	
	
	int Mat[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero"<<endl;
			cin>>Mat[i][j];
		}
	}
	
	//Burbuja
	int burbuja=0;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			for(int x=0; x<4;x++){
				for(int y=0; y<4; y++){
					if(Mat[i][j]>Mat[x][y]){
						burbuja=Mat[i][j];
						Mat[i][j]=Mat[x][y];
						Mat[x][y]=burbuja;
					}}}}}
	
	
	
	//Invertir
	int aux=0;
	int x=4;
	int y=3;
	for(int i=0;i<2;i++){
		y=3;
		x--;
		for(int j=0;j<4;j++){
			aux=Mat[i][j];
			Mat[i][j]=Mat[x][y];
			Mat[x][y]=aux;
			y--;
		}
	}
	return 0;
}

