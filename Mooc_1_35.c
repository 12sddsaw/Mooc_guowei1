#include <stdio.h>

#define MOD 32767

int main() {
    int n, k;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &k);

        int a = 1, b = 2, temp;
        if (k == 1) {
            printf("%d\n", a);
        }
        else if (k == 2) {
            printf("%d\n", b);
        }
        else {
            for (int i = 3; i <= k; i++) {
                temp = (2 * b + a) % MOD;
                a = b;
                b = temp;
            }
            printf("%d\n", b);
        }
    }

    return 0;
}
