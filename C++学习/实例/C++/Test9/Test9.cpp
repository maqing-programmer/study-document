/*
 引用(&) 
 引用就是一个对象的别名
*/
#include<iostream>
using namespace std;
int main(){
int a=1;
int &b=a;
b=2;
cout<<a<<endl;
return 0;
}

