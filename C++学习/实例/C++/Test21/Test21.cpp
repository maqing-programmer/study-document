#include<iostream>
using namespace std;
class Parent{
private:
  int x;
public :
  Parent(int x=0){
  cout<<"Create Parent"<<endl;
  this->x=x;
  }

  ~Parent(){
    cout<<"Free Parent"<<endl;
  }
  int getX(){
  return x;
 } 

};

class Child:private Parent{
  private :
   double y;
public :
   void showX(){
   cout<<getX()<<endl;
  }

};  
int main(){
return 0;
}
