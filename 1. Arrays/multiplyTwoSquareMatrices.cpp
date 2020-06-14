/* multiply two square matrices */

#include <iostream>

using namespace std;

int main(){
    int m1[][2] = {{1, 2}, {3, 4}};
    int m2[][2] = {{1, 1}, {1, 1}};
    int res[2][2];
    int i, j, k;

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            res[i][j] = 0;
            for (k=0; k<2; k++){
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            cout << res[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}

