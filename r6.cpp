#include<iostream>
using namespace std;
//check the array is sorted or not
bool sort(int arr[],int size){
	//base case
	if(size==1||size==0){
	return true;
	}
	//condition
	if(arr[0]>arr[1]){
		return false;
	}
	else{
	//recursive call
	sort(arr+1,size-1);
			
	}
}
int main(){
int arr[7]={1,2,3,4,5,7,8};
int ok=arr.size();
bool ok=sort(arr,size);
if(ok){
	cout<<"true";
}
else{
	cout<<"not true";
}
	return 0;
}


