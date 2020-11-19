#include <iostream>
using namespace std;
template<class T1>
T1 Max(T1 a,T1 b);
template<class T2>
T2 Max(T2 a,T2 b,T2 c);
int main()
{
    int a,b,c;
	double m,n,p;
    cout<<"enter a,b and c"<<endl;
    cin>>a>>b>>c;
    cout<<"Max(a,b)="<<Max(a,b)<<endl; 
	cout<<"Max(a,b,c)="<<Max(a,b,c)<<endl;
    cout<<"enter m,n and p"<<endl;
	cin>>m>>n>>p;
	cout<<"Max(m,n)="<<Max(m,n)<<endl; 
	cout<<"Max(m,n,p)="<<Max(m,n,p)<<endl;
    system("pause");
    return 0;
}
template<class T1>
T1 Max(T1 a,T1 b)        
{
    return (a>=b)?a:b;
}
template<class T2>
T2 Max(T2 a,T2 b,T2 c)       
{
    if(b>a){
		a=b;
	}
	if(c>a){
		a=c;
	}
	return a;
}
