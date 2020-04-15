#include<iostream>
#include<string.h>
using namespace std;
int main(){
	cout<<"a program to print the union"<<endl;
	int n1,n2;
	
	cout<<"enter the size of 1st array:";
	cin>>n1;
	char a[n1];
	cout<<"enter the value of 1st array ";
	for(int i=0;i<n1;i++)
		cin>>a[i];
		
	cout<<"enter the size of 2nd array:";
	cin>>n2;
	char b[n2],c[n1+n2];
	cout<<"enter the value of 2nd array ";
	for(int i=0;i<n2;i++)
		cin>>b[i];
		
	cout<<"your 1st array is: ";
	for(int i=0;i<n1;i++)
		cout<<a[i]<<", ";
	cout<<endl<<"your 2nd array is: ";
	for(int i=0;i<n2;i++)
		cout<<b[i]<<", ";

	strcat(c, b);
	for(int j=0;j<strlen(c);j++){
		for(int i=j+1;i<strlen(c);i++){
			if(a[0]==a[i]){
				for(int k=i;k<strlen(c);k++)
					a[k]=a[k+1];
			}
		}
	}
	
	cout<<endl<<"union of both array is : ";
	for(int i=0;i<strlen(c);i++)
		cout<<c[i]<<",";
}
