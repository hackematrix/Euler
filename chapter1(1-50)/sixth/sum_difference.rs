fn sum_difference(n:u64)->u64{
            let mut sum:u64=0;
            let mut sum_1:u64=0;
            let mut sum_2:u64=0;
            let  sum_3:u64;
            for i in 1..=n{
                sum=sum+i*i;
                sum_1=sum_1+i;
            }
            sum_2=sum_2+sum_1*sum_1;
            sum_3=sum_2-sum;
            sum_3
        }
        fn main(){
            let  result:u64;
            result=sum_difference(100);
            println!("{}",result);

        }
