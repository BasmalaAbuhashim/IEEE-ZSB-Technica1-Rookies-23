#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int mat[3][3]={0};

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int val;
            cin >> val;
            mat[i][j] += val;
            mat[i - 1][j] += val;
            mat[i][j - 1] += val;
            mat[i + 1][j] += val;
            mat[i][j + 1] += val;
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << 1 - mat[i][j] % 2;
            if (j == 3)
                cout << endl;
        }
    }

    return 0;
}
