//pallindrome

/*algoritham

num ko "reverse" krke compare kra denge

*/



#include<bits/stdc++.h>
using namespace std;

int main(){

    int num =156561;
    int temp = num;
    int revNum = 0;

    while (temp!=0)
    {
        revNum = temp%10 + revNum*10;  // 8+0*10 =8, 4+8*10=84, 4+84*10=844 and so on  
        temp = temp/10;
    }
    //  cout<<num
    if(revNum==num){
        cout<<"it is palllindrome";
    }
    else{
        cout<<"not pallindrome";
    }
   
}