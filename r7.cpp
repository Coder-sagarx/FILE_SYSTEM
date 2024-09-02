#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
	//base case
	if(key==arr[0]){
		return true;
	}
	if(arr[0]==arr[n]){
		return false;
	}
	//recursive call
	search(arr+1,n-1,key);
	
	
}
int main(){
int arr[7]={34,4,5,9,78,43,8};

bool ok=search(arr,7,6);
if(ok){
	cout<<"true";
}
else{
	cout<<"not true";
}
	return 0;
}


