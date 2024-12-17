#include <stdio.h>

int is235Array(int a[], int len) {
    int count2 = 0;  
    int count3 = 0;  
    int count5 = 0;  
    int countNone = 0;  
    
    for(int i = 0; i < len; i++) {
        int by2 = (a[i] % 2 == 0);
        int by3 = (a[i] % 3 == 0);
        int by5 = (a[i] % 5 == 0);
        
        if(by2) count2++;
        if(by3) count3++;
        if(by5) count5++;
        if(!by2 && !by3 && !by5) countNone++;
    }
    

    return (count2 + count3 + count5 + countNone == len);
}

int main() {
    // Test cases
    int test1[] = {2, 3, 5, 7, 11};              
    int test2[] = {2, 3, 6, 7, 11};              
    int test3[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};  
    int test4[] = {2, 4, 8, 16, 32};             
    int test5[] = {3, 9, 27, 7, 1, 1, 1, 1, 1};  
    int test6[] = {7, 11, 77, 49};               
    int test7[] = {2};                           
    int test8[] = {};                            
    int test9[] = {7, 2, 7, 2, 7, 2, 7, 2, 3, 7, 7}; 
    
    printf("Test 1 {2,3,5,7,11}: %d\n", is235Array(test1, 5));
    printf("Test 2 {2,3,6,7,11}: %d\n", is235Array(test2, 5));
    printf("Test 3 {2,3,4,5,6,7,8,9,10}: %d\n", is235Array(test3, 9));
    printf("Test 4 {2,4,8,16,32}: %d\n", is235Array(test4, 5));
    printf("Test 5 {3,9,27,7,1,1,1,1,1}: %d\n", is235Array(test5, 9));
    printf("Test 6 {7,11,77,49}: %d\n", is235Array(test6, 4));
    printf("Test 7 {2}: %d\n", is235Array(test7, 1));
    printf("Test 8 {}: %d\n", is235Array(test8, 0));
    printf("Test 9 {7,2,7,2,7,2,7,2,3,7,7}: %d\n", is235Array(test9, 11));
    
    return 0;
}