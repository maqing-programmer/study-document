/*
 C++中读写文件

 (1)创建文件流对象
 (2)打开文件
 (3)对文件进行读写
 (4关闭文件流对象 
 
*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;


int main(){
ofstream os; //创建文件流对象

os.open("test.txt",ios::out);//打开文件
 if(!os){
  cerr<<"打开文件出错";
   exit(1);
  } 

 os<<"文件读写";//对文件进行读写

 os.close();//关闭文件流对象

}


