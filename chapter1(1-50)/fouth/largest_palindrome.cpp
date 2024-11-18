#include<iostream>
using namespace std;
#define maxn 10005
int a[maxn];

int is_palindrome(int n){
     int i;
     int a,b;
     a=n;
     b=0; 
     while(a!=0){
      b=10*b+a%10;
      a/=10;
  }
  if(b==n)
    return 1;
  else 
    return 0;
}//判断回文数(看倒序数是否等于该数)

int find_max(int a[],int n){
  int max_index=0;
  int i;
  for(i=0;i<n;i++){
    if(a[max_index]<a[i]){
      max_index=i;
    }
  }
  return a[max_index];
}

int main(){
  int i,j;
  int k=0;
  int flag,target;
  for(i=100;i<=999;i++){
    for(j=100;j<=999;j++){
      {
        flag=i*j;
        if(is_palindrome(flag))
          a[k++]=flag;
      }
    }
  }
  target=find_max(a,k);
  cout<<target<<endl;
  return 0;
}
