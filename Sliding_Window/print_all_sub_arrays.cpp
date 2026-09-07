#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nums[]={1,2,3,4,5,6,7,8};
    int n = nums.size();
    for(int k = 1 ; k < n ; k++){
        cout << "sub array of length " << k << endl;
    for(int point = 0 ; point < n-k+1 ;point++)
    {
    for(int i = point ; i <point+k ; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    }
    cout << endl;
}
}
