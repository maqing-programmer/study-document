#include<iostream>
using namespace std;

class Parent{
private:
  int x;
public :
  Parent(int x=0){
 }
  ~Parent(){
  
   }

 int  getX(){
  
   return x;
  }
 
};

class Child: private Parent{
private :
  double y;
public:
   Child(double y=0){
   
   }
   ~Child(){
  
   } 
  void  showX(){
   cout<<getX()<<endl;    
  }
};

int main(){
return 0;
}
