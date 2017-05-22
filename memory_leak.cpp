#include<iostream>
using namespace std;

int* memory(){
   int *p = new int(20);
   for(int i=0;i<10;i++){
       p[i]=i;
   } 
    cout<<"*p="<<*p<<"\t"<<"p="<<p<<endl;
   return p;
  
}

int main(){
    int *pa =memory();
    for(int i=0;i<10;i++){
        cout<<*(pa+i)<<'\t';
    }cout<<endl;
    return 0;
}
