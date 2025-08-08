#include<iostream>
using namespace std;
void ncr(int* c,int* r)
{
int temp,*a,*b;
temp=*c;
*c=*r;
*r=temp;
}
int main()
{int n;
cout<<"enter value of n";
cin>>n;
int k;
cout<<endl<<"enter value of k";
cin>>k;
cout<<n<<" "<<k<<endl;
ncr(&n,&k);
cout<<n<<" "<<k<<endl;
}