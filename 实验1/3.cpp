#include<iostream>
using namespace std;
class circle {
public:
    double yuanS();
    double yuanC();
    double yuanqiuS();
    double yuanqiuV();
    double yuanzhuV();
private:
    double raidus = 1.5;
    double h = 1.5;
    double pai = 3.1415926;
};
double circle::yuanS() {
    return pai * raidus * raidus;
}
double circle::yuanC() {
    return 2 * pai * raidus;
}
double circle::yuanqiuS() {
    return 4 * pai * raidus * raidus;
}
double circle::yuanqiuV() {
    return (4 / 3) * pai * raidus * raidus * raidus;
}
double circle::yuanzhuV() {
    return pai * raidus * raidus * h;
}
int main() {
    circle C;
    cout << "The circle area is" << C.yuanS()<<"   " <<"The circle zhouchang is" << C.yuanC()<<endl;
    cout<<"Spherical surface area:"<<C.yuanqiuS()<<"  "<<"Sphere volume"<<C.yuanqiuV()<<endl;
    cout<<"Cylinder volume"<<C.yuanzhuV()<<endl;
    system("pause");
}
