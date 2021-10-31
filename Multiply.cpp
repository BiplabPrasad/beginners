#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int multiplynumbers (int m,int n){
	if(n>m)
	return multiplynumbers(n,m);
	if(m==0||n==0)
	return 0;
	return m+multiplynumbers(m,n-1);
}
int main(){
int m,n;
cin>>m>>n;
cout<<multiplynumbers(m,n)<<endl;
	return 0;
}
