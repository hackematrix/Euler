#include<stdio.h>
#define maxn 1010
int a[maxn];
int isprime(int n){
  int i;
  if (n==1)
    return 0;
  else 
   for(i=2;i*i<=n;i++)
    if(n%i==0)
      return 0;
  return 1; 
}
int max(int b[],int n){
  int max=0;
  int i;
  for(i=0;i<n;i++){
    if(b[i]>b[max])
      max=i;
  }
  return max;
}

int main(){
  int i;
  int k=0;
  int result;
 long long int num=600851475143;    
  for(i=2;i<=num;i++){
    if(isprime(i)&&num%i==0)
      {
      a[k++]=i;
      num/=i;
    }
  }
  result=max(a,k);
  printf("%d",a[result]);
  return 0;

}
