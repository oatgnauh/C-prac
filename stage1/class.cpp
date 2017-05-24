#include<iostream>
using namespace std;
//定义一个类
class Car{		
public :
		void move();		//声明成员函数
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
	cout<<"speed is "<<speed<<endl;
}

void Car::setweight(short w){
        weight =w;
	cout<<"the weight is"<<weight<<endl;
}
void Car::move(){
	cout<<"roll out!"<<endl;
}

int main(){
        Car car1, car2;	//由Car类创建了对象car1和car2
	Car *pc=&car2;
	car1.setspeed(10);
	car1.setweight(5000);
	car1.move();
	car2.setspeed(20);
	car2.setweight(1000);	//car1,car2都能调用类定义的成员函数、变量
	pc->move();
	car1.stop();
	pc->stop();
	return 0;
}
