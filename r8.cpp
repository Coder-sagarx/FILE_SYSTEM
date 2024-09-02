#include<iostream>
using namespace std;
bool search(int arr[],int s,int e,int key){
	//print function
	
 
	 int mid=s+(e-s)/2;
	 //base case
	 if(s>e)
	 return false;
	
	if(arr[mid]==key)
	return true;
	//recursive call
 	if(key>arr[mid]){
 	search(arr,mid,e,key);
	}
	if(key<arr[mid]){
 	search(arr,s,mid,key);
	}
}

int main(){
int arr[7]={5,6,7,8,9,56,561};
int n=7;
bool ok=search(arr,0,n,10);
if(ok){
	cout<<"true";
}
else{
	cout<<"not true";
}

	return 0;
}


