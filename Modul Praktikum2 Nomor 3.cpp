#include<iostream>
using 	namespace std;

int main(){
	
	int matA[2][2] = {4, 8, 2, 10}, matB[2][2] = {-5, 4, 8, -12};
	
	cout<<"Matriks A"<<endl;
		for(int a = 0; a < 2; a++){
			for(int b = 0; b < 2; b++){
				cout<<matA[a][b]<<"  ";
			}
			cout<<endl;
		}
	cout<<endl;
	
		cout<<"Matriks B"<<endl;
		for(int a = 0; a < 2; a++){
			for(int b = 0; b < 2; b++){
				cout<<matB[a][b]<<"  ";
			}
			cout<<endl;
		}
	cout<<endl;
	
	cout<<"Hasil perkalian Matriks A dan B"<<endl;
		
	
	
}
