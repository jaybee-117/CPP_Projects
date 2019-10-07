#include <iostream>

using namespace std;

int Fibonacci(int);

int main(){
	int i, n, series[1000]; //need to do dynamic memory allocation later.
    cout<<"Enter the number of terms(<1000) for your Fibonacci Series:";
    cin>>n;
    for(i=0;i<n;i++){
    	series[i]=Fibonacci(i);
    }
    cout<<"Your series is:";
    for(i=0;i<n;i++){
    	cout<<" "<<series[i];
    }
    cout<<endl;
    return 0;
}

int Fibonacci(int n){
    if (n==0 || n==1){
    	return 1;
    }
    else{
		return Fibonacci(n-1)+ Fibonacci(n-2);
	}
}