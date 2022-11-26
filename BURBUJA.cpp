#include <iostream>
using namespace std;

int main() {
	int vec[5]={2,1,3,7,6};
	int burbuja; //es una variable auxiliar que ira guardando la J para ordenarlo
	for(int i=0;i<4;i++) {
		for(int j=i+1;j<5;j++) {
			if(vec[j]<vec[i]) {
				burbuja=vec[j];
				vec[j]=vec[i];
				vec[i]=burbuja;
			}
		}
	}
	for(int i=0;i<5;i++) {
		cout<<vec[i]<<" ";
	}
	
	return 0;
}

