#include<iostream>
using namespace std;
template <typename Type>
class Student{
private:

    Type id;

public :
  Student(Type id);
 
  Type getId();
};

template <typename Type>
Student<Type>::Student(Type id){
   this->id=id;
}

template <typename Type>
Type Student<Type>::getId(){
return id;
}
int main(){

Student<int> stu1(10);
cout<<stu1.getId()<<endl;

Student<char> stu2('A');
cout<<stu2.getId()<<endl;
}
