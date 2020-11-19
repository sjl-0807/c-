#include<iostream>
using namespace std;
struct 
{
    int yrar,month,day,hours,minutes,seconds;
}Time;
int main(){
	cout<<"请输入年月日时分秒"<<endl;
    cin>>Time.yrar>>Time.month>>Time.day>>Time.hours>>Time.minutes>>Time.seconds;
    cout<<Time.yrar<<"年"<<Time.month<<"月"<<Time.day<<"日"<<Time.hours<<"时"<<Time.minutes<<"分"<<Time.seconds<<"秒"<<endl;
    system("pause");
    return 0;
}
