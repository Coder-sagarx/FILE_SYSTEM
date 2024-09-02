#include<iostream>
using namespace std;
int fibo(int n){
	//base case
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	//recursive call
	int ans=fibo(n-1)+fibo(n-2);
	return ans;
}
int main(){
int n;
cout<< "enter nu  ->";
cin>>n;
int ans=fibo(n);
cout<<"answer is ->"<<ans;
	return 0;
}


