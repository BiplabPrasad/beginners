#include <iostream>
using namespace std;
int main(){
	int n,i,fac=1;
	cin>>n;
	for(i=1;i<=n;i++)
{
	fac=fac*i;
}
if(n==0)
cout<<"0";
else
	cout<<fac<<endl;
}
