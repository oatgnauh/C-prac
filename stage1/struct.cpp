#include<iostream>
using namespace std;
struct course{
	double math;
	double computer;
	double english;
	double physics;
};
struct student{
	char name[20];
	course cos;
};
void display(student &stu);
course Calmean(student *pstu,int num);
void main()
{
	student stu[]={
		{"zasan",90,88,76,85},
		{"lishi",   86,85,80,83},
		{"wangwu",  70,80,90,88},
		{"zhaoqi",  84,91,80,77}
	};
	course c = Calmean(stu,4);
	cout<<"����\t"<<"��ѧ\t"<<"�����\t"<<"Ӣ��\t"<<"����\t"<<endl;
	for(int i=0;i<4;i++)
		display(stu[i]);
	cout<<"--------------------------------------------------"<<endl;
	cout<<"ƽ����\t"<<c.math<<"\t"<<c.computer<<"\t"<<c.english<<"\t"<<c.physics<<endl;
}
void display(student &stu)
{
	cout<<stu.name<<"\t"<<stu.cos.math<<"\t"<<stu.cos.computer<<"\t"
		<<stu.cos.english<<"\t"<<stu.cos.physics<<endl;
}
course Calmean(student *pstu,int num)
{
	course c = {0,0,0,0};
	if(num<=0)
		return c;
	for (int i = 0; i<num; i++)
	{
		c.math += pstu[i].cos.math;
		c.computer += pstu[i].cos.computer;
		c.english += pstu[i].cos.english;
		c.physics +=pstu[i].cos.physics;
	}
	c.math /=num;
	c.computer /=num;
	c.english /=num;
	c.physics /=num;
	return c;
}
