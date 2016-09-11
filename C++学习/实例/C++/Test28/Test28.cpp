/*
通过虚函数实现多态
*/
#include<iostream>
using namespace std;
class A{
   public:
    virtual  void show(){//声明为虚函数
     cout<<"A"<<endl;
     }
  };

  class B:public A{
         public :
         void  show(){
           cout<<"B"<<endl;
           }
  };

int main(){
   
   B b;
   A a=b;
   a.show();//调用的就是父类中的方法

   A *p=&b;
     p->show();//调用就是子类中的方法

   A &x=b;
     x.show(); //调用的就是子类中的方法

   return 0;
}
