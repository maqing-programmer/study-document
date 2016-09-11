#include<iostream>
using namespace std;
class A{
 public:
   void show(){
   cout<<"A"<<endl;
  }   

  void show(int i){
   cout<<i<<endl;
  }
 };

class B :public A{

public:

   void show(){
       cout<<"B"<<endl;
   }

};

int main(){
B b;
b.show();//调用子类中的show方法  
//b.show(1);//子类中的show方法覆盖了从父类中继承过来的同名方法,所以无法调用
  return 0;
}
