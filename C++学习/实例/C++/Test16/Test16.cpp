/*
 模板函数
*/
#include<iostream>
using namespace std;

template <typename Type>
Type Max(Type a,Type b){
return a>b?a:b;
}
int main(){
cout<<Max(1,2)<<endl;
cout<<max(1.1,1.2)<<endl;
cout<<max('A','B')<<endl;
return 0;
}
