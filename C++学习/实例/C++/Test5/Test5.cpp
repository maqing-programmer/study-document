#include <iostream>
#include<string>
using namespace std;
class Student{
private :
int id;
string name;

public :

Student(int id,string name){
this->id=id;
this->name=name;
cout<<"创建对象"<<this<<endl;
}

~Student(){
cout<<"释放对象"<<this<<endl;
}

};
int main(){
Student student(1,"张三");
return 0;
}
