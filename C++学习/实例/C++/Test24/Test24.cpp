#include<iostream>
using namespace std;
 class Parent1{
   public :
    int  x;
  public: 
     Parent1():x(0){
     this->x=x;
     }
 };

 class Parent2{
   public :
      int x;
        Parent2():x(0){
         this->x=x;
        }
  };
 
  class Child :public Parent1,public Parent2{
 
  };

  int main(){
   Child c;
    c.Parent1::x=2;
    c.Parent2::x=3;
    return 0;
  }

