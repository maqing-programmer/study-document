#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
//使用malloc动态分配内存空间
 int *p=(int *)malloc(sizeof(int));
   *p=2;
cout<<*p<<endl;
free(p);

//使用new动态分配内存空间
int *q=new int(0);
  *q=10;
cout<<*q<<endl;
  delete q;
//使用new为数组动态分配内存空间
int *arr=new int[10];
for(int i=0;i<10;i++){
  arr[i]=10;
cout<<arr[i]<<endl;
} 
delete []arr;
 
return 0;
}



