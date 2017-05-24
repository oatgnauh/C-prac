#include<iostream>
using namespace std;
class Car{
public :
		void move():
		void stop(){
			cout<<"car stoped"<<endl;
		}

		void setupspeed(short s);
		void setweight(short w);
private:
		short speed;
		short weight;
};
