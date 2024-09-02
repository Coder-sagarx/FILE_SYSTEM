#include<iostream>
using namespace std;
void reverse(string& name,int s,int e){
	 
	 //base case
	 if(s>=e)
	 return ;
 	
	swap(name[s],name[e]);
	s++;
	e--;
	cout<<name<<endl;
	reverse(name,s,e);
	}
int main(){

string name="sagar sing bisht";
int n=name.size();
cout<<" the original text  ->"<<name<<"  size is ->"<<n<<endl;
reverse(name,0,n-1);
cout<<" the reverse text  ->"<<name;
	return 0;
}


