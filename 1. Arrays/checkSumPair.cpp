/* Given an array A[] and a number x,
check for pair in A[] with sum as x. */

/* This checks for the first SumPair,
even if more than one SumPair exists. */

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {1, 7, 4, 45, 6, 10, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 16;

    sort(arr, arr+n);
    int l = 0, r = n-1;

    while (l<r){
        if (arr[l] + arr[r] == sum) {
            cout << "Array has two elements with given sum, " << "SumPair: " << arr[l] << "," << arr[r] << endl;
            break; }
        else if (arr[l] + arr[r] > sum){
            r--;}
        else {
            l++;}
    }


    return 0;
}
