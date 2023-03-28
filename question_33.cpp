/*

Move all the negative elements to one side of the array
Input: 7, 11, -2, -8, 6, -3, -4, 2
Output: -8, -3, -2, -4, 6, 11, 2, 7

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int low=0;
    int high=n-1;

    while(low<high)
    {
        while(arr[low]<0)
            low++;
        while(arr[high]>0)
        high--;

        if(high>low)
        swap(arr[low],arr[high]);


    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
