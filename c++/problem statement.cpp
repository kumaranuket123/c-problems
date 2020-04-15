#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[50],b[50],c[50];
	cout<<"please enter 3 english words :";
	cin>>a>>b>>c;
	cout<<"your word is:"<<a<<" "<<b<<" "<<c;
	
	//for 1st word
	for(int i=0;i<strlen(a);i++){
		while(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||
			a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
			a[i]='%';
		}
	}
	cout<<endl<<"YOUR 1st word is "<<a;
	
	//for 2nd word
	for(int i=0;i<strlen(b);i++){
		if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||
			b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'){
			}
		else
			b[i]=35;
		}
	cout<<endl<<"YOUR 2nd word is "<<b;
	
	//for 3rd word
	cout<<endl<<"YOUR 3rd word is "<<strupr(c);
	//for concatenation of 3 words
	strcat(a,b);
	strcat(a,c);
	cout<<endl<<"YOUR concatenated word is "<<a;
		
}
