#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, i, j;
    scanf("%d", &n);
    int arr[n];    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &a);
	printf("OUTPUT: \n");
    // Duyet mang de tìm các cap phan tu có tong bang so nguyên a
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if((arr[i] + arr[j]) == a){
                printf("%d\n%d", i, j);
                exit(0);
            }
        }
    }

    return 0;
}

