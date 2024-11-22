fn is_prime(n:i64)->bool {
    if n <= 1 {
        return false;
    }
    for i in 2..=(n as f64).sqrt() as i64 { //开根号要转化为f64
        if n % i == 0 {
            return false;
        }
    }
    true
}

fn  main(){
    let mut result:i64=0;
    for i in 2..2000000{
        if is_prime(i)==true{
            result+=i;
        }
    }
    println!("{}",result);
}
