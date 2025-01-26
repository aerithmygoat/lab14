#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void showMatrix(const bool show [][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0 ; j < N; j++) {
            cout << show[i][j] << " " ;
        }
        cout << endl;
    }
}

void inputMatrix(double d [][N]){
    for(int i = 0; i < N ;i++){
        cout << "Row " << i + 1 << ": ";
            for(int j = 0 ; j < N ; j++){
                cin >> d[i][j];
            }
        
    }
}


void findLocalMax(const double cal [][N], bool show [][N]){
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            show[i][j] = false;
        }
    }
    for (int i = 1; i < N - 1; i++) {          
        for (int j = 1; j < N - 1; j++) {      
            if (cal[i][j] >= cal[i - 1][j] &&      
                cal[i][j] >= cal[i + 1][j] &&      
                cal[i][j] >= cal[i][j - 1] &&      
                cal[i][j] >= cal[i][j + 1]) {      
                show[i][j] = true;                
            }
        }
    }
    
}