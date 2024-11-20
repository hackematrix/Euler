fn is_prime(n:i64) ->bool{
    if n<=1
    {
        return false;
    }
    for i in 2..=(n as f64).sqrt() as i64{
        if n%i==0{
            return false;
        }
    }
    true
}//判断质数

fn main(){
    let mut v:Vec<i64>=Vec::new();
    let mut count=0;
    let mut i=2;
    while count<10001{
        if is_prime(i){
            v.push(i);
            count+=1;
        }
        i+=1;
    }
    println!("{}",v[v.len()-1]);
}
