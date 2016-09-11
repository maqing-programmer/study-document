#include<iostream>
using namespace std;
 class A{
      public :
        int x;
  };
  
  class B : virtual public A{   //virtual在public前和public后都是一样的


  };

  class C :  virtual public A{

  };

  class D:public B,public C{
  
  };


int main()
 {
  D d;
  d.x=1;//这时候就不会产生二义性
return 0;
}
