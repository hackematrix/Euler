#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  long long int result=0;
  for(a=1;a<1000;a++){
    for(b=1;b<1000;b++){
      for(c=1;c<1000;c++){
        if(a+b+c==1000 &&a*a+b*b==c*c)
          result=a*b*c;
      }
    }
  }
  cout<<result<<endl;
  r
