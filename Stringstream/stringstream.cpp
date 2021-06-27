#include<bits/stdc++.h>

using namespace std;

vector<int> parseInts(string str) {
	stringstream s(str);
	string tmp;
	int i;
	vector <int> stream;
	for (i=0;s>>tmp;i++){
		if (tmp == ","){
			i = i--;
			continue;
		}
		stream[i] = stoi(tmp);
		cout << tmp << endl;
	}      

	return stream;
}

int main() {
	 string str;
	 cin >> str;
	 vector<int> integers = parseInts(str);
	 for(int i = 0; i < integers.size(); i++) {
		 cout << integers[i] << "\n";
	 }                                 
	 return 0;
 }
