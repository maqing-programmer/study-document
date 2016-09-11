#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;//标准的命名空间
class Student{
private:
char *name;
public:
  Student(char *name){
  this-> name=(char *)malloc(sizeof(char)*(strlen(name)+1));  
  strcpy(this->name,name);
}
  


char* getName(){
return name;
}
};
int main(){
char *str="张三";
Student stu1(str);
Student stu2(stu1);
cout<<stu1.getName()<<endl;
return 0;
}
