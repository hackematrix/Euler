fn is_palindrome(n:i64)->bool{
    let mut a=n;
    let mut b=0;
    while a!=0{
        b=b*10+a%10;
        a/=10;
    }
    if b==n {
        return true;
    }
    return false;
}
fn main(){
    let mut vec:Vec<i64>=Vec::new();
    let mut result;
    for i in 100..=999{
        for j  in 100..=999{
            result=i*j;
            if is_palindrome(result){
                vec.push(result);
            }
        }
    }
    let max_num=vec.iter().max().unwrap();
    println!("{}",max_num)
}
