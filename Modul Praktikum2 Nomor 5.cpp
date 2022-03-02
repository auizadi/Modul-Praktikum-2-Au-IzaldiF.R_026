#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int matA[2][2] = {4, 8, 2, 10};
	
	cout<<"Matriks A "<<endl;
	for(int x = 0; x < 2; x++){
		for(int y = 0; y < 2; y++){
			cout<<matA[x][y]<<"  ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Transpose dari Matriks A "<<endl;
		for(int x = 0; x < 2; x++ ){
			for(int y = 0; y < 2; y++){
				cout<<matA[y][x]<<"  ";
			}
			cout<<endl;
		}
	
}
