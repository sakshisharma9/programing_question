#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,k,l,sum=5,space=1;
	cout<<"enter row and column";
	cin>>r>>c;
	for(i=1;i<=r;i++){
		if(i<=r/2){
		for(k=1;k<=r/2-i;k++){
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	    }
	    else{
	    	for(k=1;k<=space-1;k++){
			cout<<" ";
		}
		space++;
		for(l=1;l<=2*sum-1;l++){
			cout<<"*";
		}
		sum--;
		cout<<endl;
	}
	}
	return 0;
}
