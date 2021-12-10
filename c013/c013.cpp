#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], f[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> f[i];
    }

    // i 組測資
    for (int i = 0; i < n; i++) {
        // j 個波
        for (int j = 0; j < f[i]; j++) {
            // 輸出k
            for (int k = 0; k < a[i]; k++) {
                for (int l = 0; l <= k; l++) {
                    printf("%d", k+1);
                }
                printf("\n");
            }
            for (int k = a[i] - 1; k > 0; k--) {
                for (int l = 0; l < k; l++) {
                    printf("%d", k);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
} 
