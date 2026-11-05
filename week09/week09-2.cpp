// week09-2.cpp SOIT106_ADVANCE_009
#include <iostream>
using namespace std;

void f(int n) {
    if (n == 0) return;  // 遞迴終止條件：當 n 為 0 時停止
    cout << n % 10;      // 印出目前 n 的最後一位數字（個位數）
    f(n / 10);           // 遞迴呼叫：剝除最後一位數字後繼續印出剩餘部分
}

int main()
{
    int n;
    cin >> n;
    f(n);
    cout << "\n";
}
