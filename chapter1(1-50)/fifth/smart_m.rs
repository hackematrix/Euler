fn gcd(mut n:u64,mut m:u64)->u64{
    let mut t;
    while n!=0{
        t=m%n;
        m=n;
        n=t;
    }
    m
}
fn lcm(arr:Vec<u64>,size:usize) -> u64{
    let mut result:u64=arr[0];
    for i in 1..size{
        result=(result*arr[i])/gcd(result,arr[i]);
    }
    result
}
fn main(){
    let v:Vec<u64>=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20].to_vec();
    let target:u64;
    target=lcm(v,20);
    println!("{}",target);

}
