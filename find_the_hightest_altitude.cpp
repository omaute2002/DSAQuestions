// Finding the highest altitude from given array
#include<iostream>
using namespace std;
void largestAltitude(int arr[], int sol[], int n){
    int sum = 0;
    sol[0] = 0;
    for(int i=0; i<n; i++){
        sum = arr[i] + sol[i];
        sol[i+1] = sum;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of elements: "<<endl;
    cin>>n;
    int arr[n];
    int sol[n+1];
    cout<<"enter the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    largestAltitude(arr, sol, n);

    for(int i=0; i<(n+1); i++){
        cout<<sol[i]<<" ";
    }

    return 0;
}
