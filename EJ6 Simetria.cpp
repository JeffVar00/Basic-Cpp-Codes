#include <iostream>
using namespace std;
//matriz simetica
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
	
	
	bool simetria=true;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(mat[i][j]!=mat[j][i]){
				simetria=false;
			}
		}
	}
	if(simetria==true){
		cout<<"La matriz es simetrica"<<endl;
	}else{
		cout<<"No es simatrica"<<endl;
	}
	
	return 0;
}

