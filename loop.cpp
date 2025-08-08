#include<iosTream>
using namespace std;
int main()
{
	int j,k,i,n;
	cout<<"enter value of n";
	cin>>n;
	for(i=n;i>=1;i--)
	{for(j=i;j>=1;j--){
	cout<<char(j+96);}
	cout<<endl;
	}
	for(i=1;i<=n;i++)
	{for(j=1;j<=n-1;j++){
	 cout<<" ";
	for(k=1;k<=i;k++)
	cout<<"*";}
	cout<<endl;
	}
	
}