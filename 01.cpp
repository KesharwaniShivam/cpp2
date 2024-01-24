//given a sorted array and a target value , find the index of target and if not present in array ,return the possible index

#include<bits/stdc++.h>
using namespace std;

int main(){
int target = 4;
vector<int> arr = {1,3,5,7,8};

int left = 0;
int right = arr.size()-1;
// cout<<right;

int mid = (left + right)/2;
// cout<<mid;

while (left<=right)
{
    if(target == arr[mid]){
        cout<<mid;
        return 0;
    }
    else if (target > arr[mid])
    {
        left++;
        mid = (left+right)/2;
    }
    else if (target < arr[mid])
    {
        right--;
        mid = (left+right)/2;
    }
    if (left==right)
    {
        cout<<left;
        return 0;
    }
    
}


}
