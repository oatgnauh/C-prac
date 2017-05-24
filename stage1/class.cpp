#include<iostream>
using namespace std;
//定义一个类
class Car{		
public :
		void move():		//声明成员函数
		void stop(){		//成员函数可以在声明部分实现，也可以在实现部分实现
			cout<<"car stoped"<<endl;
		}

		void setupspeed(short s);
		void setweight(short w);
private:
		short speed;		//声明成员数据
		short weight;
};

//类的实现部分

