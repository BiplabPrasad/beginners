#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i;
	cin>>n;
	bool div=true;
	for(i=2;i<n;i++){
		if(n%i==0)
		div=false;
		}	
		if(div==true)
		cout<<"PRIME";
		else 
		cout<<"NOT PRIME";
		return 0;
}
