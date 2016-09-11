/*

构造方法的作用：实现类型的转换

*/
#include<iostream>
using namespace std;
class Student{
private:
int id;
public : 
Student(){

}

Student(int id){
this->id=id;
}

int getId(){
return this->id;
}
};

int main(){
Student student;

int t=100;
student=t;

cout<<student.getId()<<endl;
return 0;
}
