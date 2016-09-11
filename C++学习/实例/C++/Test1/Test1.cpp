#include<iostream>
#include <string>
using namespace std;
class Student{

private:
int id;
string name;

public:
void setId(int id){
this->id=id;
}
void setName(string name){
this->name=name;
}
int getId(){
return id;
}

string getName(){
return name;
}

};
int main(){
Student student;
student.setName("张三");
student.setId(1);
cout<<student.getId()<<","<<student.getName()<<endl;
}
