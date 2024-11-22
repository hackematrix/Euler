#include<iostream>
using namespace std;
int is_prime(long long int n){
   long long int i;
  if(n<=1)
    return 0;
  else
    for(i=2;i*i<=n;i++)
      if(n%i==0)
        return 0;
  return 1;
}
int main(){
  long long int i;
  long long int result=0;
  for(i=2;i< 2000000;i++)
    if(is_prime(i))
      result+=i;
  cout<<result<<endl;
  return 0;
}
