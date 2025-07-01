// CAFETERIA -> 50 Pontos.
// Subtarefa 2 e 4 incorretas.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, i = 1; scanf("%d %d %d %d", &a, &b, &c, &d);
    while (c - i*d > b) {
        if (c - i*d > a) {
            i++;
        }
        if (c - i*d >= a && c - i*d <= b || (c - i*d == a)) {
            printf("S\n");
            return 0;
        }
        if (c - i*d < a) {
            printf("N\n");
            return 0;
        }
    }
    return 0;
}