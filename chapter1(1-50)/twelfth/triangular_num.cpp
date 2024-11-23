#include<iostream>
#include<cmath>
using namespace std;

int sum_num(int n){
  return ((n+1)*n)/2;
}//高斯求和

int count_factor(int n){
  int i;
  int count=0;
  for(i=1;i<=sqrt(n);i++){
    if(n%i==0)
      count=count+2;
    if(i*i==n)
      count--;
  }
  return count;
}//计算因数
 
int main(){
  int i=1;
  int result=0;
  while(count_factor(sum_num(i))<=500){
    i++;
  }
  result+=sum_num(i);
  cout<<result<<endl;
  return 0;
}
