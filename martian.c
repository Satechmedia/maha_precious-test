#include <stdio.h>

int isMartian(int a[], int len)
{

    if (len == 0)
    {
        return 0;
    }

    int count1s = 0;
    int count2s = 0;

    for (int i = 0; i < len; i++)
    {
        // Check for adjacent equal elements
        if (i < len - 1 && a[i] == a[i + 1])
        {
            return 0;
        }

        if (a[i] == 1)
        {
            count1s++;
        }
        else if (a[i] == 2)
        {
            count2s++;
        }
    }

    return count1s > count2s ? 1 : 0;
}

int main()
{

    int test1[] = {1, 3};
    int test2[] = {1, 2, 1, 2, 1, 2, 1, 2, 1};
    int test3[] = {1, 3, 2};
    int test4[] = {1, 3, 3, 2, 1};
    int test5[] = {1, 2, -18, -18, 1, 2};
    int test6[] = {};
    int test7[] = {1};
    int test8[] = {2};

    printf("Test 2 {1, 2, 1, 2, 1, 2, 1, 2, 1}: %d\n", isMartian(test2, 9));
    printf("Test 3 {1, 3, 2}: %d\n", isMartian(test3, 3));
    printf("Test 4 {1, 3, 3, 2, 1}: %d\n", isMartian(test4, 5));
    printf("Test 5 {1, 2, -18, -18, 1, 2}: %d\n", isMartian(test5, 6));
    printf("Test 6 {}: %d\n", isMartian(test6, 0));
    printf("Test 7 {1}: %d\n", isMartian(test7, 1));
    printf("Test 8 {2}: %d\n", isMartian(test8, 1));

    return 0;
}