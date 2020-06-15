/* Given two unsorted arrays,
find all pairs whose sum is x. */

/* Using Hash Map and
checks all possible SumPairs. */

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int arr1[] = {1, 0, -4, 7, 6, 4};
    int arr2[] = {12, 2, 4, -3, 2, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int sum = 8;

    unordered_set <int> s;
    for (int i=0; i<n; i++){
        s.insert(arr1[i]);
    }

    for (int i=0; i<m; i++){
        int temp = sum - arr2[i];
        if (s.find(temp) != s.end()){
            cout << "SumPair: " << temp << ", " << arr2[i] << endl;
        }
    }
    return 0;
}
