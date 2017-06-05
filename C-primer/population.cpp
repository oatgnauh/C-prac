#include<iostream>
using namespace std;
/*
输入两个整数，相除得到一个百分数，重点在于如何保持精度
*/
int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    long globalpop,ameriacapop;
    float percentage;
    cout<<"enter the population of the world:";
    cin>>globalpop;
    cout<<"Enter the population of America:";
    cin>>ameriacapop;
    percentage=ameriacapop*1.0/globalpop;    //通过分子，不能是分母，乘上1.0来达到类型转换的目的
    cout<<"the percentage is "<<percentage*100<<"%"<<endl;
    return 0;
}
