//Tavleen Kaur
//2010990730
// Set : 5
// Question 2


#include <iostream>
using namespace std;
//printing subarrays
void printarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        //initially taking sum as 0
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            //if sum is equal to zero, then printing the sumarray having sum zero
            if (sum == 0) {
                cout<<"{";
                for(int it=i;it<=j;it++)
                {
                    cout<<arr[it]<<",";
                }
                cout<<"}";
                cout<<endl;
            }
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //calling printarray function to return subarrays having sum = 0
    printarrays(arr, n);
    return 0;
}



