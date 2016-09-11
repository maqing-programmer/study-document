#include<iostream>
using namespace std;
class A{
      public :
        int x;
     public :
   A():x(0){
  cout<<"Create A"<<endl;   
 } 
 
 };
  
  class B : virtual public A{   //virtual在public前和public后都是一样的
    public:
    B(){
    cout<<"Create B"<<endl;
    }

  };

  class C :  virtual public A{
    public:
  C(){
   cout<<"Create C"<<endl;
   }  
};

  class D : public B, virtual public A , public C{
    public :
    D(){
    cout<<"Create D"<<endl;
    } 
 };
int main(){
D d;
return 0;
}
