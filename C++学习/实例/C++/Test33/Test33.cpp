#include<iostream>
using namespace std;
int fun(int a,int b){
  return a/b;
}
int main(){
  try{
 
  fun(1,0);
   
 }catch(...){
  cout<<"出现异常"<<endl;
 }
return 0;
 
}
