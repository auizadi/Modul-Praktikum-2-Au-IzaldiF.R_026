#include<iostream>
using namespace std;

int main(){
	int matA[2][2] = {4, 8, 2, 10};
	int matB[2][2] = {-5, 4, 8, -12};
	cout<<"Matriks A"<<endl;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				cout<<matA[i][j]<<"  ";
			}
			cout<<endl;
		}
	cout<<endl;
	
	cout<<"Matriks B"<<endl;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				cout<<matB[i][j]<<"  ";
			}
			cout<<endl;
		}
	cout<<endl;
	
	cout<<"Hasil Pengurangan Matriks A dan B "<<endl;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				cout<<matA[i][j]-matB[i][j]<<"  ";
			}
			cout<<endl;
		}
		cout<<endl;
	
	
}
