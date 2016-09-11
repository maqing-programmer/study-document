#include<iostream>
using namespace std;
class A{
      public :
        int x;
  };
  class B :public A{


  };

  class C:public A{

  };

  class D:public B,public C{
  
  };

int main(){
D d;
d.B::x=1;
d.C::x=2;
return 0;
}
