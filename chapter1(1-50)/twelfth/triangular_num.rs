fn sum_num(n:i32)->i32{
    (n+1)*n/2
}//高斯求和
fn count_factor(n:i32)->i32{
    let mut _i:i32; //暂时不会使用
    let mut count:i32=0;
    for i in 1..=(n as f64).sqrt() as i32{
        if n%i==0{
            count=count+2;
        }
        if i*i==n{
            count=count-1;
        }
    }
    count
}//计算因数的个数
fn main(){
     let mut i=1;
    let mut result=0;
    while count_factor(sum_num(i))<=500{
        i=i+1;
    }
    result+=sum_num(i);
    println!("{}",result);
 }
