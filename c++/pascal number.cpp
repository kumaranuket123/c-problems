#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number to print pascal triangle: ";
	int n,k;
	cin>>n;
	int a[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++)
			cout<<" ";
		
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				k=1;
				cout<<k<<" ";	
				a[i][j]=k;
			}
			else{
				k=a[i-1][j-1]+a[i-1][j];
				a[i][j]=k;
				cout<<k<<" ";
			}
		
		}
		cout<<endl;
	}
} 
