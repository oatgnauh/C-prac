#ifndef FEATUREOFCLASS_H
#define FEATUREOFCLASS_H
/*
如果以正常g++命令编译，如:g++ featureofclass.cpp,将得到一个错误：
featureofclass.h:4:7: error: constructor required before non-static data member for ‘Screen::height’ has been parsed
原因在于构造函数的这种使用方法是C11标准的，我的编译器没有指定
解决方法： g++ featureofclass.cpp -std=c++11 以这条命令来编译，编译成功
*/
class Screen{
public:
    typedef std::string::size_type pos;
    Screen()=default;   //构造函数
    Screen(pos ht, pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    char get() const {   return contents[cursor];  }     //隐式内联
    
    inline char get(pos ht,pos wd) const; //重载
    Screen &move(pos r, pos c); //函数声明
    void some_menber() const;   //const 函数，不能改变类数据成员的值
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;  //如果使用mutable定义类数据成员，那么即使被const类函数调用也能修改它的值

};
//在类外部实现函数
inline Screen &Screen::move(pos r, pos c){   //在类的外部定义inline
    pos row = r*width;
    cursor = row + c;
    return *this;
}
char Screen::get(pos r, pos c) const{   // 注意！！若将成员成员函数声明为const，则该函数不允许修改类的数据成员
    pos row = r*width;
    return contents[row+c];
}


#endif
