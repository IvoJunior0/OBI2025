// BARRAS -> 100 Pontos.
#include <bits/stdc++.h>
using namespace std;
int l[100];
int m[100][100];
int main() {
    int n, a; scanf("%d", &n);
    int me = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d ", &a);
        l[i] = a;
        if (a > me) {
            me = a;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = me; j >= 0; j--) {
            if (l[i] >= 0) {
                m[j][i] = 1;
                l[i] -= 1;
            }
        }
    }
    for (int i = 0; i < me; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}