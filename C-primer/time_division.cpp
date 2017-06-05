#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long second;
    cout<<"enter a number of seconds:";
    cin>>second;
    int day,hour,min,sec;
    int daylef,hourlef,minlef;
    day = second/86400;
    daylef = second%86400;
    hour = daylef/3600;
    hourlef = daylef%3600;
    min=hourlef/60;
    minlef = hourlef%60;
    sec=minlef;

    cout<<second<<" seconds ="<<day<<" days,"
    <<hour<<" hours,"<<min<<" minutes,"
    <<sec<<" seconds"<<endl;
    return 0;
}
//输入一个整数的秒，得到分别用day,hour,minute,second表示的时间
