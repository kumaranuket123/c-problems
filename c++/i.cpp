#include<iostream>
using namespace std;
int main(){
	cout<<"DARLING I WANTS TO SAY YOU SOMTHING"<<endl<<"type 5 and press enter :";
	int i,j,n;
	cin>>n;
	//for printing I
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==(n+1)/2)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
	
	//for printing heart
	for(int i=n/2;i<=n;i+=2){
		for(int k=0;k<n;k++)
			cout<<" ";
		for(j=1;j<=n-i;j+=2)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<"*";
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
		}
	for(i=n;i>=1;i--){
		for(int k=0;k<n;k++)
			cout<<" ";
			cout<<" ";
		for(j=i;j<n;j++)
			cout<<" ";
		for(j=1;j<=(i*2)-1;j++)
			cout<<"*";
			
		cout<<endl;
	}
	
	//for printing U
		int k=1;
		for(i=1;i<=(n+1)/2;i++){
			cout<<"             ";
			for(j=1;j<=n;j++){
				if(j==1||j==n)
					cout<<"* ";
				else
					cout<<"  ";
		}
		cout<<endl;
		}		
		k++;
		for(i;i<=n;i++){
			cout<<"             ";
			for(j=1;j<=n;j++){
				if(j==k||j==(n-k)+1)
					cout<<"* ";
				else
					cout<<"  ";
		}
		cout<<endl;
		k++;
	}
}
