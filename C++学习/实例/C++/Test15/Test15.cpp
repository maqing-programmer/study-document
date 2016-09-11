#include<iostream>
using namespace std;
class Student{
private :
int id;

public :
//常成员方法中是不允许对成员变量作修改的。
void fun()const{
//    this->id=2;//这是不允许的
}
};
int main(){

}
