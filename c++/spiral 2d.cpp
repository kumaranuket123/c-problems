#include<iostream>
using namespace std;
int main(){
	cout<<"print the 2d array in spiral form";
	int m,n;
	cout<<endl<<"enter the size of array in m*n form";
	cin>>m>>n;
	
	int a[m][n];
	for(int i=0;i<m;i++){
		cout<<"enter the value in "<<i+1<<"row :";
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	
	
}
