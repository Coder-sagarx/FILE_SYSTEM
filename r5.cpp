#include<iostream>
using namespace std;
void mean(string arr[],int n){
//base case
if(n==0){
	return ;
}
int digit=n%10;
n=n/10;
cout<<arr[digit]<<" ";
mean(arr,n);
//cout<<arr[digit]<<" ";
}

int main(){
int n;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<" enter nu  ->";
cin>>n;
mean(arr,n);
	return 0;
}


