
#include <stdio.h>

// 计算最大公约数
int gcd(int n, int m) {
    int t;
    while (n != 0) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}

// 计算最小公倍数
long long lcm(int a[], int n) {
    long long result = a[0]; // 使用 long long 以避免溢出
    for (int i = 1; i < n; i++) {
        result = (result * a[i]) / gcd(result, a[i]);
    }
    return result;
}

int main() {
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    long long target; // 使用 long long 以避免溢出
    target = lcm(a, 20);
    printf("%lld\n", target); // 使用 %lld 来打印 long long 类型
   
