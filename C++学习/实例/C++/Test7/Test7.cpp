/*
 拷贝构造函数
*/

#include<iostream>
using namespace std;
class Student{

private:
int id;

public:

Student(){

}
Student(int id){
this->id=id;
}
Student(Student &stu){
id=stu.id;
cout<<"拷贝构造函数"<<endl;
}
int getId(){
return id;
 }
};
int main(){
Student stu1(1);
Student stu2(stu1);
Student stu3=stu1;
return 0;

}
