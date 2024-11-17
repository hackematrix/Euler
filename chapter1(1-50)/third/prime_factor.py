def is_prime(n):
    if n==1:
        return False
    else:
        for i in range(2,n):
            if n%i==0:
                return False
    return True    
def find_max(a):
    max_num=a[0]
    for i in range(1,len(a)):
        if(a[i]>max_num):
            max_num=a[i] 
    return max_num
list_a=[]
num= 600851475143
for i in range(2,600851475144):
    if(is_prime(i)==True and num%i==0): 
        list_a.append(i)
        num=num//i
result=find_max(list_a)
print(result)
#效率太低，因为我是小白
