#include<iostream>
using namespace std;
int partion(int arr[],int s,int e){
	
	int pivot=arr[s];
	int count=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			count++;
		}
	}
	
	int pivotindex=count+s;
	swap(arr[pivotindex],arr[s]);
		
	int i=s,j=e;
	while(i<pivotindex&&j>pivotindex){
		while(arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<pivotindex&&j>pivotindex){
			swap(arr[i++],arr[j--]);
		}
	}
	return pivotindex;
}
void sort(int arr[],int s,int e){
	//base case
	if(s>=e)
	return ;
	//partion
	int p=partion(arr,s,e);
	//left part sort
	sort(arr,s,p-1);
	//right part sort
	sort(arr,p+1,e);
	
}
int main(){
int arr[10]={8,7,1,9,2,70,5,4,1,11};
int n=10;
sort(arr,0,n-1);
cout<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
	return 0;
}


