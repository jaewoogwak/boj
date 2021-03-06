#include <iostream>
using namespace std;

// baekjoon 1085 : 최대공약수와 최소공배수
// https://www.acmicpc.net/problem/1085


int main(void) {
    int x,y,w,h;
    
    int m1, m2;
    cin >> x >> y >> w >> h;
    
    //가로
    if(w-x < x-0) m1 = w-x;
    else m1 = x-0;
    
    //세로
    if(h-y < y-0) m2 = h-y;
    else m2 = y-0;
    
    if(m1 > m2) cout << m2;
    else cout << m1;
    return 0;
}