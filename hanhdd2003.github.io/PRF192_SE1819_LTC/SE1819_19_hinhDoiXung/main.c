#include <stdio.h>
#include <math.h>

// mo rong: 
int main(){
	int n, i,j;
//	char c;
	scanf("%d", &n);
	for(i=1; i<=n ; i++){
		for(j=1; j<=i; j++){
				
			printf("%c", 'A'+j-1);
		}for(j = i-1 ; j>=1 ; j--){
			
			printf("%c", 'A'+j-1);
		}
		printf("\n");
	}
}








/*void tamGiacThuong(int h){
	int i, j;
    for ( i = 1; i <= h; i++)
    {
        for ( j = 1; j < 2 * h; j++)
        {
            if (abs(h - j) <= (i - 1))
            {
                printf("%d", i - abs(h - j));
            }
        }
        printf("\n");
    }
}
int main(){
    int h;
    scanf("%d", &h);
    tamGiacThuong(h);
    return 0;
}*/
