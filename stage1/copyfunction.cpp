//
//  copyfuct.cpp
//  cppinaction
//
//  Created by Harry on 17/5/26.
//  Copyright © 2017年 Harry. All rights reserved.
//

#include <iostream>
using namespace std;
class Car{
public:
    Car(int s, char[]);
    Car(const Car&c);
    void move();
private:
    int speed;
    char*p;
};
Car::Car(int s,char n[]){
    speed=s;
    p=new char[20];
    strcpy(p,n);
    cout<<"in car class construct function"<<endl;
}
Car::Car(const Car&c){  //构建拷贝函数
    speed=c.speed;
    p=new char[20];
    strcpy(p,c.p);
    cout<<"this is a copy function"<<endl;
}

void Car::move(){
    cout<<p<<"moves in "<<speed<<endl;
}

class Plane{
public:
    Plane(int s, char []);
    Plane(const Plane&p);
    void move();
private:
    int speed;
    char name[20];
};
Plane::Plane(int s,char n[]){
    speed=s;
    strcpy(name,n);
    cout<<"in plane class construct function"<<endl;
}
Plane::Plane(const Plane& p1){
    speed=p1.speed;
    strcpy(name,p1.name);
    cout<<"this is a copy plane"<<endl;
}


void Plane::move(){
    cout<<name<<" moves in "<<speed<<endl;
}
int main(){
    Car car1(60,"car");
    Plane plane1(200,"plane");
    Car car2=car1;
    Plane plane2=plane1;
    car2.move();
    plane2.move();
    return 0;
}

















