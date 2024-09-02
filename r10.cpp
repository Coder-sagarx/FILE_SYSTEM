#include<iostream>
using namespace std;
bool palindrome(int arr[],int s,int e){
	//base casse
	if(s>e){
		return true;
	}
	if(arr[s]!=arr[e]){
		return false;
	}
	s++;
	e--;
	palindrome(arr,s,e);
	
}
int main(){
int arr[6]={1,2,3,2,3,1};
int n=6;

bool ok=palindrome(arr,0,n-1);
if(ok){
	cout<<"true";
}
else{
	cout<<"not true";
}

	return 0;
}


