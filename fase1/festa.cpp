// FESTA -> 100 Pontos.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int e, s, l, d = 0; scanf("%d %d %d", &e, &s, &l);
    d = abs(e - l) + abs (e - s) + abs(s - l);
    printf("%d\n", d);
    return 0;
}