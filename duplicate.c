#include <stdio.h>

int duplicates(int *a, int n){
    int *p, *q;
    

    for(p=a;p<a+n-1;p++){
        for(q=p+1;q<a+n;q++){
            if (*p == *q){
                return 1;
            }

        }
    }   
    return 0;
}

int main()
{
    int i;
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int result = duplicates(a, n);
    
    if (result)
        printf("There are duplicates in the array\n");
    else
        printf("No duplicates\n");
    
    return 0;
}
