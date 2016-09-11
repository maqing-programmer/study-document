#include<iostream>
using namespace std;
class Student;
void printCount();
class Student{
friend void printCount();
private :
int id;
static int count;
};
int Student::count=1;

void printCount(){
cout<<Student::count<<endl;
}

int main(){
printCount();
}
