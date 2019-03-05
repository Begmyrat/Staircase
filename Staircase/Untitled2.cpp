#include <iostream>

using namespace std;

int n;
char c[1000][1000];

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			c[i][j]=' ';
			
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			c[i][n-j-1]='#';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<c[i][j];
		cout<<endl;
	}
	
	
	return 0;
}
