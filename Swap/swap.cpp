#include <iostream>

using namespace std;

int swap(int &a,int &b);

int main(){
	int p,q;
	cout<<"Enter p:";
	cin>>p;
	cout<<"Enter q:";
	cin>>q;
	swap(p,q);
	cout<<"p :"<<p<<endl;
	cout<<"q :"<<q<<endl;
	return 0;
}

int swap(int &a, int &b){
	int t;
	t=a;
	a=b;
	b=t;
}