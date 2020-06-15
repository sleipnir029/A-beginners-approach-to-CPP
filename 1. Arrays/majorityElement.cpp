/* Given an array,
find majority element. */

/* an element that appears more than n/2 times. */

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0;
    int index = -1;
    int m;
    for (int i=0; i<n; i++){
        int lcount = 0;
        for (int j=0; j<n; j++){
            if (arr[i] == arr[j]){
                lcount++;
            }
            if (lcount > maxCount){
                maxCount = lcount;
                index = i;
                m = lcount;
            }
        }
    }
    if (maxCount > n/2){
        cout << "Majority Element: " << arr[index] << " (" << m << " times)" << endl;
    }
    else {
        cout << "No majority Element." << endl;
    }
    return 0;
}
