#include<iostream>//引用头文件
using namespace std;//使用标准命名空间
class Complex; //声明Complex类
ostream& operator<<(ostream& out,Complex complex);//声明输出运算符重载函数
class Complex{
friend ostream& operator<<(ostream& out,Complex complex);//声明类的友元函数
private:
  int real;
  int image;
public:
  Complex(int real,int image){
  this->real=real;
  this->image=image;
}
};
//实现运算符重载函数
ostream& operator<<(ostream& out,Complex complex){
   out<<complex.real<<","<<complex.image;
}
int main(){
Complex complex(1,2);
cout<<complex<<endl;
return 0;
}

