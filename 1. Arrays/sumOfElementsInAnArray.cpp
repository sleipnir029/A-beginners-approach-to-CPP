#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
