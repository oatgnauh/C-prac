#include<iostream>
using namespace std;
//定义一个类
class Car{		
public :
		void move():		//声明成员函数
		void stop(){		//成员函数可以在声明部分实现，也可以在实现部分实现
			cout<<"car stoped"<<endl;
		}

		void setspeed(short s);
		void setweight(short w);
private:
		short speed;		//声明成员数据
		short weight;
};

//类的实现部分

void Car::setspeed(short s){		//双冒号此处的用法：表明setspeed这个函数是Car的成员函数
        speed =s;
	cout<<"speed is fast"<<endl;
}

void Car::setweight(short w){
        weight =w;
	cout<<"I don't know the weight,,,hahaha"<<endl;
}
void Car::move(){
	cout<<"roll out!"<<endl;
}

int main(){
        



}
