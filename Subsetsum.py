#include <stdio.h>

int a[20], x[20], n, sum;

void sub(int i, int s)
{
    int j;

    if (s == sum)
    {
        printf("Subset: ");
        for (j = 0; j < i; j++)
            if (x[j] == 1)
                printf("%d ", a[j]);
        printf("\n");
        return;
    }

    if (i == n || s > sum)
        return;

    x[i] = 1;
    sub(i + 1, s + a[i]);

    x[i] = 0;
    sub(i + 1, s);
}

int main()
{
    int i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter sum: ");
    scanf("%d", &sum);

    sub(0, 0);

    return 0;
}
