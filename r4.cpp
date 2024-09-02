#include<iostream>
using namespace std;
int stairs(int n){
	//base case
	if(n<0)
		return 0;
	if(n==0)
		return 1;

	//recursive call
	int ans=stairs(n-1)+stairs(n-2);
	return ans;
}
int main(){
int n;
cout<<" enter nu ->";
cin>>n;
int ans=stairs(n);
cout<<" ans is _> "<<ans;

	return 0;
}


