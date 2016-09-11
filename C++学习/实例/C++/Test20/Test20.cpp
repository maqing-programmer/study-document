#include<iostream>
using namespace std;
class Student{

private :
   int id;

public :

 Student(){
 cout<<"Student()"<<endl;
}
 Student(int id){
  cout<<"Student(int id)"<<endl;
 this->id=id;

 }
 
 ~Student(){

  cout<<"~Student()"<<endl;
}

 void setId(int id){
  this->id=id;
 }

  int getId(){
   return id;
  }
 
};
int main(){

Student *pstu=new Student();//使用new为自定义类类型的对象分配内存空间
   pstu->setId(10);
cout<<pstu->getId()<<endl;
  
   delete pstu; 

Student *arr=new Student[10];

   delete []arr;

return 0;
}






