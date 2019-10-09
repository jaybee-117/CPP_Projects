#include <iostream>

using namespace std;

int mult2(int mat1, int mat2);
int mult3(int mat1, int mat2);
int mult4(int mat1, int mat2);
int* make_matrix(int m, int n);
//void print_matrix(int m, int n, int matrix);
int input_dimention(int &m1, int &n1, int &m2, int &n2);

int main(){
	int m1,m2,n1,n2;
	cout<<"IMPORTANT: This program is to multiply at most 4 x 4 matrix i.e. all subsets are acceptable except any matrix containing elements more than 4 per row/column"<<endl;
	cout<<"Also note matrix multiplication is not commutative, this programme multiplies like so: matrix_1 X matrix_2. YOU HAVE BEEN WARNED";
	input_dimention(m1,n1,m2,n2);
	if(n1!=m2){
		cout<<"Order of the matrices are not compatiable for multiplication."<<endl;
        return -1;
	}
	int matrix_1[m1][n1];
	int matrix_2[m2][n2];
    *matrix_1=make_matrix(m1,n1);
    *matrix_2=make_matrix(m2,n2);
    //print_matrix(m1, n1, matrix_1);
    //print_matrix(m2,n2,matrix_2);
    return 0;
}

int input_dimention(int &m1, int &n1, int &m2, int &n2){
	int i;
	cout<<"Enter the dimention of matrix_1 (m x n):"<<endl;
	cout<<"m:";
	cin>>m1;
	cout<<"n:";
	cin>>n1;
	cout<<"Matrix dimention:"<<m1<<"x"<<n1<<endl;
	for(i=1;n1 > 4 || m1 > 4;i++){
		if(i==3){
            cout<<"F*** Y**"<<endl;
			return -1;
		}
		cout<<"(-_-) Try again"<<endl;
		cout<<"Enter the dimention of your matrix_1 (m x n):"<<endl;
		cout<<"m:";
		cin>>m1;
		cout<<"n:";
		cin>>n1;
		
	}
	cout<<"Enter the dimention of matrix_2 (m x n):"<<endl;
	cout<<"m:";
	cin>>m2;
	cout<<"n:";
	cin>>n2;
	cout<<"Matrix dimention:"<<m2<<"x"<<n2<<endl;
	for(i=1;n2 > 4 || m2 > 4;i++){
		if(i==3){
            cout<<"F*** Y**"<<endl	;
			return -1;
		}
		cout<<"(-_-) Try again"<<endl;
		cout<<"Enter the dimention of your matrix_2 (m x n):"<<endl;
		cout<<"m:";	
		cin>>m2;
		cout<<"n:";
		cin>>n2;
		
	}
}

int* make_matrix(int m, int n){
    int i,j, matrix [m][n];
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		cout<<"Enter element ["<<i+1<<","<<j+1<<"] :";
    		cin<<matrix [i] [j];
    	}
    }
    return matrix;
}

/*void print_matrix(int m, int n, int matrix){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<" "<<matrix [i] [j];
		}
		cout<<endl;
	}
}*/