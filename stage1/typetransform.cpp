#include<iostream>
using namespace std;
class Data{
public:
    Data();
    Data(int a);
    void print();
private:
    int d;
};
Data::Data(){
    cout<<"无参数函数"<<endl;
    d=0;
}
Data::Data(int a){
    d=a;
    cout<<"有参数函数"<<endl;
}
void Data::print(){
    cout<<d<<endl;
}
int main(){
    Data data1;
    //data1=100;
    data1.print();
   // data2.print();
    return 0;
}
