#include <iostream>
using namespace std;

int main() {
	int Mat[4][4];
	
	//llenar la matriz con datos del usuario
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero"<<endl;
			cin>>Mat[i][j];
		}
	}
	
	cout<<"Digite un numero para encontrar"<<endl;
	int num;
	bool s=false;
	cin>>num;
	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++){
			if(num==Mat[i][j]) {
				s=true;
			}
		}
	}
	
	if(s==true){
		cout<<"El "<<num<<" Pertenece a la matriz"<<endl;
	}else{
		cout<<"El "<<num<<" No pertenece a la matriz"<<endl;
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<Mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	return 0;
}

