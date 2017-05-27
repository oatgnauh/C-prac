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
//一般数据类型转为类 类型
int main(){
    Data data1;
    //data1=100;  把这句注释掉，输出0，不注释，输出100，这说明无论主函数中有无给构造函数传入参数，构造函数都会执行
    data1.print();
   // data2.print();
    return 0;
}
//------------------类类型转为一般类型------------------------
#incldue<iostream>
using namespace std;
class Data{
public:
    Data(int a, int b);
    operator double();
private:
    int da,db;
};
Data::Data(int a, int b){
    da=a;
    db=b;
}
Data::operator double(){
    return da*1.0/db;
}
int main(){
    Data d(5,4);
    double a=0.0;
    a = d+1.0;
    cout<<a<<endl;
    return 0;
}
