#include<iostream>
using namespace std;
int main(){
	cout<<"enter your fav number";
	int i,j,n,k=1;
	cin>>n;
		for(i=1;i<=(n+1)/2;i++){
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
