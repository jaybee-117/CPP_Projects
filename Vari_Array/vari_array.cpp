#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,q;

        scanf("%d %d",&n,&q);
	int* x[n];
	
	int i,j,s;

//Make the array
	for (i=0;i<n;i++){
	
		scanf("%d", &s);
	
		x[i] =(int*)  malloc(sizeof(int) * s) ;
	
		for (j=0;j<s;j++){
	
			scanf("%d", &x[i][j]);
		}
	}

//Read the queries
	int a,b;	
	for (i=0;i<q;i++){
		scanf("%d %d", &a,&b);
		printf("%d \n", x[a][b]);
	}
	for (i=0;i<n;i++){
		free(x[i]);
	}
	return 0;	
}
