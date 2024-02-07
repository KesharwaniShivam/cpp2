#include<bits/stdc++.h>
using namespace std;
int main(){

    int num = 9999;
    int sum=0;

    while (num!=0)
    {
        sum =  sum + num%10;
        num=num/10;
        // sum+=newNum;
    }
    cout<<sum;
}