#include <iostream>

using namespace std;

int main(){
    int arr[] = {10, 20, 105, 100};
    int m = arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i<n; i++){
        if (m < arr[i])
            m = arr[i];
    }
    cout << m;

    return 0;
}
