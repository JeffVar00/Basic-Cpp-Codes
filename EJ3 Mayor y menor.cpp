#include <iostream>
using namespace std;

int main() {
	int mayor=-1000000;
	int menor=100000000;
	int Mat[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Digite un numero"<<endl;
			cin>>Mat[i][j];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<Mat[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(Mat[i][j]>mayor){
				mayor=Mat[i][j];
			}
			if(Mat[i][j]<menor) {
				menor=Mat[i][j];
			}
		}
	}
	
	cout<<"El numero menor es= "<<menor<<endl;
	cout<<"El numero mayor es= "<<mayor<<endl;
	
	return 0;
}

