#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,k,l,sum=5,space=1,to=0;
	cout<<"enter row and column";
	cin>>r>>c;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if((i+j==6)||(j-i==4)||(i-j==5)||(i+j==15))
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}