#include <iostream>
using namespace std;
int Max(int a,int b);
double Max(double a, double b);
int Max(int a, int b, int c);
double Max(double a, double b, double c);

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
int Max(int a,int b)        
{
    return (a>=b)?a:b;
}
double Max(double a, double b)     
{
    return (a>=b)?a:b;
}
int Max(int a,int b,int c)       
{
    if(b>a){
		a=b;
	}
	if(c>a){
		a=c;
	}
	return a;
}
double Max(double a, double b, double c)      
{
    if(b>a){
		a=b;
	}
	if(c>a){
		a=c;
	}
	return a;
}
