#include<iostream>
#include <string>
using namespace std;
class Student{
private:
int id;
string name;
public :
void setId(int id);
void setName(string name);
int getId();
string getName();

};

void Student::setId(int id){
this->id=id;
}

void Student::setName(string name){
this->name=name;
}
int Student::getId()
{
return id;
}
string Student::getName(){
return name;
}

int main(){
Student student;
student.setId(1);
student.setName("Hello");
cout<<student.getId()<<","<<student.getName()<<endl;

}
