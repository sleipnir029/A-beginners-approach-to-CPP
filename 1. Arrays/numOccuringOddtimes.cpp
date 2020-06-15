/* Find the Number Occurring
Odd Number of Times. */

/* all elements occurring odd number of times */

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int arr[] = {2, 3, 2, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> s;

    for (int i=0; i<n; i++){
        s[arr[i]]++;
    }
    for (auto i : s){
        if (i.second % 2 != 0){
            cout << "Number: " << i.first << ", occurring " << i.second << " times." << endl;
        }
    }
    return 0;
}
