#include<iostream>
using namespace std;

class A{
public:

virtual void show(int i){
  cout<<"B"<<endl;
}

};

class B : public A{
public :
  void show(){
     cout<<"B"<<endl;
  }  

};
int main(){
B b;
A *p=&b;
 p->show(1);//调用的也是子类中的方法,多态 
return 0;

}

