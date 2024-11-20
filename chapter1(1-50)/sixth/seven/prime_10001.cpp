#include<iostream>
using namespace std;
int is_prime(int n){
  int i;
  if(n<=1)
    return 0;
  for(i=2;i*i<=n;i++)
    if(n%i==0)
      return 0;
  return 1;

}
int main(){
  int count=0;
  int i=2;
  int a[100005];
  while(count<10001)
  {
    if(is_prime(i)){
      a[count]=i;
      count++;
    }
    i++;
  }
  cout<<a[count-1]<<endl;
  return 0;
}
