/* find sum of elements in a given array */


#include <iostream>

using namespace std;

int sum(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    sum(arr, n);
    return 0;
}

int sum(int arr[], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << sum;
}
