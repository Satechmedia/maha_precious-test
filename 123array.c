#include <stdio.h>

int is123Array(int a[], int len)
{
    if (len == 0)
    {
        return 0;
    }

    if (len % 3 != 0)
    {
        return 0;
    }

    for (int i = 0; i < len; i += 3)
    {
        if (a[i] != 1 || a[i + 1] != 2 || a[i + 2] != 3)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // Test cases
    int test1[] = {1, 2, 3, 1, 2, 3, 1, 2, 3};
    int test2[] = {1, 2, 3, 3, 2, 1};
    int test3[] = {0, 1, 2, 3, 1, 2, 3};
    int test4[] = {1, 2, 3};
    int test5[] = {};

    printf("Test 1: %d\n", is123Array(test1, 9));
    printf("Test 2: %d\n", is123Array(test2, 6));
    printf("Test 3: %d\n", is123Array(test3, 7));
    printf("Test 4: %d\n", is123Array(test4, 3));
    printf("Test 5: %d\n", is123Array(test5, 0));
    return 0;
}