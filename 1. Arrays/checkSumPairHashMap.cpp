/* Given an array A[] and a number x,
check for pair in A[] with sum as x. */

/* Using Hash Map and
checks for every possible SumPair. */

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int arr[] = {-1, 7, 9, 16, 6, 10, 0, 17, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 16;

    unordered_set <int> s;
    for (int i=0; i<n; i++){
        int temp = sum - arr[i];
        if (s.find(temp) == s.end()){
            s.insert(arr[i]);
        }
        else {
            cout << "Pair with given sum " << sum << " is " << arr[i] << "," << temp << endl;
        }
    }
    return 0;
}
