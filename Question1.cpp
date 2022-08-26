//Tavleen Kaur
//2010990730
// Set : 5
// Question 1

#include <bits/stdc++.h>
using namespace std;

//function to print longest array length having sum = k
int LenOfSubarr(int arr[],
                    int n,
                    int k)
{

    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (sum == k)
            maxLen = i + 1;


        if (um.find(sum) == um.end())
            um[sum] = i;

        if (um.find(sum - k) != um.end())
        {

            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }

    return maxLen; 
}

int main()
{
    
    int n;
    cout<< " enter n: ";
    cin>>n;
    int k;
    cout<<" enter target: ";
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //printing length
    cout << "Length = ";
        cout << lenOfSubarr(arr, n, k);
    return 0;
}
