#include<iostream>
using namespace std;

class Parent1{
private :
   int x;

public :
  Parent1(int x){
    cout<<"Create Parent1"<<endl;  
    this->x=x;
  }
 
 ~Parent1(){
        cout<<"Free Parent1"<<endl;          
 }
  
};

class Parent2{
private :
   int x;

public :
  Parent2(int x){
    cout<<"Create Parent2"<<endl;
    this->x=x;
  }
 
 ~Parent2(){
        cout<<"Free Parent2"<<endl;
 }

};

class Parent3{
private :
   int x;

public :
  Parent3(int x){
    cout<<"Create Parent3"<<endl;
    this->x=x;
  }
 
 ~Parent3(){
        cout<<"Free Parent3"<<endl;
 }

};

class Child :public Parent1,public Parent2,public Parent3{

public :

   Child(int x):Parent1(x),Parent2(x),Parent3(x),p3(x),p2(x),p1(x){
    cout<<"Create Child"<<endl;
  }

  ~Child(){
  cout<<"Free Child"<<endl;
 }
private:
   Parent3 p3;
   Parent2 p2;
   Parent1 p1;
};

int main(){
Child c(1);
return 0;
}

