#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n);
//void print_array(int arr[], int n); 

int main( ){
   unsigned int s,n,m; 
   //cout<<"Enter the Budget <s> , Number of Keyboard brands <n> and the number of USB brands <m> in the format:"<<endl<<"s n m"<<endl;
   cin >>s>>n>>m;
   /*cout<<"s:"<<s<<endl; //
   cout<<"n:"<<n<<endl;
   cout<<"m:"<<m<<endl;*/ //
   int i,j,keyboard[n],USB[m];
   //cout<<"Keyboard prices:"<<endl;
   for(i=0;i<n;i++){
 	  	cin>> keyboard[i];	
   }
   //cout<<"USB prices:"<<endl;
   for(j=0;j<m;j++){
 	  	cin>> USB[j];	
   }
   /*cout<<"Keyboard prices (check):"<<endl; //
   for(i=0;i<n;i++){
 	  	cout<< keyboard[i]<<" ";	
   }
   cout<<endl;
   cout<<"USB prices(check):"<<endl;
   for(j=0;j<m;j++){
 	  cout<< USB[j]<<" ";	
   }
   cout<<endl;*///
   bubble_sort(keyboard, n);
   bubble_sort(USB, m);
   /*cout<<"Keyboard prices(sort check):"<<endl; //
   print_array(keyboard, n);
   cout<<"USB prices(sort check):"<<endl;
   print_array(USB, m); *///
   int sum_i=0, sum_f=0;
   if(keyboard[0]>=USB[0]){
   	for(i=0;i<n;i++){
 	  	for(j=0;j<m;j++){
   			sum_i=keyboard[i]+USB[j];      
   			if(sum_i<=s){
   				sum_f=sum_i;
   				break;
   			}	
   		}
   	    if(sum_i==sum_f){
   			break;
   	    }	
   	}
   }
   if(keyboard[0]<USB[0]){
   	for(i=0;i<n;i++){
 	  	for(j=0;j<m;j++){
   			sum_i=USB[i]+keyboard[j];       
   			if(sum_i<=s){
   				sum_f=sum_i;
   				break;
   			}	
   		}
   	    if(sum_i==sum_f){
   			break;
   	    }	
   	}
   }
   if (sum_i!=sum_f){
   		cout<<"-1"<<endl;
   		return -1;
   	}
   //cout<<"The amount of money you can spend:"<<sum_f<<endl;
   cout<<sum_f<<endl;
   return 0;
}

void bubble_sort(int arr[], int n){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j]<arr[j+1]){
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}

/*void print_array(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}*/