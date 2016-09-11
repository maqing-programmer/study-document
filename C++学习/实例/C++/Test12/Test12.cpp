#include<iostream>
#include<stdlib.h>//系统函数存在头文件 malloc(); free();
#include<string.h>//strlen函数所在头文件
using namespace std;
class Student{
private:
char * name;
public :
Student(char *name){

cout<<"构造函数"<<endl;
this->name=(char *)malloc(sizeof(char)*(strlen(name)+1));
strcpy(this->name,name);
}
Student(const Student &stu)
{

 cout<<"拷贝构造函数"<<endl;
 name=(char *)malloc(sizeof(char)*(strlen(stu.name)+1));
 strcpy(name,stu.name);
}

~Student(){
free(name);
 cout<<"析构函数"<<endl;
}


};
int main()
{
 char *str="张三";
 Student stu1(str);
 Student stu2(stu1);
return 0;
}
