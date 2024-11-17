fn is_prime(n:i64)->bool{
    if n==1{
        return false;
    }
    for i in 2..=(n as f64).sqrt() as i64{
        if n%i==0{
            return false;
        }
    }
    true
}

fn main(){
    let  mut num=600851475143;

    let mut vec:Vec<i64>=Vec::new();
    for i in 2..=(num as f64).sqrt() as i64{
        if num%i==0 && is_prime(i)==true{
            vec.push(i);
            num=num/i;
        }
    }
    let max_num=vec.iter().max().unwrap();
    println!("{}",max_num);
}
