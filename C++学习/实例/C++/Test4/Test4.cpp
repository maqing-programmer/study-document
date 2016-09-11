#include<iostream>
#include<string>
using namespace std;
class Student{
private:
int id;
string name;
public:
  Student(){

  }

  Student(int id,string name){
    this->id=id;
    this->name=name;
  } 	

};

int main(){
Student student1;
Student student2(1,"张三");
}
