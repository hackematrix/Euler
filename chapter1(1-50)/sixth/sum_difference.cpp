#include<iostream>
using namespace std;
int main(){
   int i;
  long long int sum=0;
  int sum_1=0;
  long long  int sum_2=0;
  long long int sum_3;
  for(i=1;i<=100;i++){
      sum=sum+i*i;
      sum_1=sum_1+i;
  }
  sum_2=sum_2+sum_1*sum_1;
  sum_3=sum_2-sum;
  cout<<sum_3<<endl;
  return 0;
  
  
}
