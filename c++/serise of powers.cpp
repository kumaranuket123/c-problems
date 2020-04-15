#include<iostream>
using namespace std;
int power2(int power);
int power3(int power);
int main(){
	cout<<"For print the given serise"<<endl;
	int i,j=0,n,k=0;
	cout<<"enter the no. of terms:";
	cin>>n;
	int a[n];
	
	for(i=0;i<=n;i++){
		if(i%2==0){
			a[i]=power2(k);
			k++;
		}
				
		else{
			a[i]=power3(j);
			j++;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<",";
	
}

int power2(int power){
	int exp=1;
	while(power!=0){
		exp=2*exp;
		power--;
	}
	return(exp);
}

int power3(int power){
	int exp=1;
	while(power!=0){
		exp=3*exp;
		power--;
	}
	return(exp);
}
