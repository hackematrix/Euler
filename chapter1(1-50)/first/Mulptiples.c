#include<stdio.h>
int main(){
  int i;
  int sum=0;
  for(i=3;i<1000;i++){
    if(i%3==0 || i%5==0)
      sum+=i;
  }
  printf("%3d",sum);
  return 0;
  
}
