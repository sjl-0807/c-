#include<iostream>
using namespace std;
int arr[5]={0,1,2,3,4};
int sum;
int main(){
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum<<endl;
    int sum;
    for(int m=0;m<5;m++){
        if(arr[m]%2!=0){
            sum=sum+arr[m];
        }
    }
    cout<<"jishu:"<<sum<<endl;
    system("pause");
}
