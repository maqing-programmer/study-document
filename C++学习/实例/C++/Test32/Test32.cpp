#include<iostream>
using namespace std;

int  fun(int a,int b){
  if(b==0){
    throw b;  
  }

   return a/b;
}

int main(){

 int result=0;

 try{

  result=fun(10,0);
 
 }catch(...){

  cout<<"除数为0,出现异常"<<endl;

 }

return 0;
}


