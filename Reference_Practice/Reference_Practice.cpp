#include <iostream>

using namespace std;

void division_algorithm(int divisor, int dividend, int &quotient, int &remainder);

int main(){
	int divisor, dividend, quotient, remainder;
	cout<<"Enter dividend:";
	cin>>dividend;
	cout<<"Enter divisor:";
	cin>>divisor;
    division_algorithm(divisor,dividend,quotient,remainder);
    cout<<"Division algo:"<<divisor<<"*"<<quotient<<"+"<<remainder<<"="<<dividend<<endl;
    return 0;
}

void division_algorithm(int divisor, int dividend, int &quotient, int &remainder){
	quotient=dividend/divisor;
	remainder=dividend%divisor;
}