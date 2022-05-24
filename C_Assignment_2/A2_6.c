#include <stdio.h>

int main() {
    int row, col;
    int n;
    scanf("%d",&n);
    for(row=0; row<n; row++){
        for(col=0; col<row+1; col++){
            printf(" ");
        }
        for(col=0; col<n-row; col++){
            printf("* ");
        }
        printf("\n");
         
    }
    for(row=1; row<n; row++){
        for(col=0; col<=n-1-row; col++){
          printf(" ");
        }
        for(col=0; col<row+1; col++){
            printf("* ");  
        }
        printf("\n");
    }
    
    return 0;
}

// by mega
