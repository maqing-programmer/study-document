/*
模板类
*/
#include<iostream>
using namespace std;

//声明Student类,因为是模板类，所以要加上 template <typename Type>
template <typename Type>
class Student;

//声明show函数
template <typename Type>
void show(Student<Type> stu);

template <typename Type>
class Student{
 friend void show<Type>(Student<Type> stu);
private:
   Type id;
public :
   Student(Type id);
}; 

template <typename Type>
Student<Type>::Student(Type id){
this->id=id;
}
template <typename Type>
void show(Student<Type> stu){
cout<<stu.id<<endl;
}
int main(){
Student<int> stu1(10);
show(stu1);
return 0;
}
