#include<iostream>
using namespace std;
int factorial(int n){
	//bas case
	if(n==0){
		return 1;
	}
	//recursive call
	return n*factorial(n-1);
}
int main(){
 	int n;
 	cout<<"enter nu";;
 	cin>>n;
 	int ans=factorial(n);
 	cout<< "ans is :"<<ans;
return 0;
}
