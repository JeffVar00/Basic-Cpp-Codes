#include <iostream>
using namespace std;

//matriz identidad
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

	bool identidad=true;
	
	for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
			if(i==j){ //nos ponemos sobre la diagonal
			if(mat[i][j]!=1){
				identidad=false;
			}
			}else if(mat[i][j]!=0){
				identidad=false;
			}
		}
	}
	if(identidad==true){
		cout<<"Es identidad"<<endl;
	}else{
		cout<<"No es identidad"<<endl;
	}
	
	return 0;
}

