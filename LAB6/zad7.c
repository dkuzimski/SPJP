
#include <stdio.h>

int search(int a[], int n, int s) {
    if(n < 0) {
        return -1;
    }
    if(a[n] == s) {
        return n;
    }
    return search(a, n - 1, s);
}

int binary(int a[], int l, int r, int x) {
    if (r >= 1) {
        int mid = l + (r - l)/2;
    if (a[mid] == x) return mid;
    if (a[mid] > x) return binary(a, l, mid - 1, x);
    return binary(a, mid + 1, r, x);
    } else {
        return -1;   
    }
}

int main()
{
    int x[] = {1, 2, 3, 4, 5};
    int n = 4;
    int szukana = 6;
    printf("a) %d\n", search(x, n, szukana));
    printf("b) %d\n", binary(x, 0, n, szukana));
    
    return 0;
}