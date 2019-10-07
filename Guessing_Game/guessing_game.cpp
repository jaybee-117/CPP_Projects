#include <iostream>
#include<ctime>

using namespace std;

int main(){
	int a,b,c;
    cout<<"Welcome to the guessing game!!\n";
    srand(time(0));
    b=(rand()%100)+1;
    cout<<"Random number:"<<b<<endl;
	for(;1;){
		cout<<"Enter your guess:";
	    cin>>a; 
		if(a<b){
			c=b-a;
			cout<<"-_- wrong"<<endl;
			cout<<"Your guess is LOW\n";
			cout<<"You're within a range of:"<<((c/10)+1)*10<<endl;
			continue;         
		}
		if(a>b){
			c=a-b;
			cout<<"-_- wrong"<<endl;
			cout<<"Your guess is HIGH\n";
			cout<<"You're within a range of:"<<((c/10)+1)*10<<endl;
			continue;
		}
		if(a==b){
			break;
		}
	}
	cout<<":) Yay! Your guess is correct!!!!!"<<endl;
    return 0;
}