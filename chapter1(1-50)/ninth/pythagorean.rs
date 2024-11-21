fn main(){
    let mut result:i64=0;
    for i in 1..1000{
        for j in i..1000-i{
            let k=1000-i-j;
            if i*i+j*j==k*k{
                result+=i*j*k;
            }
        }
    }
    println!("{}",result);
}
