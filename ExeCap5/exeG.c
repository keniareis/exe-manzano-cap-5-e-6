#include <stdio.h>

int main() {
    int e=0, r=1;

    while (e<=15)
    {
        printf("%d, ", r);
        r = r * 3;
        e++;
    }

    return 0;
}
