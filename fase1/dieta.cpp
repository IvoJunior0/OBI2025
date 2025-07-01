// DIETA -> 100 Pontos.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, dif = 0, s = 0; scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int p, g, c; scanf("%d %d %d", &p, &g, &c);
        s += p * 4 + g * 9 + c * 4;
        if (s > m) {
            printf(0);
            return 0;
        }
        dif = m - s;
    }
    printf("%d\n", dif);
    return 0;
}